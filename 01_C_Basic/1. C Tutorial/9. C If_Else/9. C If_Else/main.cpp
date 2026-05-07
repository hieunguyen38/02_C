// -----if-----

/*

int x = 20;
int y = 18;

if (x > y) {
	printf("x is greater than y");
	}

*/

// -----else-----

/*

int time = 20;

if (time < 18) {
	printf("Good day\n");
}
else {
	printf("Good evening\n");
}

*/

// -----else if-----

/*

int time = 22;
if (time < 10) {
  printf("Good morning.");
} else if (time < 20) {
  printf("Good day.");
} else {
  printf("Good evening.");
}
// Outputs "Good evening."

*/

// -----Short Hand if_else-----

/*

int time = 20;
(time < 18) ? printf("Good day.") : printf("Good evening.");

*/

// -----Nested if-----

/*

int age = 20;
bool isCitizen = true;

if (age >= 18) {
  printf("Old enough to vote.\n");

  if (isCitizen) {
	printf("And you are a citizen, so you can vote!\n");
  } else {
	printf("But you must be a citizen to vote.\n");
  }
} else {
  printf("Not old enough to vote.\n");
}

*/

// -----Logical Operators-----

#include <stdio.h>
#include <stdbool.h>

int main() {
	int x = 20;
	int y = 18;

	int time = 20;

	if (x > y) {
		printf("x is greater than y\n");
	}

	if (time < 18) {
		printf("Good day\n");
	}
	else {
		printf("Good evening\n");
	}

	if (time < 10) {
		printf("Good morning\n");
	}
	else if (time < 15) {
		printf("Good day\n");
	}
	else {
		printf("Good evening\n");
	}

	(time < 18) ? printf("Good day\n") : printf("Good evening\n");

	int age;
	int citizenInput;
	bool isCitizen;

	//Nhap tui va cong dan
	printf("Tui cua ban: ");
	scanf_s("%d", &age);

	printf("Ban co phai la cong dan khong: ");
	scanf_s("%d", &citizenInput);

	//Check logic
	if (citizenInput == 1) {
		isCitizen = true;
	}
	else {
		isCitizen = false;
	}

	//Check vote
	if (age >= 18) {
		printf("Old enough to vote.\n");
		if (isCitizen) {
			printf("And you are a citizen, so you can vote!\n");
		}
		else {
			printf("But you must be a citizen to vote.\n");
		}
	}
	else {
		printf("Not old enough to vote.\n");
	}

	bool isLoggedIn = true;
	bool isAdmin = false;
	int securityLevel = 3;

	if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
		printf("Access granted\n");
	}
	else {
		printf("Access denied\n");
	}

	// Try changing securityLevel and isAdmin to test different outcomes:
	// securityLevel 1 = Access granted
	// securityLevel 2 = Access granted
	// securityLevel 3 = Access denied
	// securityLevel 4 = Access denied
	// If isAdmin = true, access is granted.
	return 0;
}