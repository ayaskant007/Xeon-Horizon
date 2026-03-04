# Xeon Horizon

A high-performance programmer macropad built on the **Seeed Studio XIAO RP2040**.

* Keyboard Maintainer: [Ayaskant Sahoo](https://github.com/ayaskant007)
* Hardware Supported: Seeed Studio XIAO RP2040, SSD1306 128×32 OLED, 4× SK6812MINI-E RGB LEDs, Rotary Encoder, 4X Cherry MX Switches
* Hardware Availability: Custom PCB

## Features

| Control | Layer 0 (PROG_MODE) | Layer 1 (NAV_MODE) |
|---------|--------------------|--------------------|
| Key 1 | Copy (Ctrl+C) | Cut (Ctrl+X) |
| Key 2 | Paste (Ctrl+V) | Redo (Ctrl+Y) |
| Key 3 | Undo (Ctrl+Z) | Save (Ctrl+S) |
| Key 4 | Run/Debug (F5) | Step Into (F11) |
| Encoder Press | Enter | (hold for Layer 1) |
| Encoder CW | Scroll Down | Next Tab |
| Encoder CCW | Scroll Up | Prev Tab |

## Building

    qmk compile -kb xeon -km default

## Flashing

    qmk flash -kb xeon -km default

Or manually: double-press the BOOT button on the XIAO RP2040, then drag the `.uf2` file from `.build/` onto the USB drive that appears.

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down Key 1 (top-left) and plug in the keyboard
* **Physical reset button**: Double-press the BOOT button on the XIAO RP2040
* **Keycode in layout**: Not mapped by default — add `QK_BOOT` to a layer if desired
