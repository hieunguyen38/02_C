#include <stdio.h>
#include <string.h>

struct car {
	char brand[30];
	int year;
};

void update(struct car* c) {
	c->year = 2025; // Change the year
}

int main() {

	struct car myCar = { "Toyota", 2020 };

	// Declare a pointer to the struct
	struct car* ptr = &myCar;

	update(&myCar); // Pass a pointer so the function can change the year

	printf("Brand: %s\n", ptr->brand); // Use structure pointer
	printf("Year: %d\n", myCar.year);  // Use normal


	return 0;
}