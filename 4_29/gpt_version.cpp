#include <stdio.h>
#include <stdlib.h> 

void sayhello(void)
{
	printf("say hello\n");
}


void saygoodbye(void)
{
	printf("saygoodbye\n");
}

void exit(void)
{
	printf("exit\n");
	exit(0);
}


int main()
{
	int choice = 0;
	
	void(*menu[])(void)={sayhello,saygoodbye,exit};
	
   while(1)
   {
	printf("1.say hello\n");
	printf("2.say goodbye\n");
	printf("3.exit\n");
	
	printf("please enter your choice:");
	scanf("%d",&choice);
	if(choice>0 && choice<4)
	{
		menu[choice-1]();
	}
	else
	{
		printf("The selection is wrong, please try again\n");
	}
}
return 0;
}
