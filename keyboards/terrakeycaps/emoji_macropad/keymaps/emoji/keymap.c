/* Copyright 2023 DeskDaily
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
#include QMK_KEYBOARD_H

enum unicode_names {
    LAUGH,
    HEART_EYES,
    SMILE_EYES,
	THINK,
	ANGRY,
	DEVIL,
	THUMBS_UP,
	PRAY,
	FIRE,
	HEART,
	STONKS,
	CHECK
};

const uint32_t PROGMEM unicode_map[] = {
    [LAUGH]  = 0x1F602,  // 😂
    [HEART_EYES] = 0x1F60D,  // 😍
    [SMILE_EYES]  = 0x1F60A, // 😊
    [THINK]  = 0x1F914, // 🤔
    [ANGRY]  = 0x1F621, // 😡
    [DEVIL]  = 0x1F608, // 😈
    [THUMBS_UP]  = 0x1F44D, // 👍
    [PRAY]  = 0x1F64F, // 🙏
    [FIRE]  = 0x1F525, // 🔥
    [HEART]  = 0xFE0F, // ❤️
    [STONKS]  = 0x1F4C8, // 📈
    [CHECK]  = 0x2705, // ✅
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        UM(LAUGH),  UM(HEART_EYES), UM(SMILE_EYES), UM(THINK),
        UM(ANGRY),  UM(DEVIL),      UM(THUMBS_UP),  UM(PRAY),
        UM(FIRE),   UM(HEART),     UM(STONKS),     UM(CHECK)
    ),

    [1] = LAYOUT(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS
    ),

    [2] = LAYOUT(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
};

