/**************************************************************************//**
 * @file     os_tick.h
 * @brief    CMSIS OS Tick header file
 * @version  V1.0.1
 * @date     24. November 2017
 ******************************************************************************/
/*
 * Copyright (c) 2017-2017 ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OS_TICK_H
#define OS_TICK_H

#include <stdint.h>
#if defined(TARGET_CORTEX_A)
#include "irq_ctrl.h"
#endif

/// IRQ Handler.
#ifndef IRQHANDLER_T
#define IRQHANDLER_T
typedef void (*IRQHandler_t) (void);
#endif

/// Setup OS Tick.
/// \param[in]     freq         tick frequency in Hz
/// \param[in]     handler      tick IRQ handler
/// \return 0 on success, -1 on error.
int32_t  OS_Tick_Setup (uint32_t freq, IRQHandler_t handler);

/// Enable OS Tick.
void     OS_Tick_Enable (void);

/// Disable OS Tick.
void     OS_Tick_Disable (void);

/// Acknowledge OS Tick IRQ.
void     OS_Tick_AcknowledgeIRQ (void);

/// Get OS Tick IRQ number.
/// \return OS Tick IRQ number.
int32_t  OS_Tick_GetIRQn (void);

/// Get OS Tick clock.
/// \return OS Tick clock in Hz.
uint32_t OS_Tick_GetClock (void);

/// Get OS Tick interval.
/// \return OS Tick interval.
uint32_t OS_Tick_GetInterval (void);

/// Get OS Tick count value.
/// \return OS Tick count value.
uint32_t OS_Tick_GetCount (void);

/// Get OS Tick overflow status.
/// \return OS Tick overflow status (1 - overflow, 0 - no overflow).
uint32_t OS_Tick_GetOverflow (void);

/// Get Cortex-A9 OS Timer interrupt number
/// \returns Cortex-A9 OS Timer interrupt number (134)
#if defined(TARGET_CORTEX_A)
IRQn_ID_t mbed_get_a9_tick_irqn(void);
#endif
#endif  /* OS_TICK_H */
