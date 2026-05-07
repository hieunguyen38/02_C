#include <stdio.h>
#include <stdint.h>

char gradeFunction(double avg) {
	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else if (avg >= 60) return 'D';
	else return 'F';
}


int main() {

	int8_t count;
	double sum = 0, grade;

	do {
		printf("How many grades (1 to 5)?");
		scanf("%hhd", &count);
		if (count < 1 || count > 5) {
			printf("Invalid number. You must enter between 1 to 5 grades.\n");

		}
	} while (count < 1 || count > 5);

	for (int i = 1; i <= count; i++) {
		printf("Enter grade % d: ", i);
		scanf("%lf", &grade);
		sum += grade;
	}

	double avg = sum / count;

	printf("Average: %lf\n", avg);

	printf("Letter grade: %c\n", gradeFunction(avg));


	return 0;
}