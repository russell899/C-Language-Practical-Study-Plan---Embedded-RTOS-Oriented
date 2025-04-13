#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)calloc(10,sizeof(int));
	if(p == NULL)
	{
		printf("%s\n",strerror(errno));
		return 1;
	}
	int i = 0;
	int* ptr = (int*)realloc(p,80);//the size is total size(the original one plus the later one),the pointer will return to location of the last end
	if(ptr == NULL)
	{
		p = ptr;
	}
	for(i=0;i<20;i++)
	{
		*(p+i) = i;
		printf("%d ",*(p+i));
	}
	free(p);
	p = NULL;
	return 0;
}
