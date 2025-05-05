#include <stdio.h>
#include <stdint.h>

typedef struct{
	uint8_t RXENEIE : 1; //bit 0
	uint8_t TXEIE   : 1;
	uint8_t PEIE    : 1;
	uint8_t PS      : 1;
	uint8_t PCE     : 1;
	uint8_t WAKE    : 1;
	uint8_t M       : 1;
	uint8_t UE      : 1; //bit 7
}USART_CR1_t;

volatile USART_CR1_t CR1;

int main()
{
	//ENABLE USART
	CR1.UE = 1;
	//ENABLE TX
	CR1.TXEIE = 1;
	printf("CR1 = 0x%02x\n",*(uint8_t*)&CR1);
	return 0;
}
