use tokio::net::TcpListener;
use crate::handler::handle_client;

pub async fn run() {
    // Start TCP listener
    let listener = TcpListener::bind("127.0.0.1:8080").await.expect("Failed to bind port");

    println!("Authentication server started");

    // Accept incoming connections
    while let Ok((socket, _)) = listener.accept().await {
        // Handle connection in a separate task
        tokio::spawn(async move {
            handle_client(socket).await;
        });
    }
}
