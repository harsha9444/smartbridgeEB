/*
 * relay module.c
 *
 * Created: 14-05-2019 02:25:29
 * Author : KOWSHIKI
 */ 
#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#define E 5
#define RS 7
void send_a_command(unsigned char command);
void send_a_character(unsigned char charachter);
void send_a_string(char*string_of_charachters);



int main(void)
{
  DDRC =0xFF;
  DDRD =0xFF;
  DDRB =0;
  DDRA = 0xff
  ADMUX|=(1<<REFS0);
  ADCSRA|=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0);
  float i=0;
  float LDR =0;
  char LDRSHOW[7];
  send_a_command(0x01);
  _delay_ms(50);
  send_a_command(0x38);
  _delay_ms(50);
  send_a_command(0b00001111);
  ADCSRA |=(1<<ADSC);
  send_a_string("KOWSHIKI");
  send_a_command(0x80 + 0x40 + 8);
    while (1) 
    {
		i = ADC/204.8;
		LDR =(i*10/(5-i));
		dtostrf(LDR,4,1,LDRSHOW);
		send_a_string(LDRSHOW);
		send_a_string("K ");
		_delay_ms(50);
		send_a_command(0x80 + 0X40 + 8);
	}
}
void send_a_command(unsigned char command)
{
	PORTC = command;
	PORTD &= ~(1<<RS);
	PORTD |= 1<<E;
	_delay_ms(50);
	PORTD  &= ~1<<E;
	PORTC =0;
    }
	void send_a_character(unsigned char character)
	{
		PORTC = character;
		PORTD |= (1<<RS);
		PORTD |= 1<<E;
		_delay_ms(50);
		PORTD  &= ~1<<E;
		PORTC =0;
		}
		void send_a_string(char*string_of_characters)
		{
			
			while(*string_of_characters>0)
			{
				
				send_a_character(*string_of_characters++);
			}
		}

