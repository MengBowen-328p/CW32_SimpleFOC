#include "./led.h"

void LED_Init(void)
{
    GPIO_InitTypeDef GPIOA_InitStruct;
    __RCC_GPIOC_CLK_ENABLE();
    GPIOA_InitStruct.IT = GPIO_IT_NONE;
    GPIOA_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIOA_InitStruct.Pins = LED2_GPIO_PIN | LED3_GPIO_PIN;
    GPIOA_InitStruct.Speed = GPIO_SPEED_HIGH;

    GPIO_InitTypeDef GPIOC_InitStruct;
    __RCC_GPIOA_CLK_ENABLE();
    GPIOC_InitStruct.IT = GPIO_IT_NONE;
    GPIOC_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIOC_InitStruct.Pins = LED4_GPIO_PIN;
    GPIOC_InitStruct.Speed = GPIO_SPEED_HIGH;

    GPIO_Init(CW_GPIOA, &GPIOA_InitStruct);
    GPIO_Init(CW_GPIOC, &GPIOC_InitStruct);
}

void LED2_ON(void)
{
    GPIO_WritePin(CW_GPIOA, LED2_GPIO_PIN, GPIO_Pin_SET);
}

void LED2_OFF(void)
{
    GPIO_WritePin(CW_GPIOA, LED2_GPIO_PIN, GPIO_Pin_RESET);
}

void LED3_ON(void)
{
    GPIO_WritePin(CW_GPIOA, LED3_GPIO_PIN, GPIO_Pin_SET);
}

void LED3_OFF(void)
{
    GPIO_WritePin(CW_GPIOA, LED3_GPIO_PIN, GPIO_Pin_RESET);
}

void LED4_ON(void)
{
    GPIO_WritePin(CW_GPIOC, LED4_GPIO_PIN, GPIO_Pin_SET);
}

void LED4_OFF(void)
{
    GPIO_WritePin(CW_GPIOC, LED4_GPIO_PIN, GPIO_Pin_RESET);
}