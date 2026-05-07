#include <stdio.h>
#include <string.h>

struct Struct1 {
	char a;
	int b;
	char c;
	double d;
};

struct Struct2 {
	char a;
	double d;
	char c;
	int b;
	
};

struct Struct3 {
	double d;
	int b;
	char a;
	char c;
};

union Union {
	double e;
	int f;
	char g;

};

// Kich thuoc chia het cho bao nhiu phu thuoc vao bien co so byte lan nhat vd struct co double 8 byte thi them padding sao cho chia het cho 8
// Viec sap xep thu tu bien phu hop se ton it size hon (nen sap tu cao xuong thap)

int main() {

	printf("Size of Struct: %zu\n", sizeof(struct Struct1));// 1 + (3) + 4 + 1 + (7) + 8 = 24
	printf("Size of Struct: %zu\n", sizeof(struct Struct2));// 1 + (7) + 8 + 1 + (3) + 4 = 24
	printf("Size of Struct: %zu\n", sizeof(struct Struct3));// 8 + 4 + 1 + 1 + 2 = 16 chia het 8 (do double)
	printf("Size of Union: %zu\n", sizeof(union Union)); // 8
}