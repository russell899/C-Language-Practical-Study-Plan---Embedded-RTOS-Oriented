#include <stdio.h>

typedef struct student_Info
{
    char name[50];//������const char*,��Ϊ����p->name��Ҫ�����ڴ� 
	int num;
	char sex;
}stuIfo;


int main()
{
	stuIfo one;
	stuIfo* p = &one;
	printf("please input  name:");
	scanf("%49s",p->name); //������49���ַ������򽫻�����������Զ����Ͻ�β'\0' ��p->name����Ҫ�ӵ�ַ���ŵ�ԭ������Ϊ��ָ������ĵ�һ��Ԫ�� 
	printf("please input  num:");
	scanf("%d",&p->num);
	printf("please input  sex:");
	scanf(" %c",&p->sex);//�ӿո��ԭ������Ϊ%c��Ե�֮ǰ���µĿո񣬶�%d,%s,%f��Щ�Ͳ��ᣬ��Ϊ%d����Ե��س������Իس��ᱣ���ڻ�������������һ��%c�����˻س� 
	printf("%s %d %c",p->name,p->num,p->sex);
	return 0;
}
