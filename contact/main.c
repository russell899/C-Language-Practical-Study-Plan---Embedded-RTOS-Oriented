#include <stdio.h>
#include "contact.h"

int main()
{
	while(1)
	{
	menu();
	struct* p = Init_Contact();
	int choice = 0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:add();   break;
		case 2:delect();break;
		case 3:check(); break;
		case 4:modify();break;
		case 0:return 0;break;
		default: 
		printf("sorry, your choice is wrong, please try a gain");
		break;
	}}
}
