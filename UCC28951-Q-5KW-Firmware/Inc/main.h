/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32g4xx_hal.h"
#include "stm32g4xx_ll_pwr.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_D2_Pin GPIO_PIN_2
#define LCD_D2_GPIO_Port GPIOE
#define LCD_D3_Pin GPIO_PIN_3
#define LCD_D3_GPIO_Port GPIOE
#define LCD_D4_Pin GPIO_PIN_4
#define LCD_D4_GPIO_Port GPIOE
#define LCD_D5_Pin GPIO_PIN_5
#define LCD_D5_GPIO_Port GPIOE
#define LCD_D6_Pin GPIO_PIN_6
#define LCD_D6_GPIO_Port GPIOE
#define V_ref_PWM_Pin GPIO_PIN_0
#define V_ref_PWM_GPIO_Port GPIOC
#define I_ref_PWM_Pin GPIO_PIN_1
#define I_ref_PWM_GPIO_Port GPIOC
#define Iin_PSFB_Sense_Pin GPIO_PIN_3
#define Iin_PSFB_Sense_GPIO_Port GPIOC
#define Vout_PSFB_Sense_Pin GPIO_PIN_1
#define Vout_PSFB_Sense_GPIO_Port GPIOA
#define Iout_PSFB_Sense_Pin GPIO_PIN_2
#define Iout_PSFB_Sense_GPIO_Port GPIOA
#define Vref_Pin GPIO_PIN_4
#define Vref_GPIO_Port GPIOA
#define Iref_Pin GPIO_PIN_5
#define Iref_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_7
#define LCD_D7_GPIO_Port GPIOE
#define LCD_RST_Pin GPIO_PIN_8
#define LCD_RST_GPIO_Port GPIOE
#define LCD_CS_Pin GPIO_PIN_9
#define LCD_CS_GPIO_Port GPIOE
#define LCD_RS_Pin GPIO_PIN_10
#define LCD_RS_GPIO_Port GPIOE
#define LCD_WR_Pin GPIO_PIN_11
#define LCD_WR_GPIO_Port GPIOE
#define FAN1_TACH_Pin GPIO_PIN_10
#define FAN1_TACH_GPIO_Port GPIOB
#define FAN2_TACH_Pin GPIO_PIN_11
#define FAN2_TACH_GPIO_Port GPIOB
#define PFC_UV_SIG_Pin GPIO_PIN_12
#define PFC_UV_SIG_GPIO_Port GPIOB
#define PFC_OV_SIG_Pin GPIO_PIN_13
#define PFC_OV_SIG_GPIO_Port GPIOB
#define PFC_Vac_Sense_Pin GPIO_PIN_14
#define PFC_Vac_Sense_GPIO_Port GPIOB
#define PFC_OC_SIG_Pin GPIO_PIN_15
#define PFC_OC_SIG_GPIO_Port GPIOB
#define PFC_GD_En_Pin GPIO_PIN_8
#define PFC_GD_En_GPIO_Port GPIOD
#define PFC_Relay_2_Pin GPIO_PIN_9
#define PFC_Relay_2_GPIO_Port GPIOD
#define PFC_Relay_1_Pin GPIO_PIN_10
#define PFC_Relay_1_GPIO_Port GPIOD
#define PFC_SD_Pin GPIO_PIN_11
#define PFC_SD_GPIO_Port GPIOD
#define SMBus_T_SCL_Pin GPIO_PIN_8
#define SMBus_T_SCL_GPIO_Port GPIOC
#define SMBus_T_SDA_Pin GPIO_PIN_9
#define SMBus_T_SDA_GPIO_Port GPIOC
#define SMBus_T_RST_Pin GPIO_PIN_8
#define SMBus_T_RST_GPIO_Port GPIOA
#define SMBus_T_SMBA_Pin GPIO_PIN_9
#define SMBus_T_SMBA_GPIO_Port GPIOA
#define FAN1_PWM_Pin GPIO_PIN_3
#define FAN1_PWM_GPIO_Port GPIOD
#define FAN2_PWM_Pin GPIO_PIN_4
#define FAN2_PWM_GPIO_Port GPIOD
#define LCD_D0_Pin GPIO_PIN_0
#define LCD_D0_GPIO_Port GPIOE
#define LCD_D1_Pin GPIO_PIN_1
#define LCD_D1_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
