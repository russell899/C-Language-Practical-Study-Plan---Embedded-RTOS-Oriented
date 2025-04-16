#include <stdio.h>

void swap(int* a,int* b)
{
	int c = 0;
	c = *(a);
	*(a)= *(b);
	*(b)= c;
}

int main()
{
	int a = 5;
	int b = 6;
	swap(&a,&b);
	printf("a:%d,b:%d",a,b);
	return 0;
}
