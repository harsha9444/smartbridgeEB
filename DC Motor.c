/*
 * DC motor.c
 *
 * Created: 15-05-2019 02:12:32
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=0XFF;
    while (1) 
    {
		PORTB=0b00000001;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
		PORTB=0b00000010;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
    }
}

