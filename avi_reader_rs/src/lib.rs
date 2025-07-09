//----------------------------------------------------------------------------------
//	Sample AVI input plugin for AviUtl ExEdit2
//----------------------------------------------------------------------------------

use autocxx::prelude::*; // use all the main autocxx functions

use windows::{
    core::*,
    Win32::Graphics::Gdi::*,
    Win32::Media::Audio::*,
    Win32::Foundation::*,
    Win32::System::LibraryLoader::*,
    Win32::UI::WindowsAndMessaging::*,
    Win32::Media::Multimedia::*
};

include_cpp! {
    #include "windows.h"
    #include "input2.h" 

    safety!(unsafe)

    generate!("INPUT_INFO")
    generate!("INPUT_HANDLE")
    generate!("INPUT_PLUGIN_TABLE")

    block!("HWND")
    block!("HINSTANCE") 
    block!("BITMAPINFOHEADER")
    block!("WAVEFORMATEX")
}


//---------------------------------------------------------------------
//	Define structures for the plugin
//---------------------------------------------------------------------


pub fn add(left: u64, right: u64) -> u64 {
    left + right
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let result = add(2, 2);
        assert_eq!(result, 4);
    }
}
