#include <stdio.h>
#define READ  1 // 0001
#define WRITE 2 // 0010
#define EXEC  4 // 0100


int main() {

	int a = 6;   // 0110
	int b = 3;   // 0011

	int result1 = a & b;
	int result2 = a | b;
	int result3 = a ^ b;
	int result4 = ~a;
	int result5 = a << 2;
	int result6 = a >> 1;

	printf("Result: %d\n", result1); // 2 (0010)
	printf("Result: %d\n", result2); // 7 (0111)
	printf("Result: %d\n", result3); // 5 (0101)
	printf("Result: %d\n", result4); // -7 on most systems
	printf("Result: %d\n", result5); // 24 (6 * 2^2)
	printf("Result: %d\n", result6); // 3 (6 / 2)


	int permissions = READ | WRITE;  // User can read and write

	if (permissions & READ) {
		printf("Read allowed\n");
	}

	if (permissions & WRITE) {
		printf("Write allowed\n");
	}

	if (permissions & EXEC) {
		printf("Execute allowed\n");
	}
}