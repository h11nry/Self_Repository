#include "EIE3810_USART.h"

void EIE3810_USART2_init(u32 pclk1, u32 baudrate)
{
	//USART2
	float temp;
	u16 mantissa;
	u16 fraction;
	temp=(float) (pclk1*1000000)/(baudrate*16);
	mantissa=temp;
	fraction=(temp-mantissa)*16;
	mantissa<<=4;
	mantissa+=fraction;
	RCC->APB2ENR |= 1<<2; //Add comments	
	GPIOA->CRL &= 0xFFFF00FF; //Add comments
	GPIOA->CRL |= 0x00008B00; //Add comments
	RCC->APB1RSTR |= 1<<17; //Add comments
	RCC->APB1RSTR &= ~(1<<17); //Add comments
	USART2->BRR=mantissa;//Add comments
	USART2->CR1=0x2008; //Add comments
}

void EIE3810_USART1_init(u32 pclk2, u32 baudrate)
{
    float temp;
    u16 mantissa;
    u16 fraction;

    // Calculate BRR value
    temp = (float) (pclk1*1000000)/(baudrate*16);
    mantissa = temp;
    fraction = (temp - mantissa) * 16;
    mantissa <<= 4;
    mantissa += fraction;

    // Enable clock for GPIOA
    RCC->APB2ENR |= 1 << 2;

    // Configure PA9 (TX) and PA10 (RX)
    GPIOA->CRH &= 0xFFFFF00F; // Clear bits for PA9 and PA10
    GPIOA->CRH |= 0x000008B0; // Set PA9 as alternate function output push-pull, PA10 as input floating

   	// Enable clock for USART1
    RCC->APB2ENR |= 1 << 14;

    // Reset USART1
    RCC->APB2RSTR |= 1 << 14;
    RCC->APB2RSTR &= ~(1 << 14);

    // Set baud rate
    USART1->BRR = mantissa;

    // Enable USART, enable transmitter, enable receiver
    USART1->CR1 = 0x2008;
}