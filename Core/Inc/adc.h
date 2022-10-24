/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    adc.h
  * @brief   This file contains all the function prototypes for
  *          the adc.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __ADC_H__
#define __ADC_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern ADC_HandleTypeDef hadc;

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_ADC_Init(void);

/* USER CODE BEGIN Prototypes */
#include <stdint.h>
#include "gpio.h"

/*!
 * ADC object type definition
 */
typedef struct
{
    Gpio_t AdcInput;
}Adc_t;

/*!
 * \brief Initializes the ADC input
 *
 * \param [IN] obj  ADC object
 * \param [IN] scl  ADC input pin name to be used
 */
void AdcInit( Adc_t *obj, PinNames adcInput );

/*!
 * \brief DeInitializes the ADC
 *
 * \param [IN] obj  ADC object
 */
void AdcDeInit( Adc_t *obj );

/*!
 * \brief Read the analogue voltage value
 *
 * \param [IN] obj  ADC object
 * \param [IN] channel ADC channel
 * \retval value    Analogue pin value
 */
uint16_t AdcReadChannel( Adc_t *obj, uint32_t channel );

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __ADC_H__ */

