# Xeon Horizon

A high-performance programmer macropad built on the **Seeed Studio XIAO RP2040**.

* Keyboard Maintainer: [Ayaskant Sahoo](https://github.com/ayaskant007)
* Hardware Supported: Seeed Studio XIAO RP2040, SSD1306 128×32 OLED, 4× SK6812MINI-E RGB LEDs, Rotary Encoder, 4X Cherry MX Switches
* Hardware Availability: Custom PCB

## Features

| Control | Layer 0 (PROG_MODE) | Layer 1 (NAV_MODE) | Layer 2 (MUSIC_MODE) | Layer 3 (SYS_MODE) |
|---------|--------------------|--------------------|----------------------|--------------------|
| Key 1 | Copy (Ctrl+C) | Cut (Ctrl+X) | Prev Track | Bootloader (`QK_BOOT`) |
| Key 2 | Paste (Ctrl+V) | Redo (Ctrl+Y) | Play/Pause | Toggle RGB |
| Key 3 | Undo (Ctrl+Z) | Save (Ctrl+S) | Next Track | RGB Brightness Down |
| Key 4 | Run/Debug (F5) | RGB Mode Toggle | Mute | RGB Brightness Up |
| Encoder Press | Switch to NAV | Switch to MUSIC | Switch to SYS | Switch to PROG |
| Encoder CW | Scroll Down | Next Tab | Volume Up | RGB Mode Next |
| Encoder CCW | Scroll Up | Prev Tab | Volume Down | RGB Mode Prev |

## Building

    qmk compile -kb xeon -km default

## Flashing

    qmk flash -kb xeon -km default

Or manually: double-press the BOOT button on the XIAO RP2040, then drag the `.uf2` file from `.build/` onto the USB drive that appears.

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down Key 1 (top-left) and plug in the keyboard
* **Physical reset button**: Double-press the BOOT button on the XIAO RP2040
* **Keycode in layout**: Press the Encoder until you reach `SYS_MODE` (Layer 3), then press Key 1 (top-left).
