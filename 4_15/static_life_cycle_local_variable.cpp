#include <stdio.h>

int static_life_cycle_test()
{
	static int i = 0;
	for(int k=0;k<10;k++)
	{
		i++;
	}
	return i;
}


int main()
{
	int i = 0;
	i = static_life_cycle_test();
	i = static_life_cycle_test();
	printf("%d",i);
	return 0;
}
