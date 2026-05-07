#include <stdio.h>
#include <stdint.h>

uint8_t data = 0;   // data = 0b 0000 0000

uint8_t data2 = 0x08; // data = 0b 0000 1000

int main() {
	
	/*
	// Set bit bang OR
	data =           0b 0000 0000
	(1 << 3)         0b 0000 1000 (do 0000 0001 dich trai 3 bit)
	data | (1 << 3)  0b 0000 1000 (gia tri data luc nay bang 8)

	*/
	data |= (1 << 3);

	/*
	// Clear bit bang AND
	data2 =           0b 0000 1000
	(1 << 3)          0b 0000 1000 (do 0000 0001 dich trai 3 bit)
	~(1 << 3)         0b 1111 0111
	data2 | ~(1 << 3) 0b 0000 1000
	
	*/

	data2 &= ~(1 << 3);

	return 0;
}