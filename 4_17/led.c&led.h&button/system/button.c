#include "stm32f10x.h"
#include "Delay.h"

void button_init(void)
{
	  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	  
	  GPIO_InitTypeDef GPIO_structure;
	  GPIO_structure.GPIO_Mode = GPIO_Mode_IPU;
	  GPIO_structure.GPIO_Pin = GPIO_Pin_2;
	  GPIO_structure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(GPIOA,&GPIO_structure);
}
	
uint8_t button_num(void)
{
	  uint8_t record = 0;
	  if(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_2) == 0)
		{
			Delay_ms(20); //key deboucing
			while(GPIO_ReadInputDataBit(GPIOA,GPIO_Pin_2) == 0); //wait for key release
			record = 1;
			Delay_ms(20);
		}
		
		return record;
	
}
