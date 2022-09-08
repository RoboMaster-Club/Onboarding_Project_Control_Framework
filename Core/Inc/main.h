/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IMU_Heating_Pin GPIO_PIN_5
#define IMU_Heating_GPIO_Port GPIOB
#define DR16_Pin GPIO_PIN_7
#define DR16_GPIO_Port GPIOB
#define DR16B6_Pin GPIO_PIN_6
#define DR16B6_GPIO_Port GPIOB
#define ENA_Pin GPIO_PIN_7
#define ENA_GPIO_Port GPIOI
#define ENB_Pin GPIO_PIN_6
#define ENB_GPIO_Port GPIOI
#define IN4_Pin GPIO_PIN_5
#define IN4_GPIO_Port GPIOI
#define SPI_NSS_Pin GPIO_PIN_6
#define SPI_NSS_GPIO_Port GPIOF
#define Encoder_2_C2_Pin GPIO_PIN_11
#define Encoder_2_C2_GPIO_Port GPIOH
#define Encoder_2_C1_Pin GPIO_PIN_10
#define Encoder_2_C1_GPIO_Port GPIOH
#define Encoder_1_C2_Pin GPIO_PIN_13
#define Encoder_1_C2_GPIO_Port GPIOD
#define IN1_Pin GPIO_PIN_1
#define IN1_GPIO_Port GPIOA
#define Encoder_1_C1_Pin GPIO_PIN_12
#define Encoder_1_C1_GPIO_Port GPIOD
#define IN2_Pin GPIO_PIN_2
#define IN2_GPIO_Port GPIOA
#define IN3_Pin GPIO_PIN_3
#define IN3_GPIO_Port GPIOA
#define Encode_A_Pin GPIO_PIN_1
#define Encode_A_GPIO_Port GPIOB
#define Encode_B_Pin GPIO_PIN_0
#define Encode_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
