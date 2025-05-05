#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulation_timer(int milisecond)
{
	clock_t start_time = clock();
	while(clock() < start_time + milisecond* CLOCKS_PER_SEC/1000);
}

int main()
{
	int time_counter = 0;
	const int time_interval = 100;
	
	printf("start simulating:\n");
	while(time_counter < 10)
	{
		simulation_timer(time_interval);
		time_counter++;
		printf("The current clock tick is: %d\n",time_counter);
	}
	
	printf("The timer simulation completed\n");
	return 0;
}
