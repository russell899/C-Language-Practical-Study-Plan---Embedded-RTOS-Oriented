#include <stdio.h>
#include <assert.h>

void traverse_array(char* arr,int sz)
{
	assert(arr);
	int i = 0;
	while(i<sz)
	{
		char a = *(arr+i);
		*(arr+i) = *(arr+sz);
		*(arr+sz) = a;
		i++;
		sz--;
	}
}


int main()
{
	char arr[] = "abcd efg";
	int sz = sizeof(arr)/sizeof(char)-2;
	traverse_array(arr,sz);
	printf("%s",arr);
	return 0;
}
