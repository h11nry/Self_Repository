#include "EIE3810_Clock.h"

void EIE3810_clock_tree_init(void)
{
	u8 PLL=7;
	u8 temp=0;
	RCC->CR |= 0x00010000; //Add comments
	while(!((RCC->CR>>17)&0x1));//Add comments
	RCC->CFGR &= 0xFFFDFFFF; //Add comments
	RCC->CFGR |= 1<<16; //Add comments
	RCC->CFGR |= PLL<<18; //Add comments
	RCC->CR |=0x01000000;//Add comments
	while(!(RCC->CR>>25));//Add comments
	RCC->CFGR &=0xFFFFFFFE;//Add comments
	RCC->CFGR |=0x00000002;//Add comments
	while(temp !=0x02) //Add comments
	{
		temp=RCC->CFGR>>2;
		temp &= 0x03; //Add comments
	}	
	RCC->CFGR &= 0xFFFFFC0F;//Add comments
	RCC->CFGR |= 0x00000400;//Add comments

	RCC->CFGR &= 0xFFFFF8FF; // Clear PPRE2 bits (for APB2)
    RCC->CFGR |= 0x00000000; // Set PPRE2 bits to not divide HCLK for APB2 (72MHz)
	
	FLASH->ACR = 0x32;//Set FLASH with 2 wait states	
	RCC->APB1ENR |= 1<<17; //Add comments

    // Add this line to enable USART1 clock
    RCC->APB2ENR |= 1<<14; // Enable USART1 clock
    RCC->APB2ENR |= 1<<2; // Enable GPIOA clock
}