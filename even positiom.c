/*
 * even position.c
 *
 * Created: 09-05-2019 22:47:57
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHZ clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
   DDRB=0XAA;
    while (1) 
    {
		PORTB=0XAA;
		_delay_ms(100);
		PORTB=0X00;
		_delay_ms(100);
    }
}

