#include "stm32f10x.h"
void EIE3810_clock_tree_init(void);
void EIE3810_USART2_init(u32, u32);
void USART_print(u8 USARTport, char *st);
void Delay(u32);


int main(void)
{
	EIE3810_clock_tree_init();
	EIE3810_USART2_init(36, 9600);
	USART_print(1,"1234567890");
	while(1)
	{
		USART2->DR = 0x41;//Add comments
		Delay(50000);		
		USART2->DR = 0x42;//Add comments
		Delay(50000);
		Delay(1000000);
	}	
}

void Delay(u32 count) 
{
	u32 i;
	for (i=0;i<count;i++);
}

void USART_print(u8 USARTport, char *st)
{
	u8 i=0;
	while(st[i] != 0x00)
	{
		if (USARTport == 1) USART -> DR = st[i];
		if (USARTport == 2) USART -> DR = st[i];
		Delay(50000); //Default line
		while(!((USART->SR>>7)&0x1)); //Modifed line
		if (i == 255) break;
		i++;
	}
}

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
	FLASH->ACR = 0x32;//Set FLASH with 2 wait states	
	RCC->APB1ENR |= 1<<17; //Add comments
}

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