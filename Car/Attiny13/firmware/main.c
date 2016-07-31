/* Name: main.c
 * Author: HMTH(c) 
 * online_sts  -> PB0
 * car_on      -> PB1
 * pwrcut_en   -> PB2
 * power_en    -> PB3
 * shutdown_en -> PB4
 */

#include <avr/io.h>
#include <util/delay.h>

#define online_sts  PB0
#define main_pwr_on_n      PB1
#define pwrcut_en   PB2
#define power_en    PB3
#define shutdown_en PB4

void power_up (void) {
	PORTB |= (1 << power_en);
}

void wait_online (void) {
	while ( (PINB & (1 << online_sts)) == 0) {
		_delay_ms (1000);
	}
}

void wait_offline (void) {
	while (PINB & (1 << online_sts)) {
		_delay_ms (1000);
	}
}
	
void wait_pwr_off (void) {
	while ( (PINB & (1 << main_pwr_on_n)) == 0 ) {
		_delay_ms (250);
	}	
}

void shutdown (void) {
	PORTB |= (1 << shutdown_en);
}

void powerdown (void) {
	PORTB &= ~(1 << power_en);
}

void powercut (void) {
	PORTB |= (1 << pwrcut_en);
}

int main(void)
{
	// output pin
	DDRB |= (1 << pwrcut_en);
	DDRB |= (1 << power_en);
	DDRB |= (1 << shutdown_en);

	PORTB = 0b00000000;
	
	// input pin
	DDRB &= ~(1 << online_sts);
	DDRB &= ~(1 << main_pwr_on_n);
	
	// enable pull-up resistor for inputs
	PORTB |= (1 << online_sts);
	PORTB |= (1 << main_pwr_on_n);

	// Power up
//	power_up ();
//	wait_online ();
	
	// Wait for main power off
	wait_pwr_off ();
//	shutdown ();
//	wait_offline ();
	powerdown ();
	powercut ();
	while (1) {
		_delay_ms(50);
	}
    return 0;   /* never reached */
}
