use jsonwebtoken::{encode, Header, EncodingKey};

pub fn generate_token(user_id: u64, username: &str) -> String {
    let header = Header::default();
    let secret_key = "your_secret_key_here".as_ref(); // Replace with your actual secret key
    let key = EncodingKey::from_secret(secret_key);
    let claims = (user_id, username);

    encode(&header, &claimss, &key).unwrap()
}
