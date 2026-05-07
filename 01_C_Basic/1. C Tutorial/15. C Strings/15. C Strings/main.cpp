// -----Strings-----

/*

char greetings[] = "Hood to see you,";
char greetings2[] = { 'J', 'o', 'h', 'n', '\0'};
int length = sizeof(greetings2) / sizeof(greetings2[0]);
int i;

greetings[0] = 'G';

printf("%s ", greetings);

for (i = 0; i < length; i++) {
	printf("%c", greetings2[i]);
}
printf("\n");

printf("%zu\n", sizeof(greetings));   // Outputs 17
printf("%zu\n", sizeof(greetings2));  // Outputs 5

*/

// -----Special Characters-----

/*

char txt1[] = "We are the so-called \"Vikings\" from the North.";
char txt2[] = "It\' alright.";
char txt3[] = "The character \\ is called backslash.";

printf("%s\n", txt1);
printf("%s\n", txt2);
printf("%s\n", txt3);

*/

// -----String Functions-----

/*

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet));   // 26
printf("%zu\n", sizeof(alphabet));   // 27


char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet));   // 26
printf("%zu\n", sizeof(alphabet));   // 50


char str1[20] = "Hello ";
char str2[] = "World!";
// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);
// Print str1
printf("%s", str1);


char str1[20] = "Hello World!";
char str2[20];
// Copy str1 to str2
strcpy(str2, str1);
// Print str2
printf("%s", str2);


char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";
// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)
// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)


*/







#include <stdio.h>

int main() {
	/*
	char greetings[] = "Hood to see you,";
	char greetings2[] = { 'J', 'o', 'h', 'n', '\0'};
	int length = sizeof(greetings2) / sizeof(greetings2[0]);
	int i;

	greetings[0] = 'G';

	printf("%s ", greetings);

	for (i = 0; i < length; i++) {
		printf("%c", greetings2[i]);
	}
	printf("\n");

	printf("%zu\n", sizeof(greetings));   // Outputs 17
	printf("%zu\n", sizeof(greetings2));  // Outputs 5 
	*/

	char txt1[] = "We are the so-called \"Vikings\" from the North.";
	char txt2[] = "It\' alright.";
	char txt3[] = "The character \\ is called backslash.";

	printf("%s\n", txt1);
	printf("%s\n", txt2);
	printf("%s\n", txt3);

	return 0;
}