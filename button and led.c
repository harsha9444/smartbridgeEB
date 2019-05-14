/*
 * button and led.c
 *
 * Created: 09-05-2019 23:21:00
 * Author : KOWSHIKI
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHZ clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>PC0);//output
	DDRD &= ~(1<<PD0);// Input
    while (1) 
    {
		if((PIND & (1<<PD0)) == 0)
		{
			PORTC |= (1<<PC0);
			_delay_ms(1000);
			PORTC &= ~(1<<PC0);
		}
    }
}







+