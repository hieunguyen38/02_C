#include <stdio.h>
#include <stdlib.h>


int main() {

	// Allocate memory
	int* ptr;
	ptr = calloc(4, sizeof(*ptr));

	// Thêm đoạn kiểm tra này:
	if (ptr == NULL) {
		printf("Khong the cap phat bo nho!");
		return 1; // Thoát chương trình nếu lỗi
	}
	// Write to the memory
	*ptr = 2;
	ptr[1] = 4;
	ptr[2] = 6;

	// Read from the memory
	printf("%d\n", *ptr);
	printf("%d %d %d\n", ptr[1], ptr[2], ptr[3]);

	int* ptr1 = malloc(4); // ptr1 nhin vao dia chi do duoi dang int
	char* ptr2 = (char*) ptr1; // ptr2 nhin vao dia chi do duoi dang char 

	// Thêm đoạn kiểm tra này:
	if (ptr1 == NULL) {
		printf("Khong the cap phat bo nho!");
		return 1; // Thoát chương trình nếu lỗi
	}

	if (ptr2 == NULL) {
		printf("Khong the cap phat bo nho!");
		return 1; // Thoát chương trình nếu lỗi
	}

	ptr1[0] = 1684234849;
	printf("1684234849 is: %c %c %c %c", ptr2[0], ptr2[1], ptr2[2], ptr2[3]);

}

