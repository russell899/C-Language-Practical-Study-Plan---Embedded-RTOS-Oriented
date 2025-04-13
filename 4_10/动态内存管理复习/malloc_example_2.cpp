#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	int* p = (int*)malloc(INT_MAX+1); //if the size of malloc is larger than the size of the specific type , it will return NULL 
	if(p == NULL)
	{
		printf("%s",strerror(errno)); 
		return 1;
	 } 
	 int i = 0;
	 for(i=0;i<10;i++)
	 {
	 	*(p+i) = i;
	 	printf("%d",*(p+i));
	 }
	 free(p);
	 p = NULL;
	 return 0;
}
