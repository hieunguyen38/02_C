#include <stdio.h>   // < > for standard libraries
// #include "myfile.h"  // " " for your own file

#define PI 3.14
#define SQUARE(x) ((x) * (x))
#define DEBUG



int main() {

	printf("Value of PI: %.2f\n\n", PI);

	printf("Square of 4: %d\n\n", SQUARE(4));

#ifdef DEBUG
	printf("Debug mode is ON\n");

#endif

	return 0;

}