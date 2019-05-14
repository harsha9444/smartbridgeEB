/*
 * pir.c
 *
 * Created: 12-05-2019 22:43:57
 * Author : KOWSHIKI
 */
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHZ clock speed
#endif

#include <avr/io.h a'3
'
#include <util/delay.h>

#define LED_OUTPUT PORTB;
#define PIR_input PINC;

int main(void)
{
   DDRC=0X00;
   DDRB=0XFF;
    while (1) 
    {
		LED_OUTPUT=PIR_input;
		
    }
}

