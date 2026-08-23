#include <stdio.h>

//#define PI 3.14

#ifdef PI
void myFunction() {
	printf("PI: %f\n", PI);
}
#else // Do co define PI nen ham nay se bi an
void myFunction() {
	printf("PI: %d\n", 0);
}
#endif

int main() {

	myFunction();
	return 0;
}