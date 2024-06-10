use axum::extract::{Request, State};
use axum::middleware::Next;
use axum::response::IntoResponse;
use axum_extra::{headers::Cookie, TypedHeader};
use redis::{Client, Commands};

use crate::error::AuthRedirect;


pub async fn check_session(State(mut client): State<Client>, TypedHeader(cookie): TypedHeader<Cookie>, request: Request, next: Next) -> Result<impl IntoResponse, AuthRedirect> {
    let session_id = cookie.get("session_id").ok_or(AuthRedirect)?;
    if !client.exists::<&str, bool>(session_id).is_ok() {
        return Err(AuthRedirect);
    }

    Ok(next.run(request).await)
}