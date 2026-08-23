#include <stdio.h>


// No Static
void abcd1() {
	int k = 0;

	printf("K = %d\n", k);
	k++;
	return;
 }

// Static
void abcd2() {
	static int k = 0; // khi co status bien nao se khong khai bao lai bang 0 nx nen co the ma cong tiep thoi

	printf("K = %d\n", k);
	k++;
	return;
}


int main() {

	abcd1();
	abcd1();
	abcd1();
	printf("\n");
	abcd2();
	abcd2();
	abcd2();


	return 0;
}