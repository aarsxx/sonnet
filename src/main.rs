mod server;
mod handler;
mod user;
mod db;
mod token;

#[tokio::main]
async fn main() {
    server::run().await;
}
