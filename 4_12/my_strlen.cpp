#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char* str)
{
	assert(str); //ensure that str is not a null pointer
	int i = 0;
	while(*(str+i) != '\0')
	{
		i++;
	}
	
	return i;
 } 
 
 
int main()
{
	//char arr[] = "hello world"; //�ַ��� 
	const char* arr="hello";     //�����ַ��� 
	int size = my_strlen(arr);
	printf("%zu",size);
	return 0;
}
