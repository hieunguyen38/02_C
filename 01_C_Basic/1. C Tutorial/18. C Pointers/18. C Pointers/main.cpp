// -----Pointers-----

/*

int myAge = 22;
int* ptr = &myAge;

printf("%d\n", myAge);
printf("%d\n", *ptr);
printf("%p\n", &myAge);
printf("%p\n", ptr);

*/

// -----Pointers and Arrays-----

/*

// mang no nhu dia chi nen khong dung 
		c   = 15
		&c  = 12HA....
   int* ptr = &c

        myNumbers[]
	    &myNumbers[0] = myNumbers = 12HA...
             int* ptr = myNumbers (= &myNumbers[0])

int myNumbers[4] = { 25, 50, 75, 100 };
int i;
int* ptr2 = myNumbers;
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

*ptr2 = 18;
*(ptr2 + 2) = 80;

for (i = 0; i < length; i++) {
	printf("%d %p\n", myNumbers[i], &myNumbers[i]);
}
printf("\n");
for (i = 0; i < length; i++) {
	printf("%d %p\n", *(ptr2 + i), ptr2 + i);
}
printf("\n");
for (i = 0; i < length; i++) {
	printf("%d %p\n", *(myNumbers + i), myNumbers + i);
}

*/

// -----Pointer Arithmetic-----

/*

for (i = 0; i < length; i++) {
	printf("%d\n", *ptr2);
	ptr2++;
}
printf("\n");

ptr2 = myNumbers;
//
printf("%d\n", *ptr2);
printf("%d\n", *(ptr2 + 1));
printf("%d\n", *(ptr2 + 2));
printf("%d\n\n", *(ptr2 + 3));

printf("%d\n", *ptr2); // 10
ptr2++;           // move to myNumbers[1]
printf("%d\n", *ptr2); // 50
ptr2--;           // back to myNumbers[0]
printf("%d\n", *ptr2); // 18

ptr2 += 2;        // jump to myNumbers[2]
printf("%d\n\n", *ptr2); // 80

int* start = &myNumbers[0];
int* end = &myNumbers[3];

int distance = end - start;
printf("Distance: %ld\n\n", distance);

int myNumber[2] = { 1, 2 };
char letters[] = "Hi"; // 'H', 'i', '\0'

int* pi = myNumber; // int pointer
char* pc = letters; // char pointer

printf("%p\n", (void*)pi);
printf("%p\n", (void*)(pi + 1)); // moves by sizeof(int) (4 bytes)
printf("%p\n", (void*)(pi + 2)); // moves by sizeof(int) (4 bytes)

printf("%p\n", (void*)pc);
printf("%p\n", (void*)(pc + 1)); // moves by 1 byte

*/

// -----Pointer to Pointer-----

/*



*/


#include <stdio.h>
#include <string.h>

int main() {

	int myAge = 22;
	int* ptr = &myAge;
	char name;

	printf("%d\n", myAge);     // Get value myAge
	printf("%d\n", *ptr);      // Get value myAge with pointer
	printf("%p\n", &myAge);    // Get address myAge
	printf("%p\n\n", ptr);       // Get address myAge with pointer
	
	//
	int myNumbers[4] = { 25, 50, 75, 100 };
	int i;
	int* ptr2 = myNumbers;
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

	*ptr2 = 18;
	*(ptr2 + 2) = 80;

	for (i = 0; i < length; i++) {
		printf("%d %p\n", myNumbers[i], &myNumbers[i]);
	}
	printf("\n");
	for (i = 0; i < length; i++) {
		printf("%d %p\n", *(ptr2 + i), ptr2 + i); // ptr2 luc nay chi thay doi gia tri tam thoi (chu khong phai phep gan)
	}
	printf("\n");
	for (i = 0; i < length; i++) {
		printf("%d %p\n", *(myNumbers + i), myNumbers + i);
	}
	printf("\n");

	for (i = 0; i < length; i++) {
		printf("%d\n", *ptr2);
		ptr2++; // ptr2 nay la gan gia tri dia chi moi lun roi nen muon dung lai thi phai reset
	}
	printf("\n");

	ptr2 = myNumbers; // reset
	//
	printf("%d\n", *ptr2);
	printf("%d\n", *(ptr2 + 1));
	printf("%d\n", *(ptr2 + 2));
	printf("%d\n\n", *(ptr2 + 3));

	printf("%d\n", *ptr2); // 10
	ptr2++;           // move to myNumbers[1]
	printf("%d\n", *ptr2); // 50
	ptr2--;           // back to myNumbers[0]
	printf("%d\n", *ptr2); // 18

	ptr2 += 2;        // jump to myNumbers[2]
	printf("%d\n\n", *ptr2); // 80

	int* start = &myNumbers[0];
	int* end = &myNumbers[3];

	int distance = end - start;
	printf("Distance: %ld\n\n", distance);

	int myNumber[2] = { 1, 2 };
	char letters[] = "Hi"; // 'H', 'i', '\0'

	int* pi = myNumber; // int pointer
	char* pc = letters; // char pointer

	printf("%p\n", (void*)pi);
	printf("%p\n", (void*)(pi + 1)); // moves by sizeof(int) (4 bytes)
	printf("%p\n", (void*)(pi + 2)); // moves by sizeof(int) (4 bytes)

	printf("%p\n", (void*)pc);
	printf("%p\n\n\n", (void*)(pc + 1)); // moves by 1 byte

	//
	int myNum = 10;
	int* ptr3 = &myNum;
	int** pptr3 = &ptr3;

	**pptr3 = 20;
	
	printf("myNum = %d\n", myNum);
	printf("*ptr3 = %d\n", *ptr3);
	printf("**pptr3 = %d", **pptr3);

	return 0;
}