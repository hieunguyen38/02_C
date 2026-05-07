#include <stdio.h>
#include <stdint.h>

typedef enum {
	SUCCESS,
	NOT_FOUND,
	ERROR,
}RETURN_STATUS;

// Cach dung Enum clear hon va de lam teamwork

RETURN_STATUS CheckIC(uint8_t check) {
	RETURN_STATUS result;
	if (check == 0) {
		result = SUCCESS;
		printf("SUCCESS\n");
	}
	else if (check == 1) {
		result = NOT_FOUND;
		printf("NOT FOUND\n");
	}
	else {
		result = ERROR;
		printf("ERROR\n");
	}
	return result;
}


// 1 Success
// 0 Error
// Cach nay khong clear 
//int checkIC() {
//	int check = 0;
//	if (1) {
//		check = 1;
//		printf("SUCCESS\n");
//	}
//	return check;
//}

int main() {

	uint8_t CHECK = 2;
	/*CheckIC(CHECK);*/
	RETURN_STATUS ket_qua = CheckIC(CHECK);

	return 0;
}