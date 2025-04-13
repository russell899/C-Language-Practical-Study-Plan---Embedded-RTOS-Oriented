#include <stdio.h>

float temperature_converter(float cel)
{
	return cel*(9.0/5.0)+32; //it should be float for 9 and 5 because if it is int i will become one;
}

int main()
{
	printf("please input the temperature(celsius):");
	float cel = 0;
	scanf("%f",&cel);
	float ret = temperature_converter(cel);
	printf("The temperature(fahrenheit) is:%.3f",ret);
	return 0;
}
