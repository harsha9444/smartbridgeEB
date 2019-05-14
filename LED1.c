/*
 * led1.c
 *
 * Created: 09-05-2019 03:12:44
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16  MHZ clock speed
#endif 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0X80;
	DDRB=0X80;
	DDRC=0X80;
	DDRD=0X80;
    while (1) 
    {
		PORTA=0X80;
	    PORTB=0X80;
		PORTC=0X80;
		PORTD=0X80;
		_delay_ms(1000);
		PORTA=0X00;
		PORTB=0X00;
		PORTC=0X00;
		PORTD=0X00;
		_delay_ms(1000);
    }
}

