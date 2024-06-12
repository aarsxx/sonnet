mod app;

use crate::db::Database;
use crate::token::generate_token;

pub async fn register_user(username: String, password: String, db: &Database) -> bool {
    db.store_user(&username, &password).await.is_ok()
}

pub async fn login_user(username: String, password: String, db: &Database) -> Option<String> {
    if let Some(stored_password) = db.retrieve_user(&username).await {
        if stored_password == password {
            Some(generate_token(1, &username))
        } else {
            None
        }
    } else {
        None
    }
}

pub async fn reset_password(username: String, new_password: String, db: &Database) -> bool {
    db.update_password(&username, &new_password).await.is_ok()
}
