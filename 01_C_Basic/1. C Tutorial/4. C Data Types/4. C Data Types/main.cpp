// -----Data Types-----

/*

int    - %d  - 2 or 4 bytes - 1
float  - %f  - 4 bytes      - 1.99 (6-7 decimal digits)
double - %lf - 8 bytes      - 1.99 (15 decimal digits)
char   - %c  - 1 byte       - 'A' 
       - %s  - Luu chuoi ki tu

*/

// -----Characters-----

/*

char myGrade = 'A';
printf("%c", myGrade);

char a = 65, b = 66, c = 67;
printf("%c", a);
printf("%c", b);
printf("%c", c);
//printf("%c%c%c", a, b, c);

*/

// -----Numbers-----

/*

int myNum = 1000;
printf("%d", myNum);

float myNum = 5.75;
printf("%f", myNum);

double myNum = 19.99;
printf("%lf", myNum);

float f1 = 35e3;   // 35 * 10^3 = 35000
double d1 = 12E4;  // 12 * 10^4 = 120000

printf("%f\n", f1);
printf("%lf", d1);
*/

// -----Decimal Precision-----

/*

float myFloatNum = 3.5;
double myDoubleNum = 19.99;

printf("%f\n", myFloatNum); // Outputs 3.500000
printf("%lf", myDoubleNum); // Outputs 19.990000

float myFloatNum = 3.5;

printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
printf("My Float Numner is: %.0f\n", myFloatNum); // Lam tron
printf("%.1f\n", myFloatNum); // Only show 1 digit
printf("%.2f\n", myFloatNum); // Only show 2 digits
printf("%.4f", myFloatNum);   // Only show 4 digits

*/

// -----Memory size-----

/*

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%zu\n", sizeof(myInt));
printf("%zu\n", sizeof(myFloat));
printf("%zu\n", sizeof(myDouble));
printf("%zu\n", sizeof(myChar));

*/

// -----Real-Life Example-----

/*

Create variables of different data types
int items = 50;
float cost_per_item = 9.99;
float total_cost = items * cost_per_item;
char currency = '$';

*/

// -----Extended Types-----

/*

int normalInt = 1000;                       // standard int
double normalDouble = 3.14;                 // standard double

short int small = -100;                     // smaller int
unsigned int count = 25;                    // only positive int
long int big = 1234567890;                  // larger int
long long int veryBig = 9223372036854775807; // very large int
unsigned long long int huge = 18446744073709551615U; // very large, only positive
long double precise = 3.141592653589793238L; // extended precision

printf("Normal int: %d\n", normalInt);
printf("Normal double: %lf\n", normalDouble);
printf("Small: %hd\n", small);
printf("Count: %u\n", count);
printf("Big: %ld\n", big);
printf("Very Big: %lld\n", veryBig);
printf("Huge: %llu\n", huge);
printf("Precise: %Lf\n", precise);

printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of short int: %zu bytes\n", sizeof(short int));
printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
printf("Size of long double: %zu bytes\n", sizeof(long double));
*/
#include <stdio.h>

int main() {
	//Declare and assign value of the variables 
	char a = 65, b = 66, c = 67;

	//Declare and assign value of the variables 
	float f1 = 35e3;   // 35 * 10^3 = 35000
	double d1 = 12E4;  // 12 * 10^4 = 120000

	//Decimal Precision
	float myFloatNum = 3.5;

	//Create variables of different data types
	int items = 50;
	float cost_per_item = 9.99;
	float total_cost = items * cost_per_item;
	char currency = '$';
	
	//
	int normalInt = 1000;                       // standard int
	double normalDouble = 3.14;                 // standard double

	short int small = -100;                     // smaller int
	unsigned int count = 25;                    // only positive int
	long int big = 1234567890;                  // larger int
	long long int veryBig = 9223372036854775807; // very large int
	unsigned long long int huge = 18446744073709551615U; // very large, only positive
	long double precise = 3.141592653589793238L; // extended precision

	//Print
	printf("%c%c%c\n\n", a, b, c);

	//Print
	printf("%f\n", f1);
	printf("%lf\n\n", d1);

	//
	printf("My Float Number is: %f\n", myFloatNum); // Default will show 6 digits after the decimal point
	printf("My Float Numner is: %.0f\n", myFloatNum); // Lam tron 
	printf("My Float Number is: %.1f\n", myFloatNum); // Only show 1 digit
	printf("My Float Number is: %.2f\n", myFloatNum); // Only show 2 digits
	printf("My Float Numner is: %.4f\n\n", myFloatNum); // Only show 4 digits

	//
	printf("Size of myFloatNum is: %zu\n\n", sizeof(myFloatNum));

	//Print variables 
	printf("Number of items: %d\n", items);
	printf("Cost Per Item: %.2f %c\n", cost_per_item, currency);
	printf("Tortal cost = %.2f %c\n\n", total_cost, currency);

	//
	printf("Normal int: %d\n", normalInt);
	printf("Normal double: %lf\n", normalDouble);
	printf("Small: %hd\n", small);
	printf("Count: %u\n", count);
	printf("Big: %ld\n", big);
	printf("Very Big: %lld\n", veryBig);
	printf("Huge: %llu\n", huge);
	printf("Precise: %Lf\n\n", precise);

	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of short int: %zu bytes\n", sizeof(short int));
	printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
	printf("Size of long double: %zu bytes\n", sizeof(long double));
	return 0;
}