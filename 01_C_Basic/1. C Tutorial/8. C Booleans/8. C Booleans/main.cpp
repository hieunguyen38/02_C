#include <stdio.h>
#include <stdbool.h>

int main() {

	//Create boolean variables
	bool isProgrammingFun = true;
	bool isFishTasty = false;

	int x = 10, y = 9;

	bool isHamburgerTasty = true;
	bool isPizzaTasty = true;

	//Return boolean values
	printf("%d", isProgrammingFun);
	printf("%d", isFishTasty);

	printf("%d", x > y);
	
	printf("%d", 10 == 10);

	printf("%d", isHamburgerTasty == isPizzaTasty);

	int myAge = 25;
	int votingAge = 18;

	if (myAge >= votingAge) {
		printf("Old enough to vote!");
	}
	else {
		printf("Not old enough to vote");
	}

	return 0;
}