/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f0xx_hal.h"

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
#define RANGE3_Pin GPIO_PIN_12
#define RANGE3_GPIO_Port GPIOB
#define RANGE2_Pin GPIO_PIN_13
#define RANGE2_GPIO_Port GPIOB
#define RANGE1_Pin GPIO_PIN_14
#define RANGE1_GPIO_Port GPIOB
#define CELL_ON_Pin GPIO_PIN_15
#define CELL_ON_GPIO_Port GPIOB
#define MODE_SW_Pin GPIO_PIN_6
#define MODE_SW_GPIO_Port GPIOC
#define SDIO2_Pin GPIO_PIN_7
#define SDIO2_GPIO_Port GPIOC
#define SDIO1_Pin GPIO_PIN_8
#define SDIO1_GPIO_Port GPIOC
#define CS2_Pin GPIO_PIN_9
#define CS2_GPIO_Port GPIOC
#define CS1_Pin GPIO_PIN_8
#define CS1_GPIO_Port GPIOA
#define SCK_Pin GPIO_PIN_9
#define SCK_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
