package services

import (
	"context"
	"database/sql"
)

type LogoutService struct {
	db *sql.DB
}

func NewLogoutService(db *sql.DB) *LogoutService {
	return &LogoutService{db: db}
}

func (s *LogoutService) Logout(ctx context.Context, token string) error {
	_, err := s.db.ExecContext(ctx, "DELETE FROM sessions WHERE token=$1", token)
	return err
}
