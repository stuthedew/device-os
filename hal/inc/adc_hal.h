/**
 ******************************************************************************
 * @file    adc_hal.h
 * @authors Satish Nair, Brett Walach
 * @version V1.0.0
 * @date    12-Sept-2014
 * @brief
 ******************************************************************************
  Copyright (c) 2013-2015 Particle Industries, Inc.  All rights reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ADC_HAL_H
#define __ADC_HAL_H

/* Includes ------------------------------------------------------------------*/
#include "pinmap_hal.h"

/* Exported types ------------------------------------------------------------*/
#if (PLATFORM_ID == PLATFORM_ARGON) || (PLATFORM_ID == PLATFORM_BORON) || (PLATFORM_ID == PLATFORM_XENON)
typedef enum
{
    AR_DEFAULT,
    INTERNAL,
} vref_e;
#endif
/* Exported constants --------------------------------------------------------*/

/* Exported macros -----------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

void HAL_ADC_Set_Sample_Time(uint8_t ADC_SampleTime);
int32_t HAL_ADC_Read(pin_t pin);
void HAL_ADC_DMA_Init();

#if (PLATFORM_ID == PLATFORM_ARGON) || (PLATFORM_ID == PLATFORM_BORON) || (PLATFORM_ID == PLATFORM_XENON)
void HAL_ADC_Set_VREF(vref_e v_e);
#endif

#ifdef __cplusplus
}
#endif

#endif  /* __ADC_HAL_H */
