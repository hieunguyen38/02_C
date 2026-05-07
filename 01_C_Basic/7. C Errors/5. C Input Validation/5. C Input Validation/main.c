
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int number; // Variable to store the user's number

	do {
		printf("Choose a number between 1 and 5: ");
		scanf_s("%d", &number);
		while (getchar() != '\n'); // Clear leftover characters from input buffer
	} while (number < 1 || number > 5); // Keep asking until number is between 1 and 5

	printf("You choose: %d\n", number); // Print the valid number


	//
	char name[100];  // Buffer to store the user's name

	do {
		printf("Enter your name: ");
		fgets(name, sizeof(name), stdin); // Read input as a string
		name[strcspn(name, "\n")] = 0; // Remove the newline character if present
	} while (strlen(name) == 0); // Repeat if the input is empty

	printf("Hello, %s\n", name); // Greet the user


	//
	int numbers = 0;       // Variable to store the user's number
	char input1[100];  // Buffer to hold user input as a string

	printf("Enter a number: ");

	// Keep reading input until the user enters a valid integer
	while (fgets(input1, sizeof(input1), stdin)) {
		char term;

		// ĐIỀU KIỆN GỘP:
		// 1. sscanf phải đọc được 2 phần (số và ký tự sau nó)
		// 2. VÀ ký tự sau nó (term) bắt buộc phải là dấu xuống dòng '\n'
		if (sscanf(input1, "%d%c", &numbers, &term) == 2 && term == '\n') {
			break; // Nhập đúng số nguyên sạch sẽ -> Thoát vòng lặp
		}
		else {
			// Bất kể là nhập chữ, nhập 3.5, hay nhập rác -> Báo lỗi ngay
			printf("Invalid input. Try again: ");
		}
	}

	// Print the valid number entered by the user
	printf("You entered: %d\n", numbers);

	return 0;
}