// -----Create Variables-----

/*

// int (12), float (2.5), char ('a')

int myNum = 15;

// Declare a variable
int myNum;

// Assign a value to the variable
myNum = 15;

*/

// -----Format Specifiers-----

/*

// Create variables
int myNum = 15;
float myFloatNum = 5.99;
char myLetter = 'D';

//Print variables
printf("My Number is: %d\n", myNum);
printf("My Float Number is: %f\n", myFloatNum);
printf("My Letter is: %c\n\n", myLetter);

printf("My Number is: %d\n", 16);
printf("My Float Number is: %f\n", 3.25);
printf("My Letter is: %c", 'K');

*/

// -----Change Values-----

/*

// Create a variable and assign the value 15 to it
int myNum = 15;

// Declare a variable without assigning it a value
int myOtherNum;

// Assign the value of myNum to myOtherNum
myOtherNum = myNum;

// myOtherNum now has 15 as a value
printf("%d", myOtherNum);

// Add variables together
int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);

*/

// -----Multiple Variables-----

/*

int x = 5, y = 6, z = 7;
printf("%d", x + y + z);

int x, y, z;
x = y = z = 50;
printf("%d", x + y + z);

*/

// -----Variable Names-----

/*

The general rules for naming variables are:

Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case-sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (such as int) cannot be used as names

// Good variable name
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;

*/

// -----Real-Life Example-----

/*

// Student data
int studentID = 15;
int studentAge = 23;
float studentFee = 75.25;
char studentGrade = 'B';

// Print variables
printf("Student id: %d\n", studentID);
printf("Student age: %d\n", studentAge);
printf("Student fee: %f\n", studentFee);
printf("Student grade: %c", studentGrade);

// Create integer variables
int length = 4;
int width = 6;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);
printf("Area of the rectangle is: %d", area);

*/
#include <stdio.h>

int main() {

	// Create variables
	int myNum = 15;
	float myFloatNum = 5.99;
	char myLetter = 'D';

	// Create variables x, y, z
	int x, y, z;

	//Student Data
	int studentID = 15;
	int studentAge = 23;
	float studentFee = 75.25;
	char studentGrade = 'B';

	//Create integer variables
	int length = 4;
	int width = 6;
	int area;

	//Assign value for variables
	x = y = z = 5;

	//Calculate the area of a rectangle
	area = length * width;

	//Print variables
	printf("My Number is: %d\n", myNum);
	printf("My Float Number is: %f\n", myFloatNum);
	printf("My Letter is: %c\n\n", myLetter);

	printf("My Number is: %d\n", 16);
	printf("My Float Number is: %f\n", 3.25);
	printf("My Letter is: %c\n\n", 'K');

	//Sum and Multiply
	printf("x = y = z = %d\n", 5);
	printf("Sum: %d\n", x + y + z);
	printf("Multiply: %d\n\n", x * y * z);

	//Print Data Student
	printf("Student id: %d\n", studentID);
	printf("Student age: %d\n", studentAge);
	printf("Student fee: %f\n", studentFee);
	printf("Student grade: %c\n\n", studentGrade);

	//Print the variables
	printf("Length is: %d\n", length);
	printf("Width is: %d\n", width);
	printf("Area of the rectangle is: %d", area);
	return 0;
}