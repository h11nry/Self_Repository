#include "stm32f10x.h"
void EIE3810_clock_tree_init(void);
void EIE3810_USART2_init(u32, u32);
void EIE3810 USART1 init(u32, u32);
void Delay(u32);


int main(void)
{
	EIE3810_clock_tree_init();
	EIE3810_USART1_init(72, 9600);

	//Wait for approximately 1 sec after RESET
	Delay(1000000);
	
	while(1){
		// ASCII codes for "122050014"
    		uint8_t digits[] = {49, 50, 50, 48, 53, 48, 48, 49, 52};
    
    		// Send each ASCII code with a delay
    		for(int i = 0; i < 9; i++)
   		{
        		USART1_SendChar(digits[i]);
			USART1->DR = digit[i];
        		Delay(500000);  
    		}
	}
}

void Delay(u32 count) 
{
	u32 i;
	for (i=0;i<count;i++);
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

	//USART2 clock (APB1)
	RCC->CFGR &= 0xFFFFFC0F;//Add comments
	RCC->CFGR |= 0x00000400;//Add comments

	//USART1 clock (APB2)
	RCC->CFGR &= 0xFFFFF8FF; // Clear PPRE2 bits (for APB2)
    RCC->CFGR |= 0x00000000; // Set PPRE2 bits to not divide HCLK for APB2 (72MHz)
	
	FLASH->ACR = 0x32;//Set FLASH with 2 wait states	
	RCC->APB1ENR |= 1<<17; //Add comments

    // Add this line to enable USART1 clock
    RCC->APB2ENR |= 1<<14; // Enable USART1 clock
    RCC->APB2ENR |= 1<<2; // Enable GPIOA clock
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