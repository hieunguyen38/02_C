#include <stdio.h>
int main() {

	return 0;
}

//// Missing semicolon
//int main() {
//	int x = 5
//	printf("%d", x);
//	return 0;
//}
//
//// Using undeclared variables
//int main() {
//	//printf("%d", myVar);
//	return 0;
//}
//
//// Mismatched types
//int main() {
//	//int x = "Hello";
//	return 0;
//}
//
////Dividing by zero
//int main() {
//	int x = 10;
//	int y = 0;
//	int result = x / y;
//	printf("%d\\n", result); // not possible
//	return 0;
//}
//
//// Accessing out of bounds array elements
//int main() {
//	int numbers[3] = { 1, 2, 3 };
//	printf("%d\\n", numbers[8]); // element does not exist
//	return 0;
//}
//
//// Using freed memory
//int main() {
//	int* ptr = malloc(sizeof(int));
//	*ptr = 10;
//	free(ptr);
//	printf("%d\\n", *ptr); // Undefined behavior - accessing memory that was freed
//	return 0;
//}