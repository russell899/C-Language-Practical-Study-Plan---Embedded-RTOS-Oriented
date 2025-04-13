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
	//char arr[] = "hello world"; //×Ö·û´® 
	const char* arr="hello";     //³£Á¿×Ö·û´® 
	int size = my_strlen(arr);
	printf("%zu",size);
	return 0;
}
