fn main() -> miette::Result<()> {
    let include_path = std::path::PathBuf::from(".");

    
    // Check if `input2.h` exists
    let header_path = include_path.join("input2.h");
    if !header_path.exists() {
        panic!("input2.h not found at {:?}", header_path);
    }

    let mut b = autocxx_build::Builder::new("src/lib.rs", &[&include_path]).build()?;
    
    b.flag_if_supported("-std=c++14")
     .flag_if_supported("-DWIN32_LEAN_AND_MEAN")
     .flag_if_supported("-DNOMINMAX")
     .flag_if_supported("-D_CRT_SECURE_NO_WARNINGS")
     .compile("aviutl2-plugin");
    
    println!("cargo:rerun-if-changed=src/lib.rs");
    println!("cargo:rerun-if-changed=input2.h");

    Ok(())
}