/*
 * lcd.c
 *
 * Created: 10-05-2019 02:06:40
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHZ clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>
 
 #define RS 7
 #define E 5
 void send_command(unsigned char command);
 void send_character(unsigned char character);



int main(void)
{
  DDRC=0XFF;
  DDRD=0XFF;
  _delay_ms(50);
  
  send_command(0X01);
  send_command(0X38./.
  send_command(0X0E);
  send_command(0XC0);
   send_command(0X0F);
  
  
  send_character(0X4B);
  send_character(0X4F);
  send_character(0X57);
  send_character(0X53);
  send_character(0X48);
   send_character(0X49);
  
	
}
void send_command(unsigned char command)
{
	
	PORTC=command;
	PORTD &= ~(1<<RS);
	PORTD |= (1<<E);
	_delay_ms(50);
	
	PORTD &= ~(1<<E);
	PORTC =0;
}
void send_character(unsigned char character)
{
	
	PORTC=character;
	PORTD |= (1<<RS);
	PORTD |= (1<<E);
	_delay_ms(50);
	
	PORTD &= ~(1<<E);
	PORTC =0;
}



