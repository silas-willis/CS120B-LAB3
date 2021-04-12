/*	Author: swill048
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */


DDRB = 0xFE ; PORTB = 0x01 ;       
DDRD = 0x00 ; PORTD = 0xFF ; 
    /* Insert your solution below */
    while (1) {
unsigned char weight = 0  ; 
weight =((weight + PIND )<<1 ) + (PORTB & 0x01 ) ; 
	
	if(weight >= 70){
	PORTB = 0x02 ; 
	}
	else if( weight < 5){
	PORTB = 0x00 ; 
	}
	else{
	PORTB = 0x04 ;  //PB1 = 0 PB2 = 1 
	}


    }
    return 0;
}
