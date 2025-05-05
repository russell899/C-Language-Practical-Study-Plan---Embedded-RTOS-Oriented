#include <stdio.h>

typedef enum{
	IDLE,
	PRESSED,
	LONG_PRESSED,
	RELEASED	
} ButtonStatel

ButtonState state = IDLE;
uint32_t presss_time = 0; 
uint8_t button_input = 0; //1:pressed 0:not pressed

void update_button_fsm(uint32_t current_time_ms)
{
	switch(state)
	{
		case IDLE:
			if(button_input)
			{
				press_time = current_time_ms;
				state = PRESSED;
			}
			break;
		case PRESSED:
			if(!button_input)
			{
				if(current_time_ms - press_time >= 20)
				{
					printf("long pressed detected!\n");
					state = LONG_PRESSED;
				}
				else if(current_time_ms - press_time < 20)
				{
					printf("short pressed detected!\n");
					state = IDLE;
				}
			}
			break;
		case LONG_PRESSED:
			if(!button_input)
			{
				state = IDLE;
			}
			break;
			
		default:
			state = IDLE;
			break;
	}
}

while(1)
{
	button_input = read_button();
	update_button_fsm(millis());
	delay(10);
}
