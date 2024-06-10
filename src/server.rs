use tokio::net::TcpListener;
use crate::handler::handle_client;
use crate::db::Database;
use anyhow::Error;

pub async fn run(db: Database) -> Result<(), Error> {
    let listener = TcpListener::bind("127.0.0.1:8080").await?;
    println!("Authentication server started");
    loop {
        let (socket, _) = listener.accept().await?;
        let db_clone = db.clone();
        tokio::spawn(async move {
            if let Err(e) = handle_client(socket, db_clone).await {
                eprintln!("Error handling client: {}", e);
            }
        });
    }
}
