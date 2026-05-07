#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct myStructure {
	int myNum;
	char myLetter;
	char myString[30];
};

// Structure about cars
struct Car {
	char brand[30];
	char model[30];
	int year;
};

int main() {

	// Create a or more structure variable of myStructure called s1
	struct myStructure s1;
	struct myStructure s3;

	// a way of simple assign value 
	struct myStructure s2 = { 50, 'K', "I am your boyfriend" };

	// Assign value to Member of s1
	s1.myNum = 30;
	s1.myLetter = 'C';
	strcpy(s1.myString, "Hello My"); // Because s1.myString is address of string, so we have to use "strcpy" statement.

	// Copy s1 values to s3
	s3 = s1;

	// Modify values in s3
	s3.myNum = 20;
	s3.myLetter = 'F';
	strcpy(s3.myString, "Hi My");


	// Print display
	printf("My number is: %d\n", s1.myNum);
	printf("My letter is: %c\n", s1.myLetter);
	printf("%s\n\n", s1.myString);
	
	printf("s2: %d %c %s\n\n", s2.myNum, s2.myLetter, s2.myString);

	printf("s3: %d %c %s\n\n", s3.myNum, s3.myLetter, s3.myString);

	struct Car Car1 = { "BMW", "XS", 1999 };
	struct Car Car2 = { "Ford", "Mustang", 1969 };
	struct Car Car3 = { "Toyota", "Corolla", 2011 };

	printf("%s %s %d\n", Car1.brand, Car1.model, Car1.year);
	printf("%s %s %d\n", Car2.brand, Car2.model, Car2.year);
	printf("%s %s %d\n", Car3.brand, Car3.model, Car3.year);

	return 0;
}