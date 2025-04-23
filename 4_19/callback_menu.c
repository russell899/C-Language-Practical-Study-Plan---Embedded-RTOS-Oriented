#include <stdio.h>

typedef void(*MenuFunction)();


void sayHello()
{
	printf("say hello!\n");
}

void sayGoodbye()
{
	printf("say goodbye!");
}

void showInfo()
{
	printf("This is a menu system using a function pointer.\n");
}

typedef struct
{
	const char* description;
	MenuFunction func;
}MeumItem;


int main()
{
	MeumItem menu[] =
	{
		{"say hello",sayHello},
		{"say goodbye",sayGoodbye},
		{"say Info",showInfo},
		{"Exit",NULL}
	 };
	 int choice;
	 int numItems = sizeof(menu)/sizeof(menu[0]);
	 
	 while(1)
	 {
	 	 printf("\n-----Menu-----\n");
	 	 int i;
		 for (i = 0; i < numItems; i++) 
		 {
		 	printf("%d. %s\n",i+1,menu[i].description);
		 }
		 
		 printf("Enter your choice.\n");
		 scanf("%d",&choice);
		 
		 if(choice < 1 || choice > numItems)
		 {
		 	printf("Invalid choice\n");
		 	continue;
		 }
		 
		 if(menu[choice - 1].func == NULL)
		 {
		 	printf("Exiting..\n");
		 	break;
	     }	
	 	menu[choice - 1].func();
	 	
	 	
	 }
}
	 
	 
	 
	  

