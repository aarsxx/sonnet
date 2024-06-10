use axum::{extract::Extension, response::Json, Router};
use crate::model::user::{UserRepository, User};

pub fn list_users() -> Router {
    Router::new().route("", list)
}

async fn list(users_repo: Extension<UserRepository>) -> Json<Vec<User>> {
    let users = users_repo.lock().await.get_all();
    Json(users)
}
