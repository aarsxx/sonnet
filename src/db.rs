use redis::AsyncCommands;
use std::sync::Arc;
use tokio::sync::Mutex;

#[derive(Clone)]
pub struct Database {
    pub con: Arc<Mutex<redis::aio::Connection>>,
}

impl Database {
    pub async fn new(redis_url: &str) -> Result<Self, redis::RedisError> {
        let client = redis::Client::open(redis_url)?;
        let con = client.get_async_connection().await?;
        Ok(Database {
            con: Arc::new(Mutex::new(con)),
        })
    }

    pub async fn store_user(&self, username: &str, password: &str) -> Result<(), redis::RedisError> {
        let mut con = self.con.lock().await;
        con.set(username, password).await
    }

    pub async fn retrieve_user(&self, username: &str) -> Option<String> {
        let mut con = self.con.lock().await;
        con.get(username).await.ok()
    }

    pub async fn update_password(&self, username: &str, new_password: &str) -> Result<(), redis::RedisError> {
        let mut con = self.con.lock().await;
        con.set(username, new_password).await
    }
}
