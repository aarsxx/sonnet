use std::error::Error;

fn main() -> Result<(), Box<dyn Error>> {
    compile_protos()?;
    Ok(())
}

fn compile_protos() -> Result<(), Box<dyn Error>> {
    // Compile proto files using paths at build time
    let proto_files = ["proto/user.proto", "proto/session.proto"];

    for proto in &proto_files {
        tonic_build::compile_protos(proto)?;
    }

    Ok(())
}
