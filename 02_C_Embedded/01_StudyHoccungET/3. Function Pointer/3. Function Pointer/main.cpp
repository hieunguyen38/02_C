#include <stdio.h>
#include <stdint.h>

void view(uint8_t x);
void viewx2(uint8_t x);

// Vi du trong thuc te
#define CNT 4; // Khi co res4 thi sua CNT 3 -> 4

void res1();
void res2();
void res3();
void res4(); // Khi co them ham res4 thi chi can them ben ngoai

typedef void (*Function)();

Function Function1[CNT] = { res1, res2, res3, res4 }

typedef void (*myFunction)(uint8_t); // function pointer de tro theo ten ham va call ham

int main() {


	// Call bang ten ham
	myFunction m; // Khoi tao 1 con tro ham ten m
	
	m = view; // Gan con tro ham m den view

	m(2); //Goi ham view thong qua con tro ham m

	m = viewx2;

	m(2);


	// Call bang dia chi cua ham
	uint64_t address;

	address = (uint64_t)view;

	printf("Address view by view function: %p\n", view);
	printf("Address view: %p\n", (void*)address);
	printf("Address view by %: 0x%llX\n", address);

	((myFunction)address)(1); // ep address ve kieu con tro ham

	address = (uint64_t)viewx2;

	printf("Address viewx2 by viewx2 function: %p\n", viewx2);
	printf("Address viewx2: %p\n", (void*)address);
	printf("Address viewx2 by %: 0x%llX\n", address);

	((myFunction)address)(2);

	// Trong thuc te dung con tro ham de them ben ngoai ham main ma khong anh huong toi thuat toan cua ham main giup code clean hon

	for (int i = 0; i < CNT; i++) {
		
	}

	return 0;
}

void view(uint8_t x) {
	printf("%d\n", x);
}

void viewx2(uint8_t x) {
	printf("%d\n", x * 2);
}

// Vi du trong thuc te ve function pointer
void res1() {
	printf("res1");
}

void res2() {
	printf("res1");
}

void res3() {
	printf("res1");
}
// Khi co them res4
void res4() {
	printf("res1");
}
