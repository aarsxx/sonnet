use crate::user::{register_user, login_user, reset_password};
use crate::db::Database;
use tokio::net::TcpStream;
use tokio::io::{AsyncReadExt, AsyncWriteExt};
use anyhow::Error;

pub async fn handle_client(mut socket: TcpStream, db: Database) -> Result<(), Error> {
    let mut buf = [0; 1024];
    let nbytes = match socket.read(&mut buf).await {
        Ok(nbytes) if nbytes == 0 => return Ok(()),
        Ok(nbytes) => nbytes,
        Err(e) => {
            eprintln!("Failed to read from socket: {}", e);
            return Err(e.into());
        }
    };

    let request = match std::str::from_utf8(&buf[..nbytes]) {
        Ok(request) => request.trim(),
        Err(e) => {
            eprintln!("Failed to parse request: {}", e);
            return Err(e.into());
        }
    };

    let response = match request {
        "REGISTER" => {
            let username = "example_user";
            let password = "example_password";
            if register_user(username.to_owned(), password.to_owned(), &db).await {
                "User registered successfully"
            } else {
                "Failed to register user"
            }
        }
        "LOGIN" => {
            let username = "example_user";
            let password = "example_password";
            if let Some(token) = login_user(username.to_owned(), password.to_owned(), &db).await {
                token.as_str()
            } else {
                "Invalid username or password"
            }
        }
        "RESET_PASSWORD" => {
            let username = "example_user";
            let new_password = "new_example_password";
            if reset_password(username.to_owned(), new_password.to_owned(), &db).await {
                "Password reset successfully"
            } else {
                "Failed to reset password"
            }
        }
        _ => "Invalid request",
    };

    if let Err(e) = socket.write_all(response.as_bytes()).await {
        eprintln!("Failed to write to socket: {}", e);
        return Err(e.into());
    }

    Ok(())
}
