# Makefile for otter project

.PHONY: build run migrate clean

build:
    go build -o bin/otter ./cmd/server

run: build
    ./bin/otter

migrate:
    @echo "Running migrations..."
    psql $(DATABASE_URL) -f migrations/001_initial.sql

clean:
    rm -rf bin/
