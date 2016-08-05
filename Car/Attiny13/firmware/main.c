/* Name: main.c
 * Author: HMTH(c) 
 * online_sts  -> PB0
 * car_on      -> PB1
 * pwrcut_en   -> PB2
 * power_en    -> PB3
 * shutdown_en -> PB4
 */

#include <avr/io.h>
#include <avr/sleep.h>
#include <util/delay.h>

#define online_sts         PB0
#define main_pwr_on      PB1
#define pwrcut_en          PB2
#define power_en           PB3
#define shutdown_en        PB4

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
	while (PINB & (1 << main_pwr_on)) {
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

void go_sleep (void) {
	set_sleep_mode (SLEEP_MODE_PWR_DOWN);
	sleep_mode ();
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
	DDRB &= ~(1 << main_pwr_on);
	
	// enable pull-up resistor for inputs
	//PORTB |= (1 << online_sts);
	//PORTB |= (1 << main_pwr_on);

	// Power up
//	power_up ();
//	wait_online ();
	
	// Wait for main power off
	wait_pwr_off ();
//	shutdown ();
//	wait_offline ();
	powerdown ();
	powercut ();
	
// Put MCU to sleep state to remain pin states till next restart
	go_sleep ();
    return 0;   /* never reached */
}
