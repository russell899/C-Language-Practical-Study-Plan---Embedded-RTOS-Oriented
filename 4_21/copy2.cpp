#include <stdio.h>


typedef struct student
{
	char name[20];
	int num;
	char sex;
}StuInfo;


int main()
{
	StuInfo a;
	StuInfo* p = &a;
	printf("please input name:");
	scanf("%19s",p->name);
	printf("please input num:");
	scanf("%d",&p->num);
	printf("please input sex:");
	scanf(" %c",&p->sex);
	printf("%s %d %c",p->name,p->num,p->sex);
}
