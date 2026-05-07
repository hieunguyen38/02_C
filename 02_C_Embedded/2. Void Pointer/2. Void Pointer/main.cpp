#include <stdio.h>
#include <stdint.h>

void myFunction(void* ptr, uint8_t size) {
	if (size == 1) {
		uint8_t* p8;
		p8 = (uint8_t*)ptr;
		*p8 = 0x12;
	}
	if (size == 2) {
		uint16_t* p16;
		p16 = (uint16_t*)ptr;
		*p16 = 0x1234;
	}
}

uint8_t a;
uint16_t b;

int main() {

	uint8_t* ptra = &a;
	myFunction(ptra, 1);

	uint16_t* ptrb = &b;
	myFunction(ptrb, 2);

	printf("%X\n", a);
	printf("%X", b);

}