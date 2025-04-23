#include <stdio.h>

typedef struct student_Info
{
    char name[50];//不能用const char*,因为下面p->name需要分配内存 
	int num;
	char sex;
}stuIfo;


int main()
{
	stuIfo one;
	stuIfo* p = &one;
	printf("please input  name:");
	scanf("%49s",p->name); //最多读出49个字符，否则将会溢出，并且自动补上结尾'\0' ，p->name不需要加地址符号的原因是因为他指向数组的第一个元素 
	printf("please input  num:");
	scanf("%d",&p->num);
	printf("please input  sex:");
	scanf(" %c",&p->sex);//加空格的原因是因为%c会吃掉之前留下的空格，而%d,%s,%f这些就不会，因为%d不会吃掉回车，所以回车会保留在缓冲区，导致下一个%c读到了回车 
	printf("%s %d %c",p->name,p->num,p->sex);
	return 0;
}
