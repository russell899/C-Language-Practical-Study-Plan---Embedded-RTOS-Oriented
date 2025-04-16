#include <stdio.h>

void swap(int* a,int* b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(&a,&b);
	printf("a is:%d,b is:%d",a,b);
	return 0;
}
