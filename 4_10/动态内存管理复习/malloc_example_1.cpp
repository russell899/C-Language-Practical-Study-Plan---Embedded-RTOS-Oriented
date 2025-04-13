#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	int* p = (int*)malloc(INT_MAX+1);
	if(p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	
	for(int i=0;i<10;i++)
	{
		*(p+i) = i;
		printf("%d ",*(p+i));
	}
	free(p);
	p = NULL;
	return 0;
 } 
