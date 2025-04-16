#include "stm32f10x.h"    // Device header
#include "Delay.h"
//#include "led.h"

extern void LED_ON(void);
extern void LED_OFF(void);

int main(void)
{

		while(1)
		{
			LED_ON();
			Delay_ms(500);
			LED_OFF();
			Delay_ms(500);
			
		}
		
} 
	
		