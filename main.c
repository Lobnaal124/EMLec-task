/*
 * Project_557.c
 *
 * Created: 8/16/2025 7:04:47 PM
 * Author : DELL
 */ 

#include "main.h"

//Arabic name 
void LCD_CreateChar(u8 location, u8 charmap[]) {
	location &= 0x07;
	LCD_voidSendCommand(0x40 | (location << 3)); // location on CGRAM
	for (u8 i = 0; i < 8; i++) {
		LCD_voidSendData(charmap[i]); //show data on LCD
	}
}
int main(void)
{   
	DIO_voidSetPortDir(LCD_DPORT,0xf0);
	DIO_voidSetPortDir(LCD_CPORT,0x07);
	LCD_voidInit();
	
	
	// name in Arabic 
      u8 arr[]= {
	    0x01,
	    0x01,
	    0x01,
	    0x05,
	    0x05,
	    0x1F,
	    0x08,
	    0x00};
	 u8 arr_2[]={
	    0x00,
	    0x00,
	    0x00,
	    0x0A,
	    0x02,
	    0x1F,
	    0x00,
	    0x00};
	 u8 arr_3[]={
	    0x00,
	    0x00,
	    0x00,
	    0x0E,
	    0x1A,
	    0x1B,
	    0x18,
	    0x00};
		LCD_CreateChar(0,arr);
		LCD_CreateChar(1,arr_2);
		LCD_CreateChar(2,arr_3);
		
		LCD_voidGoToxy(15,0);
		LCD_voidSendData(0);
		LCD_voidGoToxy(14,0);
		LCD_voidSendData(1);
		LCD_voidGoToxy(13,0);
		LCD_voidSendData(2);
		_delay_ms(500);
		LCD_voidSendCommand(1);
		
		LCD_voidGoToxy(8,1);
		LCD_voidSendData(0);
		LCD_voidGoToxy(7,1);
		LCD_voidSendData(1);
		LCD_voidGoToxy(6,1);
		LCD_voidSendData(2);
		_delay_ms(500);
		
		LCD_voidSendCommand(1);
		LCD_voidGoToxy(2,0);
		LCD_voidSendData(0);
		LCD_voidGoToxy(1,0);
		LCD_voidSendData(1);
		LCD_voidGoToxy(0,0);
		LCD_voidSendData(2);
		
	 /*	
	// khatem el_tasbih	
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN0,INPUT);//count+
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN1,INPUT);//count-
	DIO_voidSetPinDir(DIO_PORTC,DIO_PIN2,INPUT);//Reset
	DIO_voidSetPinVal(DIO_PORTC,DIO_PIN0,HIGH);
	DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,HIGH);
	DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,HIGH);
	u8 count=0;  */
  
  /*
  //Hockey Game 
   u8 Ball[]   = {0x00,0x00,0x0E,0x0E,0x0E,0x00,0x00,0x00};
   u8 Paddle[] = {0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F};

   DIO_voidSetPinDir(DIO_PORTC,DIO_PIN0,INPUT);//up
   DIO_voidSetPinDir(DIO_PORTC,DIO_PIN1,INPUT);//down
   DIO_voidSetPinDir(DIO_PORTC,DIO_PIN2,INPUT);//reset
   DIO_voidSetPinVal(DIO_PORTC,DIO_PIN0,HIGH);
   DIO_voidSetPinVal(DIO_PORTC,DIO_PIN1,HIGH);
   DIO_voidSetPinVal(DIO_PORTC,DIO_PIN2,HIGH); */

  
  
    while (1) 
    {
		
		
		
		 /* 
		// khatem el_tasbih
		    if (DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN0)==0)
		    {
			    while(DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN0)==0);
			    _delay_ms(5);
			    LCD_voidGoToxy(0,0);
			    LCD_voidSendString("count:");
				count++;
			    LCD_voidGoToxy(6,0);
			    LCD_voidSendNumber(count);
				
		    }
		else if (DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN1)==0)
		{
			while(DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN1)==0);
			_delay_ms(5);
			LCD_voidGoToxy(0,0);
			LCD_voidSendString("count:");
			LCD_voidGoToxy(6,0);
			LCD_voidSendNumber(count);
			count--;
		}
	else if (DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN2)==0)
		{
			while(DIO_u8ReadPinVal(DIO_PORTC,DIO_PIN2)==0);
			_delay_ms(5);
			LCD_voidGoToxy(0,0);
			LCD_voidSendString("reset:");
			LCD_voidSendNumber(0);
		}*/
      
	  
	  //Hockey Game 
        
	}
   }

