package configs

import (
	"os"
)

type Config struct {
	PostgresDSN  string
	JwtSecret    string
	TokenTimeout int
	ServiceAddr  string
	ServicePort  string
}

func LoadConfig() *Config {
	return &Config{
		PostgresDSN:  os.Getenv("POSTGRES_DSN"),
		JwtSecret:    os.Getenv("JWT_SECRET"),
		TokenTimeout: 3600, // Default token timeout
		ServiceAddr:  "0.0.0.0",
		ServicePort:  "8080",
	}
}
