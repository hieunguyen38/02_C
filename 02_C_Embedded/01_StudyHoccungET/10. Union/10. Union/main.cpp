#include <stdio.h>
#include <stdint.h>

// Set bit theo cach dung bitwise
uint8_t data = 0x00; // 0b 0000 0000

// Truy cap duoc tung bit trong thanh ghi bang cach su dung Union va tiet kiem du lieu
typedef union {
	uint8_t data;
	struct {
		uint8_t BIT0 : 1;
		uint8_t BIT1 : 1;
		uint8_t BIT2 : 1;
		uint8_t BIT3 : 1;
		uint8_t BIT4 : 1;
		uint8_t BIT5 : 1;
		uint8_t BIT6 : 1;
		uint8_t BIT7 : 1;
	}BITS;
}_8BIT;

_8BIT data2;

int main() {

	// Set bit theo cach dung bitwise
	data |= (1 << 3);

	printf("data = %d\n", data);

	// Truy cap duoc tung bit trong thanh ghi bang cach su dung Union va tiet kiem du lieu
	data2.BITS.BIT3 = 1;
	data2.BITS.BIT0 = 1;

	//data2.data |= (1 << 3); // Co the dung de or bth 
	
	// Do trong union nay BITS va data dung cung 1 byte chia se voi nhau va chi ton 1 byte de luu tru 2 tk nay thoi
	// Neu dung struct thi se ton 2 byte de luu tru data va BITS
	printf("data2 = %d\n", data2.data);
	printf("Size data2: %zu", sizeof(data2));
	//printf("data2 = %d\n", data2.BITS);

	return 0;
}