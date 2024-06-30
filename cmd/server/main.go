package main

import (
	"log"
	"os"
	"otter/config"
	"otter/internal/adapters/api"
	"otter/internal/adapters/db/postgres"
	"otter/internal/adapters/db/redis"
	"otter/internal/adapters/email"
	"otter/internal/core/services"
)

func main() {
	config.LoadConfig()
	db := postgres.NewPostgresDB(os.Getenv("DATABASE_URL"))
	redisClient := redis.NewRedisClient(os.Getenv("REDIS_URL"))
	emailService := email.NewSMTPService(
		os.Getenv("SMTP_HOST"),
		os.Getenv("SMTP_PORT"),
		os.Getenv("SMTP_USERNAME"),
		os.Getenv("SMTP_PASSWORD"),
	)

	userRepo := postgres.NewUserRepository(db)
	sessionRepo := redis.NewSessionRepository(redisClient)

	authService := services.NewAuthService(userRepo, sessionRepo, emailService)
	loginService := services.NewLoginService(userRepo, sessionRepo)
	logoutService := services.NewLogoutService(sessionRepo)

	router := api.NewRouter(authService, loginService, logoutService)
	log.Fatal(router.Run(":8000"))
}
