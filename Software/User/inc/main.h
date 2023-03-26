/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 CW.
  * All rights reserved.</center></h2>
  *
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "cw32f030.h"
#include "cw32f030_gpio.h"
#include "cw32f030_rcc.h"
#include "cw32f030_systick.h"
#include "interrupts_cw32f030.h"
#include "system_cw32f030.h"
#include "cw32f030_flash.h"	

#include "../../BSP/inc/rcc.h"
// #include "../../FreeRTOS/include/FreeRTOS.h"
#include "../../BSP/inc/led.h"
#include "../../BSP/inc/delay.h"
#include "../../BSP/inc/key.h"
#include "../../BSP/inc/lcd.h"
#include "../../BSP/inc/lcd_gui.h"

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
/* USER CODE BEGIN EFP */
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT CW *****END OF FILE****/
