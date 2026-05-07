#include <stdio.h>
#include <stdint.h>

/*
STATUS

BIT0:          STATUS BTN1: 1-ON 0-OFF 
BIT0:          STATUS BTN1: 1-ON 0-OFF

*/

uint8_t status = 0x00;

#define FLAG_BTN1       0x00
#define FLAG_BTN2       0x01
#define FLAG_BTN3       0x02
#define FLAG_BTN4       0x03
#define FLAG_LED1       0x04
#define FLAG_LED2       0x05
#define FLAG_LED3       0x06
#define FLAG_PIN        0x07

// -------------------FLAG_LED1--------------------------------
#define SET_FLAG_LED1()      {status |= (1 << FLAG_LED1)} //Set 
#define CLR_FLAG_LED1()      {status &= ~(1 << FLAG_LED1)}//Clear
#define CHK_FLAG_LED1()      {status & (1 << FLAG_LED1)}  //Check

int main() {

	return 0;
}