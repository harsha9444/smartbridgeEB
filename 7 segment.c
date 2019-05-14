/*
 * 7segment.c
 *
 * Created: 13-05-2019 21:59:33
 * Author : KOWSHIKI
 */ 

#define F_CPU 8000000UL 


#include <avr/io.h>
#include <util/delay.h>

#define LED_Direction DDRC 

#define LED_PORT PORTC


int main(void)
{
	LED_Direction|=0XFF;
	LED_PORT = 0XFF;
	//char array[]={0b00111111,0b01100001,0b11011011,0b11110011,0b01100111,0b10110111,0b10111111,0b11100001,
	//	0b11111111,0b11110011};
    while (1) 
    {
		/*for(int i=0;i<10;i++)
		{
			LED_PORT = array[i];
			_delay_ms(1000);
		}*/
		LED_PORT = 0b01100001;
    }
	
}

