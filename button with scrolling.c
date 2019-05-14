/*
 * button with scrolling.c
 *
 * Created: 10-05-2019 00:20:13
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHZ clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC |= (1<<PC0);
	DDRC |= (1<<PC1);
	DDRC |= (1<<PC2);
	DDRC |= (1<<PC3);
	DDRC |= (1<<PC4);
	DDRC |= (1<<PC5);
	DDRC |= (1<<PC6);
	DDRC |= (1<<PC7);
	DDRD &= ~(1<<PD0);
	DDRD &= ~(1<<PD1);
	
    while (1) 
    {
		if((PIND & (1<<PD0))==0)
		{
			PORTC =(1<<PC0);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC1);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC2);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC3);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC4);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC5);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC6);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC7);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
		}
		else if((PIND & (1<<PD1))==0)
		{
			PORTC =(1<<PC7);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC6);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC5);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC4);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC3);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC2);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC1);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
			PORTC =(1<<PC0);
			_delay_ms(100);
			PORTC=0X00;
			_delay_ms(100);
		}
			
			
    }
}