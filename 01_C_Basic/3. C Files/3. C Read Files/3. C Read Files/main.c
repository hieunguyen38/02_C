#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fptr;

	fptr = fopen("D:\\2. Learn Embedded\\1. C Basic\\3. C Files\\1. C Create Files\\filename.txt", "r");

	char myString[100];

	if (fptr != NULL) {
		while (fgets(myString, 100, fptr)) {
			printf("%s", myString);
		}
		fclose(fptr);
	}
	else {
		printf("Not able to open the file");
	}
}


