/*
 * 7clicks.c
 *
 * Created: 5/19/2025 8:17:54 PM
 * Author : Lobna
 */ 

#include <avr/io.h>
#include "Libarary/BIT_MATH.h"
#include "Libarary/STD_TYPE.h"
#define  F_CPU 16000000UL
#include <util/delay.h>
void update_leds(u8 value) {
	// Bit 0 ? PORTB3
	if (value & (1 << 0))
	SET_BIT(PORTB, 3);
	else
	CLR_BIT(PORTB, 3);

	// Bit 1 ? PORTC2
	if (value & (1 << 1))
	SET_BIT(PORTC, 2);
	else
	CLR_BIT(PORTC, 2);

	// Bit 2 ? PORTC7
	if (value & (1 << 2))
	SET_BIT(PORTC, 7);
	else
	CLR_BIT(PORTC, 7);

	// Bit 3 ? PORTD6
	if (value & (1 << 3))
	SET_BIT(PORTD, 6);
	else
	CLR_BIT(PORTD, 6);
}
int main(void)
{    
	SET_BIT(DDRB,3);
	SET_BIT(DDRC,2);
	SET_BIT(DDRC,7);
	SET_BIT(DDRD,6);
	
	CLR_BIT(DDRD,2);
	SET_BIT(PORTD, 2);  

	 u8 count = 0;
    while (1){
		 if (GIT_BIT(PIND, 2) == 0)
		 {
			 _delay_ms(50); 
			 if (GIT_BIT(PIND, 2) == 0)
			 {
				 count = (count + 1) % 8;  // count from 0 to 7
				 update_leds(count);

				 // Wait until button is released
				 while (GIT_BIT(PIND, 2) == 0);
				 _delay_ms(50); 
			 }
		 }
	 } 
 }

