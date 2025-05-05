#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	if(b!=0)
	{
	return a/b;
    }
    else
	{
	   return 1;
	 } 

}

int main()
{
	int(*func_name[4])(int,int) = {add,sub,mul,div};
	int i = 0;
	for(i=0;i<4;i++)
	{
	  int cons	= func_name[i](4,2);
	  printf("%d\n",cons);
	}
	return 0;
 } 
