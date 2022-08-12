/*
Copyright 2022 <felix@fjlaboratories.com>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum layers {
    _LAYER0,
    _LAYER1,
    _LAYER2,
    _LAYER3
};

enum custom_keycodes {
    A_CW = USER00,
    A_CCW,
    B_CW,
    B_CCW,
    C_CW,
    C_CCW,
    D_CW,
    D_CCW,
    E_CW,
    E_CCW,
    F_CW,
    F_CCW,
    A_X,
    B_X,
    C_X,
    D_X,
    E_X,
    F_X,
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_LAYER0] = { ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS)},
    [_LAYER1] = { ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS)},
    [_LAYER2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS)},
    [_LAYER3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS), ENCODER_CCW_CW(KC_TRNs, KC_TRNS)},
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 
    ),

    [_LAYER1] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_LAYER2] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [_LAYER3] = LAYOUT_all(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};



/* Define MIDI custom keycodes here */
extern MidiDevice midi_device;
#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case A_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 46, 1);
            }
            return true;
        case A_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 46, 127);
            }
            return true;
        case B_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 47, 1);
            }
            return true;
        case B_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 47, 127);
            }
            return true;
        case C_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 48, 1);
            }
            return true;
        case C_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 48, 127);
            }
            return true;
        case D_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 49, 1);
            }
            return true;
        case D_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 49, 127);
            }
            return true;
        case E_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 50, 1);
            }
            return true;
        case E_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 50, 127);
            }
            return true;
        case F_CW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 51, 1);
            }
            return true;
        case F_CCW:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 51, 127);
            }
            return true;
        case A_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 80, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 80, MIDI_CC_OFF);
            }
            return true;
        case B_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 81, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 81, MIDI_CC_OFF);
            }
            return true;
        case C_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 82, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 82, MIDI_CC_OFF);
            }
            return true;
        case D_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 83, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 83, MIDI_CC_OFF);
            }
            return true;
        case E_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 84, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 84, MIDI_CC_OFF);
            }
            return true;
        case F_X:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_OFF);
            }
            return true;
        default:
            return true;
    }
}