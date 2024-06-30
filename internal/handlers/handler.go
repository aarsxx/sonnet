package handlers

import (
	"github.com/gorilla/mux"
	"go-ssoproject/internal/services"
)

func RegisterHandlers(r *mux.Router, userService *services.UserService, resetService *services.ResetService, deleteService *services.DeleteService, totpService *services.TOTPService, loginService *services.LoginService, logoutService *services.LogoutService) {
	r.HandleFunc("/signup", SignupHandler(userService)).Methods("POST")
	r.HandleFunc("/reset/request", RequestResetHandler(resetService)).Methods("POST")
	r.HandleFunc("/reset/confirm", ResetPasswordHandler(resetService)).Methods("POST")
	r.HandleFunc("/delete", DeleteAccountHandler(deleteService)).Methods("DELETE")
	r.HandleFunc("/totp/enable", EnableTOTPHandler(totpService)).Methods("POST")
	r.HandleFunc("/totp/verify", VerifyTOTPHandler(totpService)).Methods("POST")
	r.HandleFunc("/login", LoginHandler(loginService)).Methods("POST")
	r.HandleFunc("/logout", LogoutHandler(logoutService)).Methods("POST")
}
