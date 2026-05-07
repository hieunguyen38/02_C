#include <stdio.h>
#include <stdint.h>

#pragma pack(push, 1) // Can chinh theo 1 byte

typedef struct {
	uint32_t header;
	uint8_t  cnt;
}myStruct1;

#pragma pack(pop)    // Dung can chinh tu dong nay tro xuong

typedef struct {
	uint32_t header;
	uint8_t  cnt;
}myStruct2;

myStruct1 x;
myStruct2 y;

int main() {


	printf("Size 1: %zu\n", sizeof(x));
	printf("Size 2: %zu\n", sizeof(y));
	return 0;
}