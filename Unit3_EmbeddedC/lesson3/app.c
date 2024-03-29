/* main code for Arm Cortex M3
   Author: Ibrahim Yosry    */


#include <stdint.h>

#define delay(ms)	  		for (i = 0; i < 250 * ms; i++)

#define RCC_BASE      		0x40021000
#define GPIOA_BASE    		0x40010800

#define RCC_APB2ENR  		*((volatile uint32_t*)(RCC_BASE   + 0x18))
#define GPIOA_CRH  		    *((volatile uint32_t*)(GPIOA_BASE + 0x04))
#define GPIOA_ODR     		*((volatile uint32_t*)(GPIOA_BASE + 0x0c))

#define RCC_IOPAEN    		(1 << 2)
#define pin13_pos	  		(4 * (13 - 8))
#define output_pushpull		2

typedef union
{
	volatile uint32_t      all_fields;
	struct
	{
		volatile uint32_t  reserved : 13;
		volatile uint32_t  pin13     : 1;
	}
	Pin;
}
R_ODR_T;

volatile R_ODR_T* R_ODR = (R_ODR_T*)(&GPIOA_ODR);

unsigned char global_UninitializedVariables[6] __attribute__((section(".bss")));
unsigned char global_InitializedVariables[8] = {1, 2, 3, 4, 5, 6, 7, 8};
unsigned const char global_ConstVariables[5] = {1, 2, 3, 4, 5};

int main(void)
{
	/*Enable GPIOA clock*/
	RCC_APB2ENR |= RCC_IOPAEN;
	/*set GPIOA pin13 mode to be output push pull*/
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 2 << 20;
	
	uint32_t i;		/*delay iterator*/
	
	while(1)
	{
		/*LED ON*/
		R_ODR->Pin.pin13 = 1;
		delay(1000);

		/*LED OFF*/
		R_ODR->Pin.pin13 = 0;
		delay(1000);
	}

	return 0;
}
