#ifndef __KEY_H
#define __KEY_H

#include "cw32f030_gpio.h"
#include "cw32f030_rcc.h"
#include "delay.h"
#include "stdint.h"

#define Key_GPIO_Port CW_GPIOB
#define Key1_GPIO_Pin GPIO_PIN_13
#define Key2_GPIO_Pin GPIO_PIN_14
#define Key3_GPIO_Pin GPIO_PIN_15

void Key_Init(void);
int Read_Key1(void);
int Read_Key2(void);
int Read_Key3(void);

#endif