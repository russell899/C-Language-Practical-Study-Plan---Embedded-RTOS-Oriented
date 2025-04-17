#include "stm32f10x.h"    // Device header
#include "Delay.h"
#include "led.h"
#include "button.h"

uint8_t button_value;


int main(void)
{
	  LED_INIT();
	  button_init();
		while(1)
		{
			button_value =  button_num();
			if(button_value == 1)
			{
				LED_TURN();
			}
		}
		
} 
	
		