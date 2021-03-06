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
DDRB = 0xFF ; PORTB = 0xFF ;  
DDRC = 0xFF ; PORTC = 0x00 ;     
    /* Insert your solution below */
    while (1) {
unsigned char uNib = PINA & 0xF0 ;
unsigned char lNib = PINA & 0x0F ;  

uNib = uNib >> 4  ; 
lNib = lNib << 4 ; 


PORTB = uNib ; 
PORTC = lNib ; 
    }
    return 0;
}
