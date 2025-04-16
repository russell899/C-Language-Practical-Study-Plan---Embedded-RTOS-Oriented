#include "stm32f10x.h"
#include "Delay.h"

void LED_ON(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
		
  GPIO_InitTypeDef GPIO_structure;//定义结构体
  GPIO_structure.GPIO_Mode = GPIO_Mode_Out_PP;//使用推挽输出
  GPIO_structure.GPIO_Pin = GPIO_Pin_0;
  GPIO_structure.GPIO_Speed =GPIO_Speed_50MHz ;
  GPIO_Init(GPIOA,&GPIO_structure);
	
	GPIO_WriteBit(GPIOA,GPIO_Pin_0, Bit_RESET);
}

void LED_OFF(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
		
  GPIO_InitTypeDef GPIO_structure;//定义结构体
  GPIO_structure.GPIO_Mode = GPIO_Mode_Out_PP;//使用推挽输出
  GPIO_structure.GPIO_Pin = GPIO_Pin_0;
  GPIO_structure.GPIO_Speed =GPIO_Speed_50MHz ;
  GPIO_Init(GPIOA,&GPIO_structure);
	
	GPIO_WriteBit(GPIOA,GPIO_Pin_0, Bit_SET);
}
	

