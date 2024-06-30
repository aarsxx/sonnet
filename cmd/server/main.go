package main

import (
	"github.com/gorilla/mux"
	"gotter/internal/handlers"
	"log"
	"net/http"
	"otter/configs"
	"otter/internal/db"
	"otter/internal/services"
)

func main() {
	config := configs.LoadConfig()

	dbConn, err := db.NewDBConnection(config.PostgresDSN)
	if err != nil {
		log.Fatalf("Could not connect to the database: %v", err)
	}

	userService := services.NewUserService(dbConn)
	resetService := services.NewResetService(dbConn)
	deleteService := services.NewDeleteService(dbConn)
	totpService := services.NewTOTPService(dbConn)
	loginService := services.NewLoginService(dbConn, config.JwtSecret, config.TokenTimeout)
	logoutService := services.NewLogoutService(dbConn)

	r := mux.NewRouter()
	handlers.RegisterHandlers(r, userService, resetService, deleteService, totpService, loginService, logoutService)

	log.Printf("Server starting on %handlers:%handlers\n", config.ServiceAddr, config.ServicePort)
	log.Fatal(http.ListenAndServe(config.ServiceAddr+":"+config.ServicePort, r))
}
