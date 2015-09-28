#include "MK64F12.h"

#define led_blue_init() { SIM_SCGC5 |= SIM_SCGC5_PORTB_MASK; PORTB_PCR21 = PORT_PCR_MUX(1); GPIOB_PDDR |= (1 << 21); }
#define led_blue_toogle() { GPIOB_PTOR |= (1 << 21); }

void delay(int time);

int main(void)
{
	int i = 0;
	led_blue_init();
	led_blue_toogle();

    for (;;) {

	led_blue_toogle();
    	delay(2000);
        i++;
    }
    return 0;
}

void delay(int time)
{
	int i = 0;
	for (i = time*1000 ; i !=0; i--) { }
}
