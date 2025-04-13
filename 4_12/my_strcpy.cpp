#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* dest,const char* src)
{
	assert(dest&&src);
	int i = 0;
	while(*(src+i)!='\0')
	{
		*(dest+i) = *(src+i);
		i++;
	}
	*(dest+i) = '\0'; //ensure there will be '\0' at the end
	return dest;
} 

int main()
{
	char arr1[] = "successful";
	char arr2[40];
	my_strcpy(arr2,arr1);
	printf("%s",arr2);
	return 0;
}
