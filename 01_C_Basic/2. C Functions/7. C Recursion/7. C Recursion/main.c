#include <stdio.h>

int sum(int k);
int factorial(int a);

int main() {
	int Sum = sum(10);
	int Factorial = factorial(5);

	printf("Sum 1 to 10: %d\n", Sum);
	printf("Factorial 5: %d", Factorial);
	return 0;
}

int sum(int k) {
	if (k > 0) {
		return k + sum(k - 1);
	}
	else {
		return 0; // 0 vi phep tong
	}
}

int factorial(int a) {
	if (a > 0) {
		return a * factorial(a - 1);
	}
	else {
		return 1; // 1 vi phep nhan
	}
}
