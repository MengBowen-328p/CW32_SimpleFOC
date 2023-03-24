#include "./rcc.h"

/**
* @brief  Enable external oscillator
* @param  int Mode: HSE oscillator input frequence
* @retval None
*/
void RCC_Init_External(int frequence)	//启用外部时钟
{
	RCC_HSE_Enable(RCC_HSE_MODE_OSC, frequence, RCC_HSE_DRIVER_NORMAL, RCC_HSE_FLT_CLOSE);
	RCC_LSE_Enable(RCC_LSE_MODE_OSC, RCC_LSE_AMP_NORMAL, RCC_LSE_DRIVER_NORMAL);
}

/**
* @brief  Enable internal oscillator
* @param  None
* @retval None
*/
void RCC_Init_Internal(void)	//启用内部时钟
{
	RCC_HSI_Enable(RCC_HSIOSC_DIV2);
	RCC_LSI_Enable();
}