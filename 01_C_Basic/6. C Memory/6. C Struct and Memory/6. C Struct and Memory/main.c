#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char brand[30];
	int year;
}Car;

int main() {

	int count = 2;

	Car* cars = (Car*)malloc(count * sizeof(Car));
	
	if (cars == NULL) {
		printf("Initial allocation failed.\n");
		return 1;
	}

	strcpy(cars[0].brand, "Toyota"); cars[0].year = 2010;
	strcpy(cars[1].brand, "Audi");   cars[1].year = 2019;

	int newCount = 3;

	Car* tmp = (Car*)realloc(cars, newCount * sizeof(Car));

	if (tmp == NULL) {
		free(cars);
		cars = NULL;
		printf("Reallocation failed.\n");
		return 1;
	}
	
	cars = tmp;

	strcpy(cars[2].brand, "Kia"); cars[2].year = 2022;

	for (int i = 0; i < newCount; i++) {
		printf("%s - %d\n", cars[i].brand, cars[i].year);
	}

	free(cars);
	cars = NULL;

	return 0;
}