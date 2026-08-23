#include <stdio.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef struct {
	int age;
}myStruct;

uint8_t a = 1;

int main() {

	myStruct m;

	m.age = 18;

	printf("%d\n", a);

	printf("%d", m.age);
	return 0;
}