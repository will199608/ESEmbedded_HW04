#include "blink.h"

int main(void)
{
	while(!button_push(BUTTON))	;
	blink(LED_BLUE);
	
}
