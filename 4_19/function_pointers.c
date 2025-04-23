#include <stdio.h>

// use callback function to realize a menu

void menu() 
{
	printf("********** 1.add    ******************\n");
	printf("********** 2.delete ******************\n");
	printf("********** 3.check  ******************\n");
	printf("********** 4.modify ******************\n");
}

void call_back(void(*callback)()) //void(*callback)() is a funtion_pointer, and the parameters can be omitted in parameter table 
{
	callback(); //callback() = menu() = (*callback)()
}

int main()
{
	call_back(menu); //the parameter is the address of menu, menu = &menu
	return 0;
}
