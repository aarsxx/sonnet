use redis::AsyncCommands;

pub struct Database {
    pub con: redis::aio::Connection,
}

impl Database {
    pub async fn new() -> Self {
        // Establish connection to Redis
        let client = redis::Client::open("redis://127.0.0.1/")
            .expect("Failed to connect to Redis");
        let con = client.get_async_connection()
            .await
            .expect("Failed to get Redis connection");

        Database { con }
    }

    pub async fn store_user(&mut self, username: &str, password: &str) -> Result<(), redis::RedisError> {
        // Store user in Redis
        self.con.hset("users", username, password).await
    }

    pub async fn retrieve_user(&mut self, username: &str) -> Option<String> {
        // Retrieve user from Redis
        self.con.hget("users", username).await.unwrap()
    }

    pub async fn update_password(&mut self, username: &str, new_password: &str) -> Result<(), redis::RedisError> {
        // Update user's password in Redis
        self.con.hset("users", username, new_password).await
    }
}
