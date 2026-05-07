// -----While Loop-----

/*

int countdown = 3;

while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Happy New Year!!\n");

int i = 10;

while (i < 5) {
  printf("This will never be printed\n");
  i++;
}

*/

// ----- Do/While Loop-----

/*

int number;

do {
  printf("Enter a positive number: ");
  scanf("%d", &number);
} while (number > 0);

*/

// -----Real_Life Example-----

/*

// A variable with some specific numbers
int numbers = 12345;

// A variable to store the reversed number
int revNumbers = 0;

// Reverse and reorder the numbers
while (numbers) {
  // Get the last number of 'numbers' and add it to 'revNumber'
  revNumbers = revNumbers * 10 + numbers % 10;
  // Remove the last number of 'numbers'
  numbers /= 10;
}

*/
#include <stdio.h>

int main() {
		int countdown = 3;

		while (countdown > 0) {
			printf("%d\n", countdown);
			countdown--;
		}
		printf("Happy New Year\n");

		int number;

		do {
			printf("Enter a positive number: ");
			scanf_s("%d", &number);
		} while (number > 0);

	return 0;
}