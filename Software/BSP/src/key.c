#include "key.h"

void Key_Init(void)
{
    GPIO_InitTypeDef GPIOB_InitStruct;
    __RCC_GPIOB_CLK_ENABLE();
    GPIOB_InitStruct.IT = GPIO_IT_NONE;
    GPIOB_InitStruct.Mode = GPIO_MODE_INPUT_PULLUP;
    GPIOB_InitStruct.Pins = Key1_GPIO_Pin | Key2_GPIO_Pin | Key3_GPIO_Pin;
    GPIOB_InitStruct.Speed = GPIO_SPEED_HIGH;
    GPIO_Init(CW_GPIOB, &GPIOB_InitStruct);
}

int Read_Key1(void)
{
    if(GPIO_ReadPin(Key_GPIO_Port, Key1_GPIO_Pin))
    {
        Delay(0x4E02);
        if(GPIO_ReadPin(Key_GPIO_Port, Key1_GPIO_Pin))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int Read_Key2(void)
{
    if(GPIO_ReadPin(Key_GPIO_Port, Key2_GPIO_Pin))
    {
        Delay(0x4E02);
        if(GPIO_ReadPin(Key_GPIO_Port, Key2_GPIO_Pin))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int Read_Key3(void)
{
    if(GPIO_ReadPin(Key_GPIO_Port, Key3_GPIO_Pin))
    {
        Delay(0x4E02);
        if(GPIO_ReadPin(Key_GPIO_Port, Key3_GPIO_Pin))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}