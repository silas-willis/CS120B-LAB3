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

DDRA = 0x00 ; PORTA = 0xFF ; 
DDRB = 0x00 ; PORTB = 0xFF ;
DDRC = 0xFF ; PORTC = 0x00 ;  
unsigned char tmpB = 0x00 ; 
unsigned char tmpA = 0x00 ;  
unsigned char counter = 0x00; 
    /* Insert your solution below */
    while (1) {

	tmpA = PINA ; 
	tmpB = PINB ; 
unsigned char i = 0 ; 
	for(i = 0 ; i < 8 ; ++i){

	if((tmpA & 0x01 ) == 0x01) {
	counter++ ; 	
	}
	if((tmpB & 0x01) == 0x01){
	counter++ ; 
	}
	tmpA = tmpA >> 1 ; 
	tmpB = tmpB >> 1 ; 
	
	}

PORTC = counter ; 
    }
    return 0;
}
