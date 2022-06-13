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
     { 0, K_1,  J_1,  L_1  },
     { 0, K_2,  J_2,  L_2  },
     { 0, K_3,  J_3,  L_3  },
     { 0, K_4,  J_4,  L_4  },
     { 0, K_5,  J_5,  L_5  },
     { 0, K_7,  J_7,  L_7  },
     { 0, K_8,  J_8,  L_8  },
     { 0, K_9,  J_9,  L_9  },
     { 0, K_10, J_10, L_10 },
     { 1, K_1,  J_1,  L_1  },
     { 1, K_2,  J_2,  L_2  },
     { 1, K_3,  J_3,  L_3  },
     { 1, K_4,  J_4,  L_4  },
     { 1, K_5,  J_5,  L_5  },
     { 1, K_7,  J_7,  L_7  },
     { 1, K_9,  J_9,  L_9  },
     { 1, K_6,  J_6,  L_6  },
     { 1, K_8,  J_8,  L_8  },
     { 0, H_1,  G_1,  I_1  },
     { 0, H_11, G_11, I_11 },
     { 0, H_2,  G_2,  I_2  },
     { 0, H_3,  G_3,  I_3  },
     { 0, H_4,  G_4,  I_4  },
     { 0, H_5,  G_5,  I_5  },
     { 0, H_6,  G_6,  I_6  },
     { 0, H_7,  G_7,  I_7  },
     { 0, H_8,  G_8,  I_8  },
     { 0, H_9,  G_9,  I_9  },
     { 0, H_10, G_10, I_10 },
     { 1, E_1,  D_1,  F_1  },
     { 1, E_2,  D_2,  F_2  },
     { 1, E_4,  D_4,  F_4  },
     { 1, E_5,  D_5,  F_5  },
     { 1, E_6,  D_6,  F_6  },
     { 1, E_7,  D_7,  F_7  },
     { 1, E_8,  D_8,  F_8  },
     { 0, E_1,  D_1,  F_1  },
     { 0, E_2,  D_2,  F_2  },
     { 0, E_3,  D_3,  F_3  },
     { 0, E_4,  D_4,  F_4  },
     { 0, E_5,  D_5,  F_5  },
     { 0, E_6,  D_6,  F_6  },
     { 0, E_7,  D_7,  F_7  },
     { 0, E_8,  D_8,  F_8  },
     { 0, E_9,  D_9,  F_9  },
     { 0, E_10, D_10, F_10 },
     { 1, B_1,  A_1,  C_1  },
     { 1, B_2,  A_2,  C_2  },
     { 1, B_3,  A_3,  C_3  },
     { 1, B_4,  A_4,  C_4  },
     { 1, B_5,  A_5,  C_5  },
     { 1, B_6,  A_6,  C_6  },
     { 1, B_7,  A_7,  C_7  },
     { 1, B_8,  A_8,  C_8  },
     { 0, B_1,  A_1,  C_1  },
     { 0, B_2,  A_2,  C_2  },
     { 0, B_3,  A_3,  C_3  },
     { 0, B_4,  A_4,  C_4  },
     { 0, B_5,  A_5,  C_5  },
     { 0, B_6,  A_6,  C_6  },
     { 0, B_7,  A_7,  C_7  },
     { 0, B_8,  A_8,  C_8  },
     { 0, B_9,  A_9,  C_9  },
     { 0, B_10, A_10, C_10 },
     { 1, B_9,  A_9,  C_9  },
     { 1, B_10, A_10, C_10 },
     { 1, B_11, A_11, C_11 },
     { 1, B_13, A_13, C_13 },
     { 1, B_14, A_14, C_14 },
     { 1, B_15, A_15, C_15 },
     { 1, B_16, A_16, C_16 },
     { 0, B_11, A_11, C_11 },
     { 0, B_12, A_12, C_12 },
     { 0, B_13, A_13, C_13 },
     { 0, H_13, G_13, I_13 },
     { 0, H_14, G_14, I_14 },
     { 0, B_14, A_14, C_14 },
     { 0, E_15, D_15, F_15 },
     { 0, B_15, A_15, C_15 },
     { 0, B_16, A_16, C_16 },
     { 1, E_9,  D_9,  F_9  },
     { 1, E_10, D_10, F_10 },
     { 1, E_11, D_11, F_11 },
     { 1, E_13, D_13, F_13 },
     { 1, E_14, D_14, F_14 },
     { 1, E_15, D_15, F_15 },
     { 1, E_12, D_12, F_12 },
     { 1, H_16, G_16, I_16 },
     { 0, E_11, D_11, F_11 },
     { 0, E_12, D_12, F_12 },
     { 0, E_13, D_13, F_13 },
     { 0, E_14, D_14, F_14 },
     { 1, H_9,  G_9,  I_9  },
     { 1, H_10, G_10, I_10 },
     { 1, H_14, G_14, I_14 },
     { 1, H_15, G_15, I_15 },
     { 1, H_11, G_11, I_11 },
     { 1, H_12, G_12, I_12 },
     { 1, H_13, G_13, I_13 },
     { 2, H_1,  G_1,  I_1  },
     { 2, K_1,  J_1,  L_1  },
     { 2, B_1,  A_1,  C_1  },
     { 2, E_1,  D_1,  F_1  },
     { 2, E_2,  D_2,  F_2  },
     { 2, B_2,  A_2,  C_2  },
     { 2, B_3,  A_3,  C_3  },
     { 2, E_3,  D_3,  F_3  },
     { 2, E_4,  D_4,  F_4  },
     { 2, B_4,  A_4,  C_4  },
     { 2, B_5,  A_5,  C_5  },
     { 2, E_5,  D_5,  F_5  },
     { 2, E_6,  D_6,  F_6  },
     { 2, B_6,  A_6,  C_6  },
     { 2, B_7,  A_7,  C_7  },
     { 2, E_7,  D_7,  F_7  },
     { 2, E_8,  D_8,  F_8  },
     { 2, B_8,  A_8,  C_8  },
     { 2, B_9,  A_9,  C_9  },
     { 2, E_9,  D_9,  F_9  },
     { 2, E_10, D_10, F_10 },
     { 2, B_10, A_10, C_10 },
     { 2, B_11, A_11, C_11 },
     { 2, E_11, D_11, F_11 },
     { 2, E_12, D_12, F_12 },
     { 2, B_12, A_12, C_12 },
     { 2, B_13, A_13, C_13 },
     { 2, E_13, D_13, F_13 },
     { 2, E_14, D_14, F_14 },
     { 2, B_14, A_14, C_14 },
     { 2, B_15, A_15, C_15 },
     { 2, E_15, D_15, F_15 },
     { 2, E_16, D_16, F_16 },
     { 2, B_16, A_16, C_16 },
     { 2, H_16, G_16, I_16 },
     { 2, K_16, J_16, L_16 },
     { 2, K_15, J_15, L_15 },
     { 2, H_15, G_15, I_15 },
     { 2, H_14, G_14, I_14 },
     { 2, K_14, J_14, L_14 },
     { 2, K_13, J_13, L_13 },
     { 2, H_13, G_13, I_13 },
     { 2, H_12, G_12, I_12 },
     { 2, K_12, J_12, L_12 },
     { 2, K_11, J_11, L_11 },
     { 2, H_11, G_11, I_11 },
     { 2, H_10, G_10, I_10 },
     { 2, K_10, J_10, L_10 },
     { 2, K_9,  J_9,  L_9  },
     { 2, H_9,  G_9,  I_9  },
     { 2, H_8,  G_8,  I_8  },
     { 2, K_8,  J_8,  L_8  },
     { 2, K_7,  J_7,  L_7  },
     { 2, H_7,  G_7,  I_7  },
     { 2, H_6,  G_6,  I_6  },
     { 2, K_6,  J_6,  L_6  },
     { 2, K_5,  J_5,  L_5  },
     { 2, H_5,  G_5,  I_5  },
     { 2, H_4,  G_4,  I_4  },
     { 2, K_4,  J_4,  L_4  },
     { 2, K_3,  J_3,  L_3  },
     { 2, H_3,  G_3,  I_3  },
     { 2, H_2,  G_2,  I_2  },
     { 2, K_2,  J_2,  L_2  },
     { 1, K_10, J_10, L_10 },
     { 1, K_11, J_11, L_11 },
     { 1, E_3,  D_3,  F_3  },
};

led_config_t g_led_config = {
  {
    {    0,		1,	2,	4,	5,	6,	7,	9,	11,	NO_LED,	14,	15,	NO_LED	},
    {    21,	22,	3,	26,	28,	29,	8,	10,	12,	17,	18,	19,	NO_LED	},
    {    39,	23,	24,	27,	45,	30,	31,	33,	34,	35,	36,	37,	38		},
    {    57,	40,	25,	43,	46,	47,	32,	50,	51,	53,	54,	55,	56		},
    {    74,	41,	42,	44,	63,	48,	49,	67,	52,	70,	71,	72,	73		},
    {    91,	58,	60,	61,	64,	65,	66,	83,	68,	86,	87,	88,	90		},
    {    92,	59,	76,	62,	79,	81,	82,	84,	69,	89,	101,97,	98		},
    {    93,	75,	77,	78,	94,	80,	95,	96,	85,	99,	100,NO_LED,	NO_LED  }
  },
  {
	  {6, 61 },
	  {20, 61 },
	  {31, 61 },
	  {43, 61 },
	  {54, 61 },
	  {69, 61 },
	  {80, 61 },
	  {91, 61 },
	  {103, 61 },
	  {117, 61 },
	  {129, 61 },
	  {140, 61 },
	  {152, 61 },
	  {183, 61 },
	  {206, 61 },
	  {166, 61 },
	  {194, 61 },
	  {217, 61 },
	  {6, 49 },
	  {17, 49 },
	  {29, 49 },
	  {40, 49 },
	  {51, 49 },
	  {63, 49 },
	  {74, 49 },
	  {86, 49 },
	  {97, 49 },
	  {109, 49 },
	  {120, 49 },
	  {132, 49 },
	  {143, 49 },
	  {160, 49 },
	  {183, 49 },
	  {194, 49 },
	  {206, 49 },
	  {217, 49 },
	  {9, 39 },
	  {23, 39 },
	  {34, 39 },
	  {46, 39 },
	  {57, 39 },
	  {69, 39 },
	  {80, 39 },
	  {91, 39 },
	  {103, 39 },
	  {114, 39 },
	  {126, 39 },
	  {137, 39 },
	  {149, 39 },
	  {163, 39 },
	  {183, 39 },
	  {194, 39 },
	  {206, 39 },
	  {217, 39 },
	  {10, 29 },
	  {26, 29 },
	  {37, 29 },
	  {49, 29 },
	  {60, 29 },
	  {71, 29 },
	  {83, 29 },
	  {94, 29 },
	  {106, 29 },
	  {117, 29 },
	  {129, 29 },
	  {140, 29 },
	  {159, 29 },
	  {183, 29 },
	  {194, 29 },
	  {206, 29 },
	  {217, 29 },
	  {13, 20 },
	  {31, 20 },
	  {43, 20 },
	  {54, 20 },
	  {66, 20 },
	  {77, 20 },
	  {89, 20 },
	  {100, 20 },
	  {112, 19 },
	  {123, 20 },
	  {134, 20 },
	  {150, 20 },
	  {183, 20 },
	  {194, 20 },
	  {206, 20 },
	  {169, 17 },
	  {214, 12 },
	  {7, 10 },
	  {21, 10 },
	  {36, 10 },
	  {79, 10 },
	  {123, 10 },
	  {140, 10 },
	  {194, 10 },
	  {206, 10 },
	  {157, 7 },
	  {169, 7 },
	  {180, 7 },
	  {1, 63 },
	  {6, 64 },
	  {26, 64 },
	  {35, 64 },
	  {45, 64 },
	  {54, 64 },
	  {64, 64 },
	  {74, 64 },
	  {83, 64 },
	  {93, 64 },
	  {102, 64 },
	  {112, 64 },
	  {122, 64 },
	  {131, 64 },
	  {141, 64 },
	  {150, 64 },
	  {160, 64 },
	  {170, 64 },
	  {179, 64 },
	  {189, 64 },
	  {198, 64 },
	  {218, 64 },
	  {222, 63 },
	  {224, 58 },
	  {224, 51 },
	  {224, 43 },
	  {224, 35 },
	  {224, 28 },
	  {224, 20 },
	  {224, 12 },
	  {224, 5 },
	  {222, 0 },
	  {218, 0 },
	  {208, 0 },
	  {198, 0 },
	  {189, 0 },
	  {179, 0 },
	  {170, 0 },
	  {160, 0 },
	  {150, 0 },
	  {141, 0 },
	  {131, 0 },
	  {122, 0 },
	  {112, 0 },
	  {102, 0 },
	  {93, 0 },
	  {83, 0 },
	  {74, 0 },
	  {64, 0 },
	  {54, 0 },
	  {45, 0 },
	  {35, 0 },
	  {26, 0 },
	  {16, 0 },
	  {6, 0  },
	  {1, 0  }, 
	  {0, 5  },
	  {0, 12 },
	  {0, 20 },
	  {0, 28 },
	  {0, 35 },
	  {0, 43 },
	  {0, 51 },
	  {0, 58 },
	  {174, 61 },
	  {174, 58 },
	  {174, 55 }
  },
  {
 // Key Lights (99) - LED_FLAG_KEYLIGHT, LED_FLAG_MODIFIER
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
		1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4,
		1, 1, 1, 4, 1, 1, 4, 4, 4, 4, 4,

// Underglow/border LEDs (64) - LED_FLAG_UNDERGLOW
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2,

 // NCS Indicators (3)
		//0, 0, 0
		2, 2, 2
  }
};

__attribute__ ((weak))
void rgb_matrix_indicators_user(void) {
    uint8_t num_state = host_keyboard_led_state().num_lock ? 0xFF : 0;
    uint8_t caps_state = host_keyboard_led_state().caps_lock ? 0xFF : 0;
    uint8_t scroll_state = host_keyboard_led_state().scroll_lock ? 0xFF : 0;

    rgb_matrix_set_color(163, num_state, num_state, num_state);
    rgb_matrix_set_color(164, caps_state, caps_state, caps_state);
    rgb_matrix_set_color(165, scroll_state, scroll_state, scroll_state);
}

#endif