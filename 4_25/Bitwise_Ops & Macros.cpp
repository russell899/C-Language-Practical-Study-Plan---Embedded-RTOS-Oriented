#include <stdio.h>

#define SET_BIT(REG,bit)   REG |= (1u<<bit);
#define CLR_BIT(REG,bit)   REG &= ~(1u<<bit);

int main()
{
	int REG = 0x00;
	
	SET_BIT(REG,6);
	printf("0x%02x\n",REG);
	CLR_BIT(REG,2);
	printf("0x%02x\n",REG);
	return 0;
}

