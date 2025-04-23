#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p = (int*)calloc(5,sizeof(int));
	if(p == NULL)
	{
		exit(1);
	}
	printf("please input the data of sensor:\n");
	for(int i = 0;i<5;i++)
	{
		printf("The %d is:",i+1);
		scanf("%d",p+i);
	 } 
	for(int i = 0;i<5;i++)
	printf("%d ",*(p+i));
	free(p);
	return 0;
}
