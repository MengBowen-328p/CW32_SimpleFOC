#ifndef __LCD_H
#define __LCD_H

#include "cw32f030_rcc.h"
#include "cw32f030_gpio.h"
#include "cw32f030_spi.h"

#define LCD_GPIO_CLK RCC_AHB_PERIPH_GPIOA
#define LCD_GPIO CW_GPIOA
#define LCD_SCK_Pin GPIO_PIN_10
#define LCD_MISO_Pin GPIO_PIN_11
#define LCD_MOSI_Pin GPIO_PIN_12
#define LCD_AF_SCK PA10_AFx_SPI1SCK()
#define LCD_AF_MISO PA11_AFx_SPI1MISO()
#define LCD_AF_MOSI PA12_AFx_SPI1MOSI()



#endif

