#include <stdio.h>

void print_char(void* element)
{
	printf("%c ",*(char*)element);
}

void print_int(void* element)
{
	printf("%d ",*(int*)element);
}

void print_float(void* element)
{
	printf("%.2f ",*(float*)element);
}

void print_arrary(void* arr,int length,int size,void(*PrintFuc)(void *))
{
	int i = 0;
	for(i=0;i<length;i++)
	{
		void* element = (char*)arr+i*size;
		PrintFuc(element);
	}
     printf("\n");
}

int main()
{
	int arr1[] = {1,2,3,4,5};
	float arr2[] = {1.1,2.2};
	char arr3[] = {'a','b','c'};
	
	printf("print int array\n");
	print_arrary(arr1,5,sizeof(int),print_int);
	printf("print float array\n");
	print_arrary(arr2,2,sizeof(float),print_float);
	printf("print char array\n");
	print_arrary(arr3,3,sizeof(char),print_char);
	
}
