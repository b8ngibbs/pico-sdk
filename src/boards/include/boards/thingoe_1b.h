#ifndef _BOARDS_THINGOE_1B_H
#define _BOARDS_THINGOE_1B_H

#define PICO_DEFAULT_UART 0
#define PICO_DEFAULT_UART_TX_PIN 12
#define PICO_DEFAULT_UART_RX_PIN 13

#define PICO_DEFAULT_LED_PIN 0

#define PICO_DEFAULT_I2C 0
#define PICO_DEFAULT_I2C_SDA_PIN 24
#define PICO_DEFAULT_I2C_SCL_PIN 25

#define PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H 1
#define PICO_FLASH_SIZE_BYTES (512 * 1024)

// All boards have B1 RP2040
#define PICO_FLOAT_SUPPORT_ROM_V1 0
#define PICO_DOUBLE_SUPPORT_ROM_V1 0

#include "boards/pico.h"

#undef PICO_BOOT_STAGE2_CHOOSE_W25Q080

#endif