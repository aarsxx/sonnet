use axum::response::{IntoResponse, Redirect, Response};

mod login_checker;

struct AuthRedirect;

impl IntoResponse for AuthRedirect {
    fn into_response(self) -> Response {
        Redirect::temporary("/login").into_response()
    }
}

