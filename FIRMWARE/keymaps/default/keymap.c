// Copyright 2024 Ayaskant Sahoo (@ayaskant007)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers { _PROG = 0, _NAV, _MUSIC, _SYS };

/* KEYMAPS */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* PROG_MODE (Layer 0) */
    [_PROG] = LAYOUT(LCTL(KC_C),      // Copy
                     LCTL(KC_V),      // Paste
                     LCTL(KC_Z),      // Undo
                     KC_F5,           // Run/Debug
                     TO(_NAV)         // Switch to NAV Layer
                     ),

    /* NAV_MODE (Layer 1) */
    [_NAV] = LAYOUT(LCTL(KC_X),       // Cut
                    LCTL(KC_Y),       // Redo
                    LCTL(KC_S),       // Save
                    UG_NEXT,          // Change RGB Mode (Next)
                    TO(_MUSIC)        // Switch to MUSIC Layer
                    ),

    /* MUSIC_MODE (Layer 2) */
    [_MUSIC] = LAYOUT(KC_MPRV,        // Previous Track
                      KC_MPLY,        // Play/Pause
                      KC_MNXT,        // Next Track
                      KC_MUTE,        // Mute
                      TO(_SYS)        // Switch to SYS Layer
                      ),

    /* SYS_MODE (Layer 3) */
    [_SYS] = LAYOUT(QK_BOOT,          // Bootloader
                    UG_TOGG,          // Toggle RGB
                    UG_VALD,          // RGB Brightness Down
                    UG_VALU,          // RGB Brightness Up
                    TO(_PROG)         // Switch to PROG Layer
                    )};





/* ENCODER MAP */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_PROG] = {ENCODER_CCW_CW(MS_WHLU, MS_WHLD)}, 
    [_NAV] = {ENCODER_CCW_CW(LCTL(LSFT(KC_TAB)), LCTL(KC_TAB))},
    [_MUSIC] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_SYS] = {ENCODER_CCW_CW(UG_PREV, UG_NEXT)}
};
#endif
