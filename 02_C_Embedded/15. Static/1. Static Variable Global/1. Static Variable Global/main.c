#include <stdio.h>
#include "test.h"

int x = 10;
// If declare "static int x = 10" will error. Because x only in main.c

int main() {

	myPrin();
	return 0;
}

