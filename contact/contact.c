#include <stdio.h>
#include "contact.h"

struct contact
{
	char name[100];
	int number;
	char sex;
}c;


void menu(void)
{
	printf("**********   1.add      ***********\n");
	printf("**********   2.delect   ***********\n");
	printf("**********   3.check    ***********\n");
	printf("**********   4.modify   ***********\n");
	printf("**********   0.exit     ***********\n");
 }
 
 
struct contact* Init_Contact(void)
 {
 	struct contact* p = (struct contact*)calloc(100,sizeof(struct contact));
 	if(p == NULL)
 	{
 		printf("%s\n",strerror(errno));
 		return NULL;
	 }
	 return p;
  } 
