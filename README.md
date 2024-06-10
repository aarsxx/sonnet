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

### Project Structure
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
### Pattern
```console
            +---------------------+
            |        Client       |
            +----------+----------+
                       |
                       | HTTP Requests
                       v
            +----------+----------+
            |    HTTP Server     |
            +----------+----------+
                       |
                       | Request Handling
                       v
            +----------+----------+
            |   Request Handler  |
            +----------+----------+
                       |
                       | Business Logic
                       v
   +-----------+--------------+-----------+
   |    Authentication          Database    |
   |    Middleware                (Redis)   |
   +---------------------------------------+

```

Contributing
============

This is a an open-source project. We'll be delighted to receive your
feedback in the form of issues and pull requests.

Documentation
=============

See ``REQUIREMENTS`` in the 
file for additional dependencies:
