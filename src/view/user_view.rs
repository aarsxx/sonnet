use axum::response::Json;
use crate::model::user::User;

pub fn list_users(users: Vec<User>) -> Json<Vec<User>> {
    Json(users)
}
