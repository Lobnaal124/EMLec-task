/*
 * Project_557.c
 *
 * Created: 8/16/2025 7:04:47 PM
 * Author : DELL
 */ 

#include "main.h"


u8 get_key(){
	
	u8 key=0xff;
		do 
		{
			key=KEYPADu8GetKey();
			
		} while (key==0xff);

	return key;
}

volatile static u16 tick = 0;
volatile static u8 sec = 0;
volatile static u8 min = 0;
volatile static u8 hour = 0;

void APP(void)
{  tick++;

	if(tick >= 1000)  
	{
		tick = 0;
		sec++;

		if(sec == 60)
		{
			sec = 0;
			min++;
			LED_On(DIO_PORTB,DIO_PIN3);
		}

		if(min == 60)
		{
			min = 0;
			hour++;
			LED_On(DIO_PORTC,DIO_PIN2);
			
		}

		if(hour == 1)  
		{ 
			hour = 0;
			min = 0;
			sec = 0;
			LED_On(DIO_PORTC,DIO_PIN7);
			
		}
		LCD_voidGoToxy(0,0);

		if(hour < 10)
	    LCD_voidSendData('0');
		LCD_voidSendNumber(hour);
		LCD_voidSendData(':');

		if(min < 10)
	    LCD_voidSendData('0');
		LCD_voidSendNumber(min);
		LCD_voidSendData(':');

		if(sec < 10)
	    LCD_voidSendData('0');
		LCD_voidSendNumber(sec);
	}
}

/*
	//LED_init
	DIO_voidSetPortDir(LCD_DPORT,0xf0);
	DIO_voidSetPortDir(LCD_CPORT,0xfe);
	LCD_voidInit();
*/


int main(void)
{  
	GI_voidEnable();
	TIM0_voidInit(CTC_MODE);
    TIM_0_Callback(APP,CTC_MODE);
	
	DIO_voidSetPortDir(LCD_DPORT,0xf0);
	DIO_voidSetPortDir(LCD_CPORT,0xfe);
	LCD_voidInit();
   // KEYPAD_voidInit();
	//LCD_voidGoToxy(0,0);
	//LCD_voidSendString("ENTER PASS:");
   //u8 key=0;
   //u8 i=0;
   //u8 pass[4]={1,2,3,4};
   //u8 entered[4];
   //u8 check;
   //u8 attempts=0;
    while (1)
    {/*
	 check=1;	
	for(i=0;i<4;i++)
	{  
	key=get_key();
	entered[i]=key;
	LCD_voidGoToxy(12+i,0);
	LCD_voidSendNumber(entered[i]);
	_delay_ms(300);
	LCD_voidGoToxy(12+i,0);
	LCD_voidSendData('*');
	}

	for ( i=0;i<4;i++)
	{
		if (entered[i]!=pass[i])
		{
			check=0;
			break;
		}
	}
		if (check==1)
		{
			LCD_voidSendCommand(1);
			LCD_voidGoToxy(0,0);
			LCD_voidSendString("System OPen!");
			LED_On(DIO_PORTD,DIO_PIN0);
			_delay_ms(300);
			LCD_voidSendCommand(1);
			LCD_voidGoToxy(0,0);
			LCD_voidSendString("Welcome Lobna");
		}
		 else
		 {
			 attempts++;
			 if (attempts >= 3)
			 {
				 LCD_voidSendCommand(1);
				 LCD_voidGoToxy(0,0);
				 LCD_voidSendString("System Locked!");
				 LED_On(DIO_PORTD,DIO_PIN1); 
				 break;
			 }
			 else
			 {   
				 LCD_voidSendCommand(1);
				 LCD_voidGoToxy(0,0);
				 LCD_voidSendString("Try Again!"); 
				 LED_On(DIO_PORTD,DIO_PIN1);
				 _delay_ms(500);
				 LCD_voidSendCommand(1);
				 LCD_voidGoToxy(0,0);
				 LCD_voidSendString("ENTER PASS:");
				 
			 }
		 }*/
	
	}
}
   

