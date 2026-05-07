/*

auto      : Khai bao bien ben trong ham khong quan trong
static    : giu cho gia tri bien khong bi thay doi
register  : luu gia tri vao 1 thanh ghi trong may tinh it dung
extern    : bien hoac ham vua khai bao da duoc khai bao o file khac rui


*/

#include <stdio.h>

// 
void count() {
	static int number = 0; // Giu gia tri giua cac lan goi ham
	number++;
	printf("Number: %d\n", number);
}


//
extern int shared; // Declared here, defined in another file

int main() {

	//
	auto int x = 0; // Giong int x = 0;

	printf("%d\n\n", x);


	//
	count();
	count();
	printf("\n");

	//
	register int counter = 0;
	printf("Counter: %d\n\n", counter);


	//
	printf("shared = %d\n", shared);


	return 0;
}