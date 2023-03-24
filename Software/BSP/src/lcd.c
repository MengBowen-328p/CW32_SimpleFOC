#include "lcd.h"

void LCD_Init(void)
{
    LCD_RCC_Init();  //初始化SPI总线时钟

    LCD_GPIO_Init(); //初始化SPIGPIO口

    SPI_TypeDef SPI1_InitStructure;     //设置SPI1相关参数

    SPI1_InitStructure.SPI_DirectionMode = SPI_Direction_2Lines_FullDuplex; //2线SPI全双工通讯
    SPI1_InitStructure.SPI_Mode = SPI_Mode_Master;  //主机模式
    SPI1_InitStructure.SPI_DataSize = SPI_DataSize_8b;  //传输数据帧包括8bit数据
    SPI1_InitStructure.SPI_CPOL = SPI_CPOL_Low; //下降沿捕获
    SPI1_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;   //第一个沿开始采集数据
    SPI1_InitStructure.SPI_NSS = SPI_NSS_Soft;  //设置SPI1片选信号为软件信号（即使用GPIO口发送片选信号）
    SPI1_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_8; //预分频48/2/8 = 3MHz
    SPI1_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB; 
    SPI1_InitStructure.SPI_Speed = SPI_Speed_High;  //高速SPI模式


}

void LCD_RCC_Init(void) //初始化时钟
{
    RCC_AHBPeriphClk_Enable(LCD_GPIO_CLK, ENABLE);
    RCC_APBPeriphClk_Enable2(RCC_APB2_PERIPH_SPI1,ENABLE);
}

void LCD_GPIO_Init(void)    //初始化GPIO口
{
    LCD_AF_MISO;
    LCD_AF_MOSI;
    LCD_AF_SCK;
    GPIO_TypeDef LCD_GPIO_InitStructure;
    LCD_GPIO_InitStructure.Pins = LCD_SCK_Pin | LCD_MOSI_Pin | LCD_MISO_Pin;
    LCD_GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
    LCD_GPIO_InitStructure.Speed = GPIO_SPEED_HIGH;
    GPIO_Init(CW_GPIOA, &LCD_GPIO_InitStructure);
}

void SPI_Send_8Bits(unsigned char data)
{
    SPI_SendData(CW_SPI1, data);
}

void Write_CMD(unsigned char CMD)
{
    SPI_Send_8Bits(CMD);
}

void Write_DATA(unsigned char DATA)
{
    SPI_Send_8Bits(DATA);
}