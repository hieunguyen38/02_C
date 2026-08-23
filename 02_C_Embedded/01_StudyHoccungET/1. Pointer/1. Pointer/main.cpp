#include <stdio.h>
#include <stdint.h>

typedef struct {
	int a;
	int b;
	int c;
	int d;
	int g;
}Res;

// Ví dụ về kích thước của ptr 
Res re;
uint8_t* ptr2;

// VÍ dụ về cách dịch, truy cập và kích thước vùng nhớ con trỏ trỏ tới
uint8_t* ptr8;
uint32_t* ptr32;

uint8_t arr[5] = { 1, 2, 3, 4, 5 };

int main() {
	uint8_t x = 15; // Khởi tạo giá trị 15 trong 1 ô nhớ kiểu 1 byte
 
	uint8_t* ptr = &x; // Khởi tạo 1 con trỏ trỏ tới địa chỉ ô nhớ của biến x

	// Lấy giá trị mà con trỏ trỏ tới --> *ptr

	printf("dia chi x: 0x%X\n", (unsigned int)(uintptr_t)&x);    // %X hex
	printf("Gia tri x: %d\n", *ptr);

	//
	printf("Size re: %zu\n", sizeof(re));
	printf("Size ptr2: %zu\n", sizeof(ptr2));

	//
	ptr8 = &arr[0];
	ptr32 = (uint32_t*)&arr[0];

	ptr8++; // Nhảy 1 byte trỏ tới 2
	ptr32++;// Nhảy 4 byte trỏ tới 5

	printf("ptr8 %d\n", *ptr8);
	printf("ptr32 %d\n", *ptr32);


	return 0;
}


//int main() {
//    uint8_t x = 15;
//    uint8_t* ptr = &x;
//
//    // Sửa %X thành %p và ép kiểu (void*) để in địa chỉ chuẩn
//    printf("dia chi x: %p\n", (void*)&x);
//    printf("Gia tri x: %d\n", *ptr);
//
//    Res re;
//    uint8_t* ptr2;
//
//    // Sửa %d thành %zu (hoặc ép kiểu (int)sizeof(...) )
//    printf("Size re: %zu\n", sizeof(re));
//    printf("Size ptr2: %zu\n", sizeof(ptr2));
//
//    return 0;
//}