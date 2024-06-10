use crate::db::Database;
use crate::token::generate_token;

pub async fn register_user(username: String, password: String, db: Database) -> bool {
    // User registration logic, store user in the database
    db.store_user(&username, &password).await.is_ok()
}

pub async fn login_user(username: String, password: String, db: Database) -> Option<String> {
    // User login logic, retrieve user from the database
    if let Some(stored_password) = db.retrieve_user(&username).await {
        if stored_password == password {
            // Password match, generate token
            Some(generate_token(1, &username)) // Mock user_id as 1
        } else {
            None // Incorrect password
        }
    } else {
        None // User not found
    }
}

pub async fn reset_password(username: String, new_password: String, db: Database) -> bool {
    // Reset password logic, update user's password in the database
    db.update_password(&username, &new_password).await.is_ok()
}
