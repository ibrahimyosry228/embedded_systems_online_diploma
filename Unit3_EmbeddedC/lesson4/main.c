/* main code for Arm Cortex M4
   Author: Ibrahim Yosry    */

#include <stdint.h>

#define delay(ms)	     for (i = 0; i < 250 * ms; i++)

#define GPIOF_BASE       0x40025000
#define SYSCTL_BASE      0x400FE000

#define SYSCTL_RCGC2     *((volatile uint32_t*)(SYSCTL_BASE + 0x108))
#define GPIOF_DEN        *((volatile uint32_t*)(GPIOF_BASE  + 0x51C))
#define GPIOF_DIR        *((volatile uint32_t*)(GPIOF_BASE  + 0x400))
#define GPIOF_DATA       *((volatile uint32_t*)(GPIOF_BASE  + 0x3FC))


#define GPIOF3           (1 << 3)
#define GPIOF_CLKEN      (1 << 5)

typedef union
{
	volatile uint32_t      all_fields;
	struct
	{
		volatile uint32_t  reserved : 3;
		volatile uint32_t  p_3      : 1;
	}
	Pin;
}
R_DATA_T;

volatile R_DATA_T* R_DATA = (volatile R_DATA_T*)(&GPIOF_DATA);


int main(void)
{
    volatile uint32_t i;

    SYSCTL_RCGC2 |= GPIOF_CLKEN;     /*enable PORTF clock*/
    delay(1);                        /*small delay to assure proper functioning of PORTF*/

    GPIOF_DEN    |= GPIOF3;          /*enable PORTF_PIN3*/
    GPIOF_DIR    |= GPIOF3;          /*set PORTF_PIN3 direction as output*/

    while (1)
    {
        /*LED ON*/
		R_DATA->Pin.p_3 = 1;
		delay(2000);

		/*LED OFF*/
		R_DATA->Pin.p_3 = 0;
		delay(2000);
    }

    return 0;
}