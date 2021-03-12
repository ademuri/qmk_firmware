/*
Copyright 2019 Yaotian Feng(Codetector) <codetector@codetector.cn>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "config_common.h"

#define PRODUCT_ID      0x3636
#define DEVICE_VER      0x0001
#define PRODUCT Dactyl-Manuform (5x7)

#define MATRIX_ROWS 12
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS {B12, B13, B14, B15, A8, A9}
#define MATRIX_COL_PINS {B11, B10, B1, B0, A7, A6}

#define MATRIX_ROW_PINS_RIGHT {B12, B13, B14, B15, A8, A9}
#define MATRIX_COL_PINS_RIGHT {B11, B10, B1, B0, A7, A6}

#define DIODE_DIRECTION COL2ROW

// i2c_master driver config
// #define I2C1_CLOCK_SPEED 400000
// #define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

//#define PAL_USE_WAIT TRUE

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN B6  // USART TX pin
#define SELECT_SOFT_SERIAL_SPEED 1
#define SERIAL_USART_DRIVER SD1 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 100 // USART driver timeout. default 100
