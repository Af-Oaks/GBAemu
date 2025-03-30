#include <bus.h>
#include <common.h>

// Addresses Name Description
// 0000h – 3FFFh ROM0 Non-switchable ROM Bank.
// 4000h – 7FFFh ROMX Switchable ROM bank.
// 8000h – 9FFFh VRAM Video RAM, switchable (0-1) in GBC mode.
// A000h – BFFFh SRAM External RAM in cartridge, often battery buffered.
// C000h – CFFFh WRAM0 Work RAM.
// D000h – DFFFh WRAMX Work RAM, switchable (1-7) in GBC mode
// E000h – FDFFh ECHO Description of the behaviour below.
// FE00h – FE9Fh OAM (Object Attribute Table) Sprite information table.
// FEA0h – FEFFh UNUSED Description of the behaviour below.
// FF00h – FF7Fh I/O Registers I/O registers are mapped here.
// FF80h – FFFEh HRAM Internal CPU RAM
// FFFFh IE Register Interrupt enable flags.


u8 bus_read(u16 address){

    if(address < 0x8000){// ROM BANK
        return cart_read(address);
    }
    else if(address < 0xA000){ // VRAM
        NO_IMPL();
    }
    else if(address < 0xC000){ //SRAM
        return cart_read(address);
    }
    else if(address < 0xE000){ // WRAM
        NO_IMPL();
    }
    else if(address < 0xFE00){ // ECHORAM
        return 0;
    }
    else if(address < 0xFEA0){ // OAM
        NO_IMPL();
    }
    else if(address < 0xFF00){ // NOT USABLE
        return 0;
    }
    else if(address < 0xFF80){ // I/0 REGISTER
        NO_IMPL();
    }
    else if(address < 0xFFFF){ // HIGH RAM
        NO_IMPL();
    }
    else if(address == 0xFFFF){ // IE register
        NO_IMPL();
    }
    

}

void bus_write(u16 address, u8 value){

    if(address < 0x8000){// ROM BANK
        return cart_write(address,value);
    }
    else if(address < 0xA000){ // VRAM
        NO_IMPL();
    }
    else if(address < 0xC000){ //SRAM
        NO_IMPL();
    }
    else if(address < 0xE000){ // WRAM
        NO_IMPL();
    }
    else if(address < 0xFE00){ // ECHORAM
        return 0;
    }
    else if(address < 0xFEA0){ // OAM
        NO_IMPL();
    }
    else if(address < 0xFF00){ // NOT USABLE
        return 0;
    }
    else if(address < 0xFF80){ // I/0 REGISTER
        NO_IMPL();
    }
    else if(address < 0xFFFF){ // HIGH RAM
        NO_IMPL();
    }
    else if(address == 0xFFFF){ // IE register
        NO_IMPL();
    }
    else{
        NO_IMPL();
    }
}

void bus_write_16(u16 address, u16 value){

    if(address < 0x8000){// ROM BANK
        NO_IMPL();
    }
    else if(address < 0xA000){ // VRAM
        NO_IMPL();
    }
    else if(address < 0xC000){ //SRAM
        NO_IMPL();
    }
    else if(address < 0xE000){ // WRAM
        NO_IMPL();
    }
    else if(address < 0xFE00){ // ECHORAM
        return 0;
    }
    else if(address < 0xFEA0){ // OAM
        NO_IMPL();
    }
    else if(address < 0xFF00){ // NOT USABLE
        return 0;
    }
    else if(address < 0xFF80){ // I/0 REGISTER
        NO_IMPL();
    }
    else if(address < 0xFFFF){ // HIGH RAM
        NO_IMPL();
    }
    else if(address == 0xFFFF){ // IE register
        NO_IMPL();
    }
    else{
        NO_IMPL();
    }
}