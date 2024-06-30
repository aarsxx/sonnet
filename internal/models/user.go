package models

type User struct {
	ID           int
	Email        string
	PasswordHash string
	TOTPSecret   string
}
