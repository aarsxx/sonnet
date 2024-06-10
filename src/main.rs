mod server;
mod handler;
mod user;
mod db;
mod token;
mod error;

#[tokio::main]
async fn main() {
    dotenv::dotenv().ok();
    let redis_url = std::env::var("REDIS_URL").expect("REDIS_URL not set in .env");
    let db = db::Database::new(&redis_url).await.expect("Failed to connect to Redis");
    if let Err(e) = server::run(db).await {
        eprintln!("Server error: {}", e);
    }
}
