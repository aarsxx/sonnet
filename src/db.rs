//! Base64 related utilities like custom engines for specific encodings/decodings.

use crate::result::{Error, Result};
use base64::{
    alphabet,
    engine::{self, general_purpose},
    Engine,
};

/// A URL-safe implementation of [`base64::engine::Engine`] without padding.
pub const B64_CUSTOM_ENGINE: engine::GeneralPurpose =
    engine::GeneralPurpose::new(&alphabet::URL_SAFE, general_purpose::NO_PAD);

/// Decodes a base64 encoded string.
///
/// # Arguments
///
/// * `s` - A base64 encoded string slice.
///
/// # Returns
///
/// * `Result<String>` - The decoded string or an error if decoding fails.
pub fn decode_str(s: &str) -> Result<String> {
    decode_base64(s).and_then(convert_to_utf8_string)
}

/// Helper function to decode a base64 string.
///
/// # Arguments
///
/// * `s` - A base64 encoded string slice.
///
/// # Returns
///
/// * `Result<Vec<u8>>` - The decoded bytes or an error if decoding fails.
fn decode_base64(s: &str) -> Result<Vec<u8>> {
    B64_CUSTOM_ENGINE.decode(s).map_err(|err| {
        warn!(error = err.to_string(), "Error decoding base64 string");
        Error::Unknown
    })
}

/// Helper function to convert a byte vector to a UTF-8 string.
///
/// # Arguments
///
/// * `bytes` - A vector of bytes.
///
/// # Returns
///
/// * `Result<String>` - The decoded string or an error if conversion fails.
fn convert_to_utf8_string(bytes: Vec<u8>) -> Result<String> {
    String::from_utf8(bytes).map_err(|err| {
        warn!(
            error = err.to_string(),
            "Error converting base64 decoded data to string"
        );
        Error::Unknown
    })
}
