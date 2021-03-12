#include "i2c_master.h"
#include QMK_KEYBOARD_H

uint8_t i2c_initializied = 0;

void board_init(void) {
    AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_JTAGDISABLE;
}

void matrix_init_kb(void)
{
    // TODO
    // Init LED Ports
    //palSetPadMode(GPIOA, 10, PAL_MODE_OUTPUT_PUSHPULL); // LED 1

    matrix_init_user();
}
