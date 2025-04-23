#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	printf("how many sensor data you gonna store:\n");
	scanf("%d",&num);
	float* p = (float*)malloc(num*sizeof(float));
	if(p == NULL)
	{
		exit(1); //让程序提前退出，并返回一个错误码 
	}
	int i = 0;
	for(i=0;i<num;i++)
	{
		printf("please input the %d data:\n",i+1);
		scanf("%f",p+i);
	}
	printf("so the sensor data are:\n");
	for(i=0;i<num;i++)
	{
		printf("%.2f\n",*(p+i));
	}
	free(p);
	return 0;
}
