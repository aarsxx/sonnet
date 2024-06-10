use crate::user::{register_user, login_user, reset_password};
use crate::db::Database;
use crate::token::generate_token;
use tokio::net::TcpStream;
use tokio::io::{AsyncReadExt, AsyncWriteExt};

pub async fn handle_client(mut socket: TcpStream) {
    // Buffer for storing incoming data
    let mut buf = [0; 1024];
    let nbytes = match socket.read(&mut buf).await {
        Ok(nbytes) if nbytes == 0 => return,
        Ok(nbytes) => nbytes,
        Err(e) => {
            eprintln!("Failed to read from socket: {}", e);
            return;
        }
    };

    // Convert received data to string
    let request = match std::str::from_utf8(&buf[..nbytes]) {
        Ok(request) => request.trim(),
        Err(e) => {
            eprintln!("Failed to parse request: {}", e);
            return;
        }
    };

    // Parse request and handle accordingly
    let response = match request {
        "REGISTER" => {
            let username = "example_user"; // Replace with username received from request
            let password = "example_password"; // Replace with password received from request
            let db = Database::new().await;
            if register_user(username.to_owned(), password.to_owned(), db).await {
                "User registered successfully"
            } else {
                "Failed to register user"
            }
        }
        "LOGIN" => {
            let username = "example_user"; // Replace with username received from request
            let password = "example_password"; // Replace with password received from request
            let db = Database::new().await;
            if let Some(token) = login_user(username.to_owned(), password.to_owned(), db).await {
                token.as_str()
            } else {
                "Invalid username or password"
            }
        }
        "RESET_PASSWORD" => {
            let username = "example_user"; // Replace with username received from request
            let new_password = "new_example_password"; // Replace with new password received from request
            let db = Database::new().await;
            if reset_password(username.to_owned(), new_password.to_owned(), db).await {
                "Password reset successfully"
            } else {
                "Failed to reset password"
            }
        }
        _ => "Invalid request",
    };

    // Send response back to client
    if let Err(e) = socket.write_all(response.as_bytes()).await {
        eprintln!("Failed to write to socket: {}", e);
        return;
    }
}
