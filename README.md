# Xeon Horizon Macropad

The **Xeon Horizon** is a high-performance, 35mm tall programmer's macropad powered by the Seeed Studio XIAO RP2040. It is designed specifically for ultra-fast workflows in code editors, featuring dedicated refactoring/debugging shortcuts, a rotary encoder for rapid code navigation, and a status OLED. 

A unique feature of the Horizon is its upward-facing SK6812 MINI E RGB lighting, which shines directly through hollowed-out text on the top plate to act as an aggressive, high-contrast indicator light.

---

## Project Showcase

### The Hackpad
![Overall Hackpad](https://i.ibb.co/WppnxpZN/image-7.png)

### Case Assembly
![Case Assembly](https://i.ibb.co/WppnxpZN/image-7.png)

### Printed Circuit Board (PCB)
![PCB Layout](https://i.ibb.co/cSBNgGrf/Screenshot-2026-03-04-161941.png)

### Schematic
![Schematic](https://i.ibb.co/tPHLS6Bv/Screenshot-2026-03-04-161837.png)

---

## Features & Keymap
* **Controller:** Seeed Studio XIAO RP2040
* **Firmware:** QMK (Direct Pin Matrix, Custom Encoder Map)
* **OLED Display:** SSD1306 (I2C) displaying "XEON HORIZON" and "PROG_MODE" status.
* **Lighting:** 4x SK6812 MINI E LEDs running at maximum brightness for Top-Down hollow text illumination.

### Default Shortcuts:
* **Key 1:** Copy (`Ctrl + C`)
* **Key 2:** Paste (`Ctrl + V`)
* **Key 3:** Undo (`Ctrl + Z`)
* **Key 4:** Run/Debug (`F5`)
* **Key 5:** Execute/Submit (`Enter`)
* **Encoder CW:** Scroll Down (`Mouse Wheel Down`)
* **Encoder CCW:** Scroll Up (`Mouse Wheel Up`)

---

## Bill of Materials (BOM)

| Item | Quantity | Description / Notes |
| :--- | :---: | :--- |
| **Microcontroller** | 1 | Seeed Studio XIAO RP2040 |
| **Switches** | 4 | MX-compatible mechanical switches |
| **Keycaps** | 4 | 1U Keycaps |
| **Rotary Encoder** | 1 | EC11 Rotary Encoder (with push-button) |
| **Encoder Knob** | 1 | Standard encoder knob |
| **Display** | 1 | 0.91" I2C OLED Display (SSD1306) |
| **LEDs** | 4 | SK6812 MINI E RGB LEDs |
| **PCB** | 1 | Custom Xeon Horizon PCB |
| **Case (Top Plate)**| 1 | 3D Printed Top Plate with hollow text (`Top_Plate.STEP`) |
| **Case (Base)** | 1 | 3D Printed 35mm deep base (`Case.STEP`) |
| **Wiring** | ~ | Hookup wire (for hand-wiring components to the XIAO) |

---

## Build & Flash Instructions
1. Assemble the hardware according to the schematic and the 3D CAD designs.
2. Set up your QMK MSYS environment.
3. Copy the `xeon` firmware folder into `qmk_firmware/keyboards/`.
4. Compile the firmware: `qmk compile -kb xeon -km default`
5. Double-tap the reset button on the XIAO RP2040.
6. Drag and drop the generated `.uf2` file into the `RPI-RP2` drive.
