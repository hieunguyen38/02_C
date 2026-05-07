// -----Function Pointers-----

/*
//Declare
int (*ptr)(int, int);

//Assign
ptr = add;
ptr = &add;

//Call
ptr(5, 3);
(*ptr)(5, 3);

*/

// -----Callback Functions-----

/*

void addNumbers(int a, int b) {
  printf("The sum is: %d\n", a + b);
}

void calculate(void (*callback)(int, int), int x, int y) {
  callback(x, y);
}

int main() {
  calculate(addNumbers, 5, 3);
  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

int main() {
  int numbers[] = { 5, 2, 9, 1, 7 };
  int size = sizeof(numbers) / sizeof(numbers[0]);

  qsort(numbers, size, sizeof(int), compare);

  for (int i = 0; i < size; i++) {
	printf("%d ", numbers[i]);
  }
  return 0;
}

*/






#include <stdio.h>

//void add(int a, int b) {
//	printf("Result: %d\n\n", a + b);
//}
//void subtract(int a, int b) {
//	printf("Result: %d\n\n", a - b);
//}
//void multiply(int a, int b) {
//	printf("Result: %d\n\n", a * b);
//}
//
//int main() {
//	int choice, x = 10, y = 5;
//	while (1) {
//	void (*operations[3])() = { add, subtract, multiply };
//
//	printf("x = %d, y = %d\n\n", x, y);
//	printf("Choose an operation:\n");
//	printf("0: Add\n1: Subtract\n2: Multiply\n");
//	scanf_s("%d", &choice);
//
//	if (choice >= 0 && choice < 3) {
//		operations[choice](x, y);
//	}
//	else {
//		printf("Invalid choice!\n\n");
//	}
//	}
//
//	return 0;
//}

void addNumbers(int a, int b) {
	printf("Sum: %d\n", a + b);
}

void calculate(void (*callback)(int, int), int x, int y) {
	callback(x, y);
}

void greetMorning() {
	printf("Good morning\n");
}

void greetEvening() {
	printf("Good evening\n");
}

void greet(void (*callback)()) {
	callback();
}

int main() {
	calculate(addNumbers, 3, 4);
	greet(greetMorning);
	greet(greetEvening);
	return 0;
}