#include <stdio.h>
#include <string.h>

typedef struct {
	char firstName[30];
	char lastName[30];
}Owner;

typedef struct {
	char brand[30];
	int year;
	Owner owner;
}Car;

typedef struct {
	char name[30];
	Car featuredCar;
}Dealership;

int main() {

	Owner person = { "Hieu", "Nguyen" };
	Car car1 = { "Toyota", 2010, person };
	Dealership d = { "City Motors", car1 };

	printf("Dealership: %s\n", d.name);

	// Cung dc ma khong nen
	printf("Featured Car: %s (%d), owned by %s %s\n\n", car1.brand, car1.year, car1.owner.firstName, car1.owner.lastName);

	// Nen code
	printf("Featured Car: %s (%d), owned by %s %s\n", d.featuredCar.brand, d.featuredCar.year, d.featuredCar.owner.firstName, d.featuredCar.owner.lastName);


	return 0;
}