#include <stdio.h>
#include "static_global_2.h" 

extern int i;

int main()
{
	i = i + 1;
	printf("%d",i);
	return 0;
}
