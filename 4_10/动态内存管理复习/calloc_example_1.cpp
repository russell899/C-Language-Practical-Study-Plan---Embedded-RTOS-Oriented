#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)calloc(10,sizeof(int)); //the difference between malloc and calloc is that calloc is equal to malloc + memset
	if(p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	for(int i = 0;i<10;i++)
	{
		printf("%d ",*(p+i)); 
	}
	free(p);
	p = NULL;
	return 0;
 } 
