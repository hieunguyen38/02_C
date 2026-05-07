// -----Arrays-----

/*

int myNumbers[] = {25, 50, 75, 100};
myNumbers[0] = 33;

printf("%d", myNumbers[0]);

// Now outputs 33 instead of 25


// Declare an array of four integers:
int myNumbers[4];

// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;

*/

// -----Array Size-----

/*

int myNumbers[] = {10, 25, 50, 75, 100};

printf("%zu", sizeof(myNumbers));  // Prints 20


double myValues[] = {1.1, 2.2, 3.3};
int length = sizeof(myValues) / sizeof(myValues[0]);

printf("%d", length);  // Prints 3

*/

// -----Array Loop-----

/*

int myNumbers[] = {25, 50, 75, 100};

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i;

for (i = 0; i < length; i++) {
  printf("%d\n", myNumbers[i]);
}

*/

// -----Multidimensional Arrays-----

/*

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
	printf("%d\n", matrix[i][j]);
  }
}


// A 3D array with 2 blocks, each with 4 rows and 3 columns
int example[2][4][3];

*/


#include <stdio.h>

int main() {
	/*
		int myNumbers[] = { 25, 50, 75, 100 };
	myNumbers[0] = 33;
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	printf("%d\n", myNumbers[0]);


	//Get size of the array
	printf("Size of array: %zu\n", sizeof(myNumbers));
	printf("Size of 0: %zu\n", sizeof(myNumbers[0]));
	//Get the number of elements
	printf("Number of elements: %d\n", length);

	for (int i = 0; i < length; i++) {
		printf("%d\n", myNumbers[i]);
	}
	*/

	/*
		int age[] = { 20, 22, 18, 35, 48, 26, 87, 70 };
	float avg, sum = 0;
	int length = sizeof(age) / sizeof(age[0]);

	for (int i = 0; i < length; i++) {
		sum += age[i];
	}

	avg = sum / length;

	printf("The average age is: %.2f\n", avg);

	int agemin = age[0];

	for (int i = 0; i < length; i++) {
		if (age[i] < agemin) {
			agemin = age[i];
		}
	}

	printf("The smallest age is: %d", agemin);
	*/

	/*
		int myNumbers[] = { 3, -1, 7, 0, 9 };
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	for (int i = 0; i < length; i++) {
		if (myNumbers[i] < 0) {
			continue;
		}
		if (myNumbers[i] == 0) {
			break;
		}
		printf("%d\n", myNumbers[i]);
	}
	*/


	int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

	int i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\n", matrix[i][j]);
		}
	}

	return 0;
}