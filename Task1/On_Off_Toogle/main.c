/*
 * On_Off_Toogle.c
 *
 * Created: 5/19/2025 8:33:53 PM
 * Author : Lobna
 */ 

#include <avr/io.h>
#include "Libarary/BIT_MATH.h"
#include "Libarary/STD_TYPE.h"
#define  F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
   SET_BIT(DDRB,3);
   SET_BIT(DDRC,2);
   SET_BIT(DDRC,7);
   SET_BIT(DDRD,6);
   
   CLR_BIT(DDRD,2);
   CLR_BIT(DDRD,3);
   CLR_BIT(DDRD,7);
   


    while (1) 
    {
		while(GIT_BIT(PIND,2)==0){
			 SET_BIT(PORTB,3);
			 SET_BIT(PORTC,2);
			 SET_BIT(PORTC,7);
			 SET_BIT(PORTD,6);
		 }
		 
		while(GIT_BIT(PIND,3)==0){
			 CLR_BIT(PORTB,3);
			 CLR_BIT(PORTC,2);
			 CLR_BIT(PORTC,7);
			 CLR_BIT(PORTD,6);
		 }
		 if(GIT_BIT(PIND,7)==0){
			  TOOGLE_BIT(PORTB,3);
			  _delay_ms(500);
			  TOOGLE_BIT(PORTC,2);
			  _delay_ms(500);
			  TOOGLE_BIT(PORTC,7);
			  _delay_ms(500);
			  TOOGLE_BIT(PORTD,6);
			  _delay_ms(500);
			  
		   }
		
    }
}

