#include <stdio.h>
#include <stdlib.h>


int* creat_memory(int* p)
{
	p = (int*)calloc(5,sizeof(int));
	if(p == NULL)
	{
		exit(1);
	}
	return p;
}

int main()
{
	int a;
	int* p = &a;
	p = creat_memory(p);
	for(int i = 0;i<5;i++)
	{
		*(p+i) = i;
	}
	for(int i = 0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
	
	free(p); //if we do not have this line, it will cause memory leak

 } 
