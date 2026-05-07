#include <stdio.h>

// Without typedef
enum Level {
	LOW = 1,
	MEDIUM,// 2 (Tu cong them)
	HIGH   // 3, Khong phay
};

//With typedef
typedef enum {
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT,
	SUN
}Day;

int main() {

	// Without typedef and switch
	enum Level myVar = MEDIUM;

	switch (myVar) {
	case 1:
		printf("Low Level\n\n");
		break;
	case 2:
		printf("Medium Level\n\n");
		break;
	case 3:
		printf("High Level\n\n");
		break;
	}

	// With typedef 
	Day today = WED;

	if (today == WED) {
		printf("Today: Wednesday\n");
	}
	
	return 0;
}

