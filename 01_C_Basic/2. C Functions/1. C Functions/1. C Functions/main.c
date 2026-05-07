// -----C Functions-----

/*

void calculateSum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d", sum);
}

int main() {
  calculateSum();  // call the function
  return 0;
}

// Outputs The sum of x + y is: 15

*/


#include <stdio.h>

void calculateSum() {
	int a = 5;
	int b = 10;
	int sum = a + b;
	printf("The sum of a + b is: %d", sum);
}

int main() {
	calculateSum();
	return 0;
}


//void myFunction(char name[], int age) {
//	printf("Hello %s. You are %d years old\n", name, age);
//}
//
//int main() {
//	myFunction("Liam", 3);
//	myFunction("Jenny", 14);
//	myFunction("Anja", 30);
//	return 0;
//}
//
//
//void myFunction(int myNumber[5]) {
//	for (int i = 0; i < 5; i++) {
//		printf("%d\n", myNumber[i]);
//	}
//}
//
//int main() {
//	int myNumber[5] = { 10, 20, 30, 40, 50 };
//	myFunction(myNumber);
//	return 0;
//}
//
//
//int calculateSum(int x, int y) {
//	return x + y;
//}
//
//int main() {
//
//	int result = calculateSum(2, 3);
//
//	int resultArr[3];
//
//	resultArr[0] = calculateSum(15, 17);
//	resultArr[1] = calculateSum(4, 19);
//	resultArr[2] = calculateSum(3, 22);
//
//	printf("Sum = %d\n", calculateSum(7, 25));
//	printf("Result = %d\n", result);
//
//	for (int i = 0; i < 3; i++) {
//		printf("Result = %d\n", resultArr[i]);
//	}
// 
//	return 0;
//}
//
//
//float toCelsius(float fahrenheit) {
//	return (5.0 / 9.0) * (fahrenheit - 32.0);
//}
//
//int main() {
//	float f_value = 98.8;
//	float result = toCelsius(f_value);
//
//	printf("F: %.2f\n", f_value);
//	printf("C: %.2f", result);
//}