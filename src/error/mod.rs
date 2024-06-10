use axum::{middleware::Next, RequestPartsExt};
use axum_extra::{headers::Cookie, typed_header::TypedHeaderRejectionReason, TypedHeader};
use http::{header, request::Parts};

use super::AuthRedirect;

async fn check_session(parts: &mut Parts, next: &mut Next) -> Result<(), AuthRedirect> {
    let cookie = parts
        .extract::<TypedHeader<Cookie>>()
        .await
        .map_err(|e| match *e.name() {
            header::COOKIE => match e.reason() {
                TypedHeaderRejectionReason::Missing => AuthRedirect,
                _ => panic!("unexpected error getting Cookie header(s): {e}"),
            },
            _ => panic!("unexpected error getting cookies: {e}"),
        })?;
    Ok(())
}
