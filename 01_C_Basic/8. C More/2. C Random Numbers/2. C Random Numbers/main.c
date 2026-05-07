#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	//
	int r = rand(); // Number random alway no change
	printf("%d\n\n", r);

	//
	srand(time(NULL)); // 1 dong duy nhat khong de vao loop

	printf("%d\n", rand());
	printf("%d\n\n", rand());

	//
	int x = rand() % 10; // 0 -> 9
	printf("%d\n\n", x);

	//
	int dice1 = (rand() % 6) + 1; // Suc xac tu 1 - 6
	int dice2 = (rand() % 6) + 1;
	 
	printf("You rolled %d and %d (total = %d)", dice1, dice2, dice1 + dice2);


	return 0;
}