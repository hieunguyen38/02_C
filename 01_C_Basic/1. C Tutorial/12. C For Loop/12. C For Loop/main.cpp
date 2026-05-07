// -----For Loop-----

/*

int sum = 0;
int i;

for (i = 1; i <= 5; i++) {
  sum = sum + i;
}

printf("Sum is %d", sum);

*/

// -----Nested Loops-----

/*

int i, j;

for (i = 1; i <= 3; i++) {
  for (j = 1; j <= 3; j++) {
	printf("%d ", i * j);
  }
  printf("\n");
}

*/

#include <stdio.h>

int main() {

	int number = 2;
	int i;

	for (i = 1; i <= 10; i++) {
		printf("%d * %d = %d\n", number, i, number * i);
	}
	return 0;
}