// Copyright 2024 Ayaskant Sahoo (@ayaskant007)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* ── I2C Configuration (OLED on XIAO D4/D5 = GP6/GP7) ── */
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP6
#define I2C1_SCL_PIN GP7

/* ── OLED Display ── */
#define OLED_DISPLAY_128X32
#define OLED_TIMEOUT 0 /* Always on — shows project identity */

/* ── RGB Light Defaults (Cyber-Blue Breathing) ── */
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING + 2
#define RGBLIGHT_DEFAULT_HUE 152 /* Cyber-blue hue */
#define RGBLIGHT_SLEEP           /* LEDs off when host sleeps */
