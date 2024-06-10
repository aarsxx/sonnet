```console
██╗  ██╗ █████╗  ██████╗ ███████╗
██║ ██╔╝██╔══██╗██╔════╝ ██╔════╝
█████╔╝ ███████║██║  ███╗███████╗
██╔═██╗ ██╔══██║██║   ██║╚════██║
██║  ██╗██║  ██║╚██████╔╝███████║
╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝
```
![github repo badge](https://img.shields.io/badge/Language-Rust-181717?color=red)

[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/B0B1Z3IGW)

## Overview
Kage is a simple authentication server built using Rust and Axum. It provides basic authentication functionalities such as user registration, login, and password reset. The project uses Redis for storing user data and JSON Web Tokens (JWT) for managing sessions.

## Project Structure
```console
kage/
├── Cargo.toml
├── src/
│   ├── main.rs
│   ├── server.rs
│   ├── handler.rs
│   ├── user.rs
│   ├── db.rs
│   ├── token.rs
│   ├── error.rs
├── .env
```

## Pattern
```console
            +---------------------+
            |        Client       |
            +----------+----------+
                       |
                       | HTTP Requests
                       v
            +----------+----------+
            |    HTTP Server      |
            +----------+----------+
                       |
                       | Request Handling
                       v
            +----------+----------+
            |   Request Handler   |
            +----------+----------+
                       |
                       | Business Logic
                       v
   +-----------+--------------+-----------+
   |    Authentication          Database  |
   |    Middleware              (Redis)   |
   +--------------------------------------+

```

## Running the Project

### Prerequisites

Ensure Redis is running locally or on a server. You can use Docker to run Redis locally:
```sh
docker run --name redis -p 6379:6379 -d redis
```

Set up the .env file with the necessary environment variables:
```env
REDIS_URL=redis://127.0.0.1/
SECRET_KEY=your_secret_key
```

### Build and Run

Clone the repository:
```sh
git clone https://github.com/andikaleonardo/kage.git
cd kage
```

Build the project:
```sh
cargo build
```

Run the project:
```sh
cargo run
```
Contributing
============

This is a an open-source project. We'll be delighted to receive your
feedback in the form of issues and pull requests.
