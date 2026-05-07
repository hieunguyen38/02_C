/*

// Global variable x
int x = 5;

void myFunction() {
	// Local variable with the same name as the global variable (x)
	int x = 22;
	printf("%d\n", x); // Refers to the local variable x
}

int main() {
	myFunction();

	printf("%d\n", x); // Refers to the global variable x
	return 0;
}

*/

#include <stdio.h>
// Global variable
int x = 5;

void myFunction() {
	printf("%d\n", ++x); // Increment the value of x by 1 and print it
}

int main() {
	myFunction();

	printf("%d\n", x); // Print the global variable x
	return 0;
}

// The value of x is now 6 (no longer 5)




