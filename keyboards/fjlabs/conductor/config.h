/*
Copyright 2021 <felix@fjlaboratories.com>

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

#pragma once

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 6


// Checked with Eagle Schematic
#define MATRIX_ROW_PINS { B5, B6, B7 }
#define MATRIX_COL_PINS { E1, D1, C0, D3, C1, E0 }
#define USB_MAX_POWER_CONSUMPTION 100

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Define Encoders */
/*#define ENCODERS_PAD_A { B4, B4, B4, B4, B4, B4 }
 #define ENCODERS_PAD_B { B0, E3, B2, D5, D6, D7 } */
//#define ENCODERS_PAD_A { B4 }
//#define ENCODERS_PAD_B { B0 }
//#define ENCODER_RESOLUTION 4


/* Define MIDI */
#define MIDI_ADVANCED

