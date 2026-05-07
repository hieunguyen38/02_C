//
//
//
//
//// Print Debugging
//int x = 10;
//int y = 0;
//printf("Before division\n"); // Debug output
////int z = x / y; // Crashes (division by zero)
//printf("After division\n"); // Never runs
//
//// Check Variable Values
//int x = 10;
//int y = 5;
//int result = x - y;
//
//printf("Result: %d\n", result); // Result: 5
//
//// Debugging with Safe Checks
//int main() {
//    int x = 10;
//    int y = 0;
//
//    printf("Before division\n");
//
//    if (y != 0) { // // Check that y is not zero before dividing
//        int z = x / y;
//        printf("Result: %d\n", z);
//    }
//    else {
//        printf("Error: Division by zero!\n"); // // Print error message instead of crashing
//    }
//
//    printf("After division\n");
//    return 0;
//}
//
//// Another Example Out of Bounds Array Access
//int main() {
//    int numbers[3] = { 10, 20, 30 };
//    int index = 5;
//
//    printf("Index = %d\n", index);
//    if (index >= 0 && index < 3) { // Make sure the index is within the valid range (0 to 2)
//        printf("Value = %d\n", numbers[index]);
//    }
//    else {
//        printf("Error: Index out of bounds!\n");
//    }
//
//    return 0;
//}

#include <stdio.h>

int main() {

	return 0;
}