fn main() -> miette::Result<()> {
    let include_path = std::path::PathBuf::from(".");

    // This assumes all your C++ bindings are in main.rs
    let mut b = autocxx_build::Builder::new("src/lib.rs", &[&include_path]).build()?;
    b.flag_if_supported("-std=c++14")
     .compile("aviutl2-plugin"); // arbitrary library name, pick anything
    println!("cargo:rerun-if-changed=src/lib.rs");


    Ok(())
}