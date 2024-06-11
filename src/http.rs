use crate::base64;
use crate::result::{Error, Result};
use actix_web::{HttpRequest, HttpResponse};

impl From<Error> for HttpResponse {
    fn from(value: Error) -> Self {
        match value {
            Error::Unknown => HttpResponse::InternalServerError().body(value.to_string()),
            Error::NotFound => HttpResponse::NotFound().finish(),
            Error::NotAvailable => HttpResponse::ServiceUnavailable().finish(),
            Error::Unauthorized => HttpResponse::Unauthorized().finish(),
            Error::InvalidToken | Error::InvalidFormat | Error::InvalidHeader => {
                HttpResponse::BadRequest().body(value.to_string())
            }
            Error::WrongCredentials => HttpResponse::Forbidden().finish(),
            Error::RegexNotMatch => HttpResponse::NotAcceptable().finish(),
        }
    }
}

fn get_header(req: &HttpRequest, header: &str) -> Result<String> {
    req.headers()
        .get(header)
        .ok_or(Error::NotFound)
        .and_then(|header_value| {
            header_value.to_str().map_err(|err| {
                warn!(error = err.to_string(), "parsing header data to str",);
                Error::InvalidHeader
            })
        })
        .map(Into::into)
}

pub fn get_encoded_header(req: &HttpRequest, header: &str) -> Result<String> {
    let header_value = get_header(req, header)?;
    base64::decode_str(&header_value).map_err(|err| {
        warn!(error = err.to_string(), "decoding base64 header",);
        Error::InvalidFormat
    })
}
