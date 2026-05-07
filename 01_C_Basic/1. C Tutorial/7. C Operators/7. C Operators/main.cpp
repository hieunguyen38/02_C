// -----Operators-----

/*

int sum1 = 100 + 50;       // 150 (100 + 50)
int sum2 = sum1 + 250;     // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)

*/

// ----- Arithmetic Operators-----

/*

int x = 10;
int y = 3;

printf("%d\n", x + y); // 13
printf("%d\n", x - y); // 7
printf("%d\n", x * y); // 30
printf("%d\n", x / y); // 3
printf("%d\n", x % y); // 1

int z = 5;
++z;
printf("%d\n", z); // 6
--z;
printf("%d\n", z); // 5

int peopleInRoom = 0;

// 3 people enter
peopleInRoom++;     // ++x thay doi gia tri ngay lap tuc
peopleInRoom++;     // x++ thay doi gia tri sau dong lenh nay
peopleInRoom++;

printf("%d\n", peopleInRoom); // 3

// 1 person leaves
peopleInRoom--;

printf("%d\n", peopleInRoom); // 2

*/

// -----Assignment Operators-----

/*
Xem anh them 

int savings = 100;
savings += 50; // add 50 to savings

printf("Total savings: %d\n", savings);

*/

// -----Comparison Operators-----

/*

int age = 18;

printf("%d\n", age >= 18); // 1 (true), old enough to vote
printf("%d\n", age < 18);  // 0 (false)

int passwordLength = 5;

printf("%d\n", passwordLength >= 8); // 0 (false), too short
printf("%d\n", passwordLength < 8);  // 1 (true), needs more characters

*/

// -----Logical Operators-----

/*

int isLoggedIn = 1;
int isAdmin = 0;

printf("Regular user: %d\n", isLoggedIn && !isAdmin);
printf("Has access: %d\n", isLoggedIn || isAdmin);
printf("Not logged in: %d\n", !isLoggedIn);

*/

// -----Operator Precedence-----

/*

int result1 = 10 - 2 + 5;    // (10 - 2) + 5 = 13
int result2 = 10 - (2 + 5);  // 10 - 7 = 3

printf("%d\n", result1);
printf("%d\n", result2);

*/





#include <stdio.h>

int main() {
	//
	int sum1 = 100 + 50;       // 150 (100 + 50)
	int sum2 = sum1 + 250;     // 400 (150 + 250)
	int sum3 = sum2 + sum2;     // 800 (400 + 400)

	//
	int x = 10;
	int y = 3;
	int z = 5;

	//
	int peopleInRoom = 0;

	//
	int savings = 100;

	//
	printf("Sum: %d\n", x + y);
	printf("Difference: %d\n", x - y);
	printf("Product: %d\n", x * y);
	printf("Quotient: %.2f\n", (float) x / y);
	printf("Remainder: %d\n\n", x % y);

	++z;
	printf("++Z: %d\n", z);
	--z;
	printf("--z: %d\n\n", z);

	// 3 people enter
	peopleInRoom++;
	peopleInRoom++;
	peopleInRoom++;

	printf("%d\n", peopleInRoom); // 3

	// 1 person leaves
	peopleInRoom--;

	printf("%d\n", peopleInRoom); // 2

	//
	savings += 50;     // add 50 to savings
	printf("Total savings: %d\n", savings);

	return 0;
}