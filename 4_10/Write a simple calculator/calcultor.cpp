#include <stdio.h>
int add(int a,int b)
{
	return a + b;
}

int sub(int a,int b)
{
	return  a - b;
}

int mul(int a,int b)
{
	return a * b;
}

int div(int a,int b)
{
	if(b == 0)
	{
		printf("invalid input\n");
		return 0;
	}
	return a / b;
}
int main()
{
	while(1)
	{
	printf("   please select one of them   \n");
	printf("**********  1.add   ***********\n");
	printf("**********  2.sub   ***********\n");
	printf("**********  3.mul   ***********\n");
	printf("**********  4.div   ***********\n");
	printf("*********   0.exit  ***********\n");
	int a = 0;
	int c = 0;
	int d = 0;
	int ret = 0;
	scanf("%d",&a);
	
	if (a == 0)
	{
		printf("bye");
		break;
	}
	
	printf("please enter two digits:");
	scanf("%d %d",&c,&d);
	
	switch(a)
	{
		case 1:ret = add(c,d);break;
		case 2:ret = sub(c,d);break;
		case 3:ret = mul(c,d);break;
		case 4:ret = div(c,d);break;
		default:
			printf("invalid option\n");
			continue; //跳过下面执行语句，从循环开始执行 
	}
	printf("The result is:%d\n",ret);
}
	return 0;
 } 
