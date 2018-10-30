/* mbed Microcontroller Library
 * Copyright (c) 2006-2013 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "PeripheralPins.h"

/************RTC***************/
const PinMap PinMap_RTC[] = {
    {NC, OSC32KCLK, 0},
};

/************ADC***************/
const PinMap PinMap_ADC[] = {
    {GPIO_AD_B1_15, ADC1_15, 5},
    {GPIO_AD_B1_15, ADC2_15, 5},
    {GPIO_AD_B1_14, ADC1_14, 5},
    {GPIO_AD_B1_14, ADC2_14, 5},
    {GPIO_AD_B1_13, ADC1_13, 5},
    {GPIO_AD_B1_13, ADC2_13, 5},
    {GPIO_AD_B1_12, ADC1_12, 5},
    {GPIO_AD_B1_12, ADC2_12, 5},
    {GPIO_AD_B1_11, ADC1_11, 5},
    {GPIO_AD_B1_11, ADC2_11, 5},
    {GPIO_AD_B1_10, ADC1_10, 5},
    {GPIO_AD_B1_10, ADC2_10, 5},
    {GPIO_AD_B1_09, ADC1_9, 5},
    {GPIO_AD_B1_09, ADC2_9, 5},
    {GPIO_AD_B1_08, ADC1_8, 5},
    {GPIO_AD_B1_08, ADC2_8, 5},
    {GPIO_AD_B1_07, ADC1_7, 5},
    {GPIO_AD_B1_07, ADC2_7, 5},
    {GPIO_AD_B1_06, ADC1_6, 5},
    {GPIO_AD_B1_06, ADC2_6, 5},
    {GPIO_AD_B1_03, ADC1_4, 5},
    {GPIO_AD_B1_02, ADC2_3, 5},
    {GPIO_AD_B0_15, ADC1_2, 5},
    {GPIO_AD_B0_15, ADC2_2, 5},
    {GPIO_AD_B0_14, ADC1_1, 5},
    {GPIO_AD_B0_14, ADC2_1, 5},
    {GPIO_AD_B0_13, ADC2_0, 5},
    {GPIO_AD_B0_12, ADC1_0, 5},
    {NC   , NC       , 0}
};

/************DAC***************/
const PinMap PinMap_DAC[] = {
    {NC      , NC   , 0}
};

/************I2C***************/
const PinMap PinMap_I2C_SDA[] = {
    /* I2C_SDA for sensor */
    {GPIO_SD_B1_03, I2C_4, ((1U << DAISY_REG_VALUE_SHIFT) | (0x398 << DAISY_REG_SHIFT) | (1U << SION_BIT_SHIFT) | 3)},
    {NC   , NC   , 0}
};

const PinMap PinMap_I2C_SCL[] = {
    /* I2C_SCL for sensor */
    {GPIO_SD_B1_02, I2C_4, ((1U << DAISY_REG_VALUE_SHIFT) | (0x394 << DAISY_REG_SHIFT) | (1U << SION_BIT_SHIFT) | 3)},
    {NC   , NC   , 0}
};

/************UART***************/
const PinMap PinMap_UART_TX[] = {
    /* UART_TX for console */
    {GPIO_AD_B0_06, UART_1, 2},
    {NC  ,  NC    , 0}
};

const PinMap PinMap_UART_RX[] = {
    /* UART_RX for console */
    {GPIO_AD_B0_07, UART_1, 2},
    {NC  ,  NC    , 0}
};

/************SPI***************/
const PinMap PinMap_SPI_SCLK[] = {
    {GPIO_AD_B0_10, SPI_1, ((1U << DAISY_REG_VALUE_SHIFT) | (0x3A0 << DAISY_REG_SHIFT) | 1)},
    {GPIO_AD_B1_12, SPI_3, ((0U << DAISY_REG_VALUE_SHIFT) | (0x0 << DAISY_REG_SHIFT) | 2)},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_MOSI[] = {
    {GPIO_AD_B0_12, SPI_1, ((1U << DAISY_REG_VALUE_SHIFT) | (0x3A8 << DAISY_REG_SHIFT) | 1)},
    {GPIO_AD_B1_14, SPI_3, ((0U << DAISY_REG_VALUE_SHIFT) | (0x0 << DAISY_REG_SHIFT) | 2)},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_MISO[] = {
    {GPIO_AD_B0_13, SPI_1, ((1U << DAISY_REG_VALUE_SHIFT) | (0x3A4 << DAISY_REG_SHIFT) | 1)},
    {GPIO_AD_B1_15, SPI_3, ((0U << DAISY_REG_VALUE_SHIFT) | (0x0 << DAISY_REG_SHIFT) | 2)},
    {NC   , NC   , 0}
};

const PinMap PinMap_SPI_SSEL[] = {
    {GPIO_AD_B0_11, SPI_1, ((1U << DAISY_REG_VALUE_SHIFT) | (0x39C << DAISY_REG_SHIFT) | 1)},
    {GPIO_AD_B1_13, SPI_3, ((0U << DAISY_REG_VALUE_SHIFT) | (0x0 << DAISY_REG_SHIFT) | 2)},
    {NC   , NC   , 0}
};

/************PWM***************/
const PinMap PinMap_PWM[] = {
    /* FLEXPWM1_PWMA03 */
    {GPIO_AD_B1_12, PWM_7, ((0U << DAISY_REG_VALUE_SHIFT) | (0x334 << DAISY_REG_SHIFT) | 6)},
    /* FLEXPWM1_PWMB03 */
    {GPIO_AD_B0_11, PWM_8, ((0U << DAISY_REG_VALUE_SHIFT) | (0x344 << DAISY_REG_SHIFT) | 6)},
    {NC   , NC    , 0}
};
