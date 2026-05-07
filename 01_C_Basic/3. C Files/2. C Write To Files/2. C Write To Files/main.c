#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fptr;

	// Open file
	fptr = fopen("D:\\2. Learn Embedded\\1. C Basic\\3. C Files\\1. C Create Files\\filename.txt", "w");  
	// Mode "a" se ko xoa nd co san trong file
	// Mode "w" se xoa va ghi vao nd moi
	
	// Write
	fprintf(fptr, "Hello");
	//fprintf(fptr, "Hello My");
	// Close file
	fclose(fptr);
}