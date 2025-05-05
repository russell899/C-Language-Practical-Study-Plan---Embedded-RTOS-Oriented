#include <stdio.h>

typedef enum{
	IDLE;
	RELEASED;
	PRESSED;
	LONG PRESSED;
}ButtonState;

ButtonState state = IDLE;
uint32_t press_time = 0;
uint32_t button_press = 0;


void update_button_state(uint32_t current_time)
{
	switch(state)
	{
		case IDLE:
			if(button_press)
			{
				press_time = current_time;
				state = PRESSED;
			}
			break;
		case PRESSED:
			if(!button_press)
			{
				if(current_time - press_time >= long_released_thresold)
				{
					printf("long pressed detecte\n");
					state = LONG PRESSED;
				}
				else
				{
					printf("short pressed detecte\n");
					state = IDLE;
				}
			}
			break;
		case LONG PRESSED:
			if(!button_press)
			{
				IDLE = state;
			}
			break;
		default:
			IDLE = state;
			break;
	}
}


while(1)
{
	button_press = read_button();
	update_button_state(milies());
	delay_ms(10); // every 10ms execute the loop
	
}
