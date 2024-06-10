use jsonwebtoken::{encode, Header, EncodingKey};
use serde::{Serialize, Deserialize};

pub fn generate_token(user_id: u64, username: &str) -> String {
    let claims = Claims {
        user_id,
        username: username.to_owned(),
    };

    let secret_key = std::env::var("SECRET_KEY").expect("SECRET_KEY not set in .env");
    encode(&Header::default(), &claims, &EncodingKey::from_secret(secret_key.as_ref()))
        .expect("Failed to generate token")
}

#[derive(Debug, Serialize, Deserialize)]
struct Claims {
    user_id: u64,
    username: String,
}
