#include <stdio.h>

typedef void(*MenuFunction)();

void saygoodbye()
{
	printf("saygoodbye\n");	
} 

void sayhello()
{
	printf("sayhello\n");
}

void showInfo()
{
	printf("this is our new message\n");
}

typedef struct
{
	const char* name;
	MenuFunction fun;
}MenuItem;


int main()
{
	MenuItem menu[] = 
	{
		{"sayhello",sayhello},
		{"saygoodbye",saygoodbye},
		{"showInfo",showInfo},
		{"EXIT",NULL}
	};
	int choice;
	int menusize = sizeof(menu)/sizeof(menu[0]);
	while(1)
   {
	for(int i = 0;i<menusize;i++)
	{
		printf("%d. %s\n",i+1,menu[i].name);
	}
	
	printf("please input choice:");
	scanf("%d",&choice);
	
	if(choice < 1 || choice >4 )
	{
		printf("Invalid input:\n");
		continue;
		
	}
	if(choice == 4 )
	{
		printf("exit");
		break;
	}
	
	menu[choice-1].fun();
    }
}
