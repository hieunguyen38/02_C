#include <stdio.h>
#include <string.h>

union myUnion {
	int myNum;
	char myLetter;
	char myString[30];
};

int main() {

	// Declare a union
	union myUnion u1;

	// Assign value to union
	u1.myNum = 1000;

	// Since at a time, only store a value, so myNum value is now invalid
	u1.myLetter = 'H';

	// Print 
	printf("My number: %d\n", u1.myNum);
	printf("My letter: %c\n\n", u1.myLetter);

	// Size of a union is size of largest memnber (30 - 32) , different size of a struct is sum of size of member (35 - 36) 

	printf("Size of union: %zu\n", sizeof(u1)); // reason (32): boi so cua 4 gan 30 nhat

	return 0;
}