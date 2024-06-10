use axum::routing::get;
use axum::{middleware, Router};
use tokio::net::TcpListener;
mod error;
mod middleware;

#[tokio::main]
async fn main() {
    tracing_subscriber::fmt().init();
    let listener = TcpListener::bind("127.0.0.1")
        .await
        .expect("bind localhost error");
    axum::serve(listener, app())
        .await
        .expect("axum server error");
}

fn app() -> Router {
    Router::new()
        .route("/", get(|| async { "hello world" }))
        .layer(middleware::from_fn(|| {}))
}
