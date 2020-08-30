#pragma once

#include "quantum.h"
#include "led.h"

/* FJ60BLX LEDs
 
inline void shawn65_caps_led_on(void)      { setPinOutput(F7); writePinHigh(F7); }

inline void shawn65_caps_led_off(void)     { setPinInput(F7); } */

/* FJ60BLX Keymap Definitions */
#define LAYOUT_60_standard( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A,      K3C,      \
    K40, K41, K42,      K44,                     K49, K4A, K4B,      K4D  \
) { \
    { K00, K01, K02, K03,   K04,   K05,   K06,   K07,   K08,   K09, K0A, K0B,   K0C,   K0D   }, \
    { K10, K11, K12, K13,   K14,   K15,   K16,   K17,   K18,   K19, K1A, K1B,   K1C,   K1D   }, \
    { K20, K21, K22, K23,   K24,   K25,   K26,   K27,   K28,   K29, K2A, K2B,   K2C,   KC_NO }, \
    { K30, K31, K32, K33,   K34,   K35,   K36,   K37,   K38,   K39, K3A, KC_NO, K3C,   KC_NO }, \
    { K40, K41, K42, KC_NO, K44,   KC_NO, KC_NO, KC_NO, KC_NO, K49, K4A, K4B,   KC_NO, K4D   }  \
}
