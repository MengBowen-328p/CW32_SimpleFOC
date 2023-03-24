/******************************************************************************/
/** \file main.c
 **
 ** A detailed description is available at
 ** @link Sample Group Some description @endlink
 **
 **   - 2021-03-12  1.0  xiebin First version for Device Driver Library of Module.
 **
 ******************************************************************************/
/*******************************************************************************
Author Meng Bowen
Powered by WHCHY Libaries
*******************************************************************************/
/******************************************************************************
 * Include files
 ******************************************************************************/
#include "../inc/main.h"
#include "../../BSP/inc/rcc.h"
#include "../../FreeRTOS/include/FreeRTOS.h"
#include "../../BSP/inc/led.h"
#include "../../BSP/inc/delay.h"
#include "../../BSP/inc/key.h"

/******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/
#define LED_GPIO_PORT CW_GPIOB
#define LED_GPIO_PINS GPIO_PIN_8 | GPIO_PIN_9

/******************************************************************************
 * Global variable definitions (declared in header file with 'extern')
 ******************************************************************************/

/******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/

/******************************************************************************
 * Local function prototypes ('static')
 ******************************************************************************/

/******************************************************************************
 * Local variable definitions ('static')                                      *
 ******************************************************************************/

/******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/

/*****************************************************************************
 * Function implementation - global ('extern') and local ('static')
 ******************************************************************************/

void Delay(uint16_t nCount);
/**
 ******************************************************************************
 ** \brief  Main function of project
 **
 ** \return uint32_t return value, if needed
 **
 ** LED1, LED2??
 **
 ******************************************************************************/
int32_t main(void)
{
    // GPIO_InitTypeDef GPIO_InitStruct;

    RCC_Init_Internal();
    LED_Init();
	Key_Init();
	
    // __RCC_GPIOB_CLK_ENABLE();

    // GPIO_InitStruct.IT = GPIO_IT_NONE;
    // GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    // GPIO_InitStruct.Pins = LED_GPIO_PINS;
    // GPIO_InitStruct.Speed = GPIO_SPEED_HIGH;

    // GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);

    while (1)
    {
        if(Read_Key1() == 1)
        {
            LED2_ON();
        }
        else
        {
            LED2_OFF();
        }
    }
}

/**
 * @brief ????
 *
 * @param nCount
 */
// void Delay(__IO uint16_t nCount) 
// {
//     /* Decrement nCount value */
//     while (nCount != 0)
//     {
//         nCount--;
//     }
// }

/******************************************************************************
 * EOF (not truncated)
 ******************************************************************************/
#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @return None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
    /* USER CODE BEGIN 6 */
    /* User can add his own implementation to report the file name and line number,
       tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
    /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
