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
DDRC = 0xFF ; PORTC = 0x00 ;  
unsigned char tmpA ;
unsigned char LEDs ;   
    /* Insert your solution below */
    while (1) {
tmpA = PINA & 0x0F ; 

	if(tmpA == 1 || tmpA == 2){
	LEDs =  0x60 ;  // 01100000
	}
	else if(tmpA ==3 || tmpA == 4){
	LEDs = 0x7 ; //01110000 
	}
	else if(tmpA == 5 ||tmpA == 6){
	LEDs = 0x38 ; 
	}
	else if(tmpA == 7 || tmpA == 8|| tmpA == 9 ){
	LEDs = 0x3C ; 
	}
	else if(tmpA == 11 || tmpA == 10){
	LEDs = 0x3E ; 
	}
	else{
	LEDs = 0x3E ; 
	} 
PORTC = LEDs ;
	
	
    }
    return 0;
}
