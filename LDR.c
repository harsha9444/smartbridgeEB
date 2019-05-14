/*
 * LDR.c
 *
 * Created: 13-05-2019 23:41:31
 * Author : KOWSHIKI
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include<util/delay.h>
#define LTHRES 500
void adc_init()
{
	ADMUX = (1<<REFS0);
	ADCSRA = (1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}
uint16_t adc_read(uint8_t ch)
{
	ch&=0b00000111;
	ADMUX = (ADMUX & 0xF8)|ch;
	ADCSRA |= (1<<ADSC);
	while(ADCSRA & (1<<ADSC));
	return (ADC);
}
int main(void)
{
    uint16_t adc_result0, adc_result1;
	char int_buffer[10];
	DDRC =0x01;
	adc_init();
	_delay_ms(50);
    while (1) 
    {
		adc_result0 = adc_read(0);
		if (adc_result0 < LTHRES)
		PORTC = 0x01;
		else
		PORTC = 0x00;
    }
}