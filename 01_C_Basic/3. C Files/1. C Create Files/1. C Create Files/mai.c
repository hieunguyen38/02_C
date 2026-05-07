#define _CRT_SECURE_NO_WARNINGS //Sua loi canh cao fopen
#include <stdio.h>

int main() {
	FILE* fptr;

	// Create a file
	fptr = fopen("D:\\2. Learn Embedded\\1. C Basic\\3. C Files\\1. C Create Files\\filename.txt", "w");
	
	// Close the file
	fclose(fptr);

	return 0;
}