/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// `SPLIT_HAND_PIN` can currently be defined in `info.json`,
// but can't yet be given a value
#define SPLIT_HAND_PIN F5

// Not yet available in `info.json`
#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X32
#    define SPLIT_OLED_ENABLE
#endif

// Not yet available in `info.json`
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS RGBLIGHT_LIMIT_VAL
#    define RGB_MATRIX_LED_COUNT RGBLED_NUM
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
#    define SPLIT_TRANSPORT_MIRROR
#    define ENABLE_RGB_MATRIX_BAND_SAT
#    define ENABLE_RGB_MATRIX_BAND_VAL
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_HUE_WAVE
#    define ENABLE_RGB_MATRIX_HUE_PENDULUM
#endif

// Not yet available in `info.json`
#ifdef BOOTMAGIC_ENABLE
// Top left key on left half
#    define BOOTMAGIC_LITE_ROW 0
#    define BOOTMAGIC_LITE_COLUMN 0
// Top right key on right half
#    define BOOTMAGIC_LITE_ROW_RIGHT 5
#    define BOOTMAGIC_LITE_COLUMN_RIGHT 0
#endif
