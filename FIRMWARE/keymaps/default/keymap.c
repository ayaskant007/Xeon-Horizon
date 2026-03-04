// Copyright 2024 Ayaskant Sahoo (@ayaskant007)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers { _PROG = 0, _NAV };

/* KEYMAPS */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* PROG_MODE (Layer 0) */
    [_PROG] = LAYOUT(LCTL(KC_C),      // Copy
                     LCTL(KC_V),      // Paste
                     LCTL(KC_Z),      // Undo
                     KC_F5,           // Run/Debug
                     LT(_NAV, KC_ENT) // Tap=Enter, Hold=NAV
                     ),

    /* NAV_MODE (Layer 1) - hold encoder */
    [_NAV] = LAYOUT(LCTL(KC_X), // Cut
                    LCTL(KC_Y), // Redo
                    LCTL(KC_S), // Save
                    KC_F11,     // Step Into
                    _______     // (held)
                    )};

/* ENCODER MAP */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {[_PROG] = {ENCODER_CCW_CW(MS_WHLU, MS_WHLD)}, [_NAV] = {ENCODER_CCW_CW(LCTL(LSFT(KC_TAB)), LCTL(KC_TAB))}};
#endif

/* OLED */
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_user(void) {
    oled_set_cursor(0, 0);
    oled_write_P(PSTR("  XEON  HORIZON"), false);

    oled_set_cursor(0, 1);
    oled_write_P(PSTR("---------------------"), false);

    switch (get_highest_layer(layer_state)) {
        case _PROG:
            oled_set_cursor(0, 2);
            oled_write_P(PSTR("> PROG_MODE"), false);
            oled_set_cursor(0, 3);
            oled_write_P(PSTR("Cpy Pst Und F5  Ent"), false);
            break;
        case _NAV:
            oled_set_cursor(0, 2);
            oled_write_P(PSTR("> NAV_MODE"), false);
            oled_set_cursor(0, 3);
            oled_write_P(PSTR("Cut Rdo Sav F11 Tab"), false);
            break;
        default:
            oled_set_cursor(0, 2);
            oled_write_P(PSTR("> UNKNOWN"), false);
            break;
    }

    return false;
}

#endif
