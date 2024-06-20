//! Base64 related utilities like custom engines for specific encodings/decodings.

use crate::result::{Error, Result};
use base64::{
    alphabet,
    engine::{self, general_purpose},
    Engine,
};

/// A URL-safe implementation of [`base64::engine::Engine`] without padding
pub const B64_CUSTOM_ENGINE: engine::GeneralPurpose =
    engine::GeneralPurpose::new(&alphabet::URL_SAFE, general_purpose::NO_PAD);

/// Decodes a base64 encoded string
///
/// # Arguments
///
/// * `s` - A base64 encoded string slice
///
/// # Returns
///
/// * `Result<String>` - The decoded string or an error if decoding fails
pub fn decode_str(s: &str) -> Result<String> {
    // Decode the base64 string
    let decoded_bytes = B64_CUSTOM_ENGINE.decode(s).map_err(|err| {
        warn!(error = err.to_string(), "Error decoding base64 string");
        Error::Unknown
    })?;

    // Convert the decoded bytes to a UTF-8 string
    String::from_utf8(decoded_bytes).map_err(|err| {
        warn!(
            error = err.to_string(),
            "Error converting base64 decoded data to string"
        );
        Error::Unknown
    })
}
