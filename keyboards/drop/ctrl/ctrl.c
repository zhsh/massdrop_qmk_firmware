// Copyright 2022 zvecr <git@zvecr.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"

void keyboard_pre_init_kb(void) {
    // common init
    void keyboard_pre_init_vendor(void);
    keyboard_pre_init_vendor();

    keyboard_pre_init_user();
}

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
//   { 1, B_2, A_2, C_2 },
     { 1, B_2, A_2, C_2 },
     { 1, E_3, D_3, F_3 },
     { 1, E_4, D_4, F_4 },
     { 1, E_5, D_5, F_5 },
     { 1, B_6, A_6, C_6 },
     { 1, E_7, D_7, F_7 },
     { 1, E_8, D_8, F_8 },
     { 0, E_1, D_1, F_1 },
     { 0, E_2, D_2, F_2 },
     { 0, E_3, D_3, F_3 },
     { 0, E_4, D_4, F_4 },
     { 0, E_5, D_5, F_5 },
     { 0, E_6, D_6, F_6 },
     { 0, E_7, D_7, F_7 },
     { 0, E_8, D_8, F_8 },
     { 0, E_9, D_9, F_9 },
     { 1, H_1, G_1, I_1 },
     { 1, H_2, G_2, I_2 },
     { 1, H_3, G_3, I_3 },
     { 1, H_4, G_4, I_4 },
     { 1, H_5, G_5, I_5 },
     { 1, H_6, G_6, I_6 },
     { 1, H_7, G_7, I_7 },
     { 1, H_8, G_8, I_8 },
     { 0, H_1, G_1, I_1 },
     { 0, H_2, G_2, I_2 },
     { 0, H_3, G_3, I_3 },
     { 0, H_4, G_4, I_4 },
     { 0, H_5, G_5, I_5 },
     { 0, H_6, G_6, I_6 },
     { 0, H_7, G_7, I_7 },
     { 0, H_8, G_8, I_8 },
     { 0, H_9, G_9, I_9 },
     { 1, K_1, J_1, L_1 },
     { 1, K_2, J_2, L_2 },
     { 1, K_3, J_3, L_3 },
     { 1, K_4, J_4, L_4 },
     { 1, K_5, J_5, L_5 },
     { 1, K_6, J_6, L_6 },
     { 1, K_7, J_7, L_7 },
     { 1, K_8, J_8, L_8 },
     { 0, K_1, J_1, L_1 },
     { 0, K_2, J_2, L_2 },
     { 0, K_3, J_3, L_3 },
     { 0, K_4, J_4, L_4 },
     { 0, K_5, J_5, L_5 },
     { 0, K_6, J_6, L_6 },
     { 0, K_7, J_7, L_7 },
     { 0, K_8, J_8, L_8 },
     { 0, K_9, J_9, L_9 },
     { 1, E_1, D_1, F_1 },
     { 1, E_2, D_2, F_2 },
     { 1, K_13, J_13, L_13 },
     { 1, K_12, J_12, L_12 },
     { 1, K_11, J_11, L_11 },
     { 1, E_6, D_6, F_6 },
     { 1, K_10, J_10, L_10 },
     { 1, K_9, J_9, L_9 },
     { 0, K_16, J_16, L_16 },
     { 0, K_15, J_15, L_15 },
     { 0, K_14, J_14, L_14 },
     { 0, K_13, J_13, L_13 },
     { 0, K_12, J_12, L_12 },
     { 1, E_14, D_14, F_14 },
     { 1, E_13, D_13, F_13 },
     { 1, H_12, G_12, I_12 },
     { 1, E_12, D_12, F_12 },
     { 1, E_11, D_11, F_11 },
     { 1, E_10, D_10, F_10 },
     { 1, E_9, D_9, F_9 },
     { 1, H_9, G_9, I_9 },
     { 0, H_16, G_16, I_16 },
     { 0, H_15, G_15, I_15 },
     { 0, H_14, G_14, I_14 },
     { 0, H_13, G_13, I_13 },
     { 0, H_11, G_11, I_11 },
     { 1, K_14, J_14, L_14 },
     { 1, H_14, G_14, I_14 },
     { 1, H_13, G_13, I_13 },
     { 1, H_10, G_10, I_10 },
     { 0, E_16, D_16, F_16 },
     { 0, E_15, D_15, F_15 },
     { 0, E_14, D_14, F_14 },
     { 0, E_13, D_13, F_13 },
     { 0, H_12, G_12, I_12 },
     { 0, E_12, D_12, F_12 },
     { 0, E_11, D_11, F_11 },
     { 0, B_11, A_11, C_11 },
     { 0, B_12, A_12, C_12 },
     { 0, B_13, A_13, C_13 },
     { 0, B_14, A_14, C_14 },
     { 0, B_15, A_15, C_15 },
     { 0, B_16, A_16, C_16 },
     { 1, B_9, A_9, C_9 },
     { 1, B_10, A_10, C_10 },
     { 1, B_11, A_11, C_11 },
     { 1, B_12, A_12, C_12 },
     { 1, B_13, A_13, C_13 },
     { 1, B_14, A_14, C_14 },
     { 1, B_15, A_15, C_15 },
     { 1, K_15, J_15, L_15 },
     { 1, E_15, D_15, F_15 },
     { 1, H_15, G_15, I_15 },
     { 1, B_1, A_1, C_1 },
     { 1, B_3, A_3, C_3 },
     { 1, B_4, A_4, C_4 },
     { 1, B_5, A_5, C_5 },
     { 1, B_7, A_7, C_7 },
     { 1, B_8, A_8, C_8 },
     { 0, B_1, A_1, C_1 },
     { 0, B_2, A_2, C_2 },
     { 0, B_3, A_3, C_3 },
     { 0, B_5, A_5, C_5 },
     { 0, B_6, A_6, C_6 },
     { 0, B_8, A_8, C_8 },
     { 0, B_10, A_10, C_10 },
     { 0, H_10, G_10, I_10 },
     { 0, K_10, J_10, L_10 },
     { 0, E_10, D_10, F_10 },
};

led_config_t g_led_config = { {
    {   0,   1,   2,   3,   4,   5,   6,   7 },
    {  16,  17,  18,  19,  20,  21,  22,  23 },
    {  33,  34,  35,  36,  37,  38,  39,  40 },
    {  50,  51,  52,  53,  54,  55,  56,  57 },
    {  63,  64,  65,  66,  67,  68,  69,  70 },
    {  76,  77,  78,  79,  80,  81,  82,  83 },
    {   8,   9,  10,  11,  12,  13,  14,  15 },
    {  24,  25,  26,  27,  28,  29,  30,  31 },
    {  41,  42,  43,  44,  45,  46,  47,  48 },
    {  58,  59,  60,  61,  62,  75,  49,  32 },
    {  71,  72,  73,  74,  84,  85,  86, NO_LED }
}, {
  // KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS
    {   7,   5 }, {  31,   5 }, {  43,   5 }, {  55,   5 }, {  67,   5 }, {  85,   5 }, {  97,   5 }, { 109,   5 },
    { 121,   5 }, { 139,   5 }, { 151,   5 }, { 163,   5 }, { 175,   5 }, { 193,   5 }, { 205,   5 }, { 217,   5 },
  // KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP
    {   7,  20 }, {  19,  20 }, {  31,  20 }, {  43,  20 }, {  55,  20 }, {  67,  20 }, {  79,  20 }, {  91,  20 },
    { 103,  20 }, { 115,  20 }, { 127,  20 }, { 139,  20 }, { 151,  20 }, { 169,  20 }, { 193,  20 }, { 205,  20 },
    { 217,  20 },
  // KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN
    {  10,  30 }, {  25,  30 }, {  37,  30 }, {  49,  30 }, {  61,  30 }, {  73,  30 }, {  85,  30 }, {  97,  30 },
    { 109,  30 }, { 121,  30 }, { 133,  30 }, { 145,  30 }, { 157,  30 }, { 172,  30 }, { 193,  30 }, { 205,  30 },
    { 217,  30 },
  // KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT
    {  11,  39 }, {  28,  39 }, {  40,  39 }, {  52,  39 }, {  64,  39 }, {  76,  39 }, {  88,  39 }, { 100,  39 },
    { 112,  39 }, { 124,  39 }, { 136,  39 }, { 148,  39 }, { 168,  39 },
  // KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP
    {  14,  49 }, {  34,  49 }, {  46,  49 }, {  58,  49 }, {  70,  49 }, {  82,  49 }, {  94,  49 }, { 106,  49 },
    { 118,  49 }, { 130,  49 }, { 142,  49 }, { 165,  49 }, { 205,  49 },
  // KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    {   8,  59 }, {  23,  59 }, {  38,  59 }, {  83,  59 }, { 129,  59 }, { 144,  59 }, { 159,  59 }, { 174,  59 },
    { 193,  59 }, { 205,  59 }, { 217,  59 },
  // Underglow / Border
    { 224,  64 }, { 204,  64 }, { 186,  64 }, { 167,  64 }, { 149,  64 }, { 130,  64 }, { 112,  64 }, {  94,  64 },
    {  75,  64 }, {  57,  64 }, {  38,  64 }, {  20,  64 }, {   0,  64 }, {   0,  47 }, {   0,  32 }, {   0,  17 },
    {   0,   0 }, {  20,   0 }, {  38,   0 }, {  57,   0 }, {  75,   0 }, {  94,   0 }, { 112,   0 }, { 130,   0 },
    { 149,   0 }, { 167,   0 }, { 186,   0 }, { 204,   0 }, { 224,   0 }, { 224,  17 }, { 224,  32 }, { 224,  47 }
}, {
  // KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS
    1, 4, 4, 4, 4, 1, 1, 1,
    1, 4, 4, 4, 4, 1, 9, 1,
  // KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP
    4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 1, 1, 1,
    1,
  // KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN
    1, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 1, 1,
    1,
  // KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT
    9, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 1,
  // KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP
    1, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 1, 1,
  // KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    1, 1, 1, 4, 1, 1, 1, 1,
    1, 1, 1,
  // Underglow / Border
    // 2, 2, 2, 2, 2, 2, 2, 2,
    // 2, 2, 2, 2, 2, 2, 2, 2,
    // 2, 2, 2, 2, 2, 2, 2, 2,
    // 2, 2, 2, 2, 2, 2, 2, 2
    2, 0x80|2, 2, 0x80|2, 2, 0x80|2, 2, 0x80|2,
    2, 0x80|2, 2, 0x80|2, 2, 0x80|2, 2, 0x80|2,
    2, 0x80|2, 2, 0x80|2, 2, 0x80|2, 2, 0x80|2,
    2, 0x80|2, 2, 0x80|2, 2, 0x80|2, 2, 0x80|2
} };

__attribute__ ((weak))
void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(50, 0xFF, 0xFF, 0xFF);
    }
}
#endif
