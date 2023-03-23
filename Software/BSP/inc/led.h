#ifndef __LED_H
#define __LED_H

#include "cw32f030_gpio.h"
#include "cw32f030_rcc.h"

#define LED2_GPIO_PIN GPIO_PIN_7
#define LED3_GPIO_PIN GPIO_PIN_8
#define LED4_GPIO_PIN GPIO_PIN_13
#define ON GPIO_Pin_SET
#define OFF GPIO_Pin_RESET
void LED_Init(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED3_ON(void);
void LED3_OFF(void);
void LED4_ON(void);
void LED4_OFF(void);

#endif
