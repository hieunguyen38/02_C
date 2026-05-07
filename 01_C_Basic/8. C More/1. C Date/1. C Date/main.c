#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	
	// Cach 1
	time_t currentTime;
	time(&currentTime); // Get the current time 

	printf("Current time: %s\n\n", ctime(&currentTime));  // ctime(): (Vd: Mon Jun 24 10:15:00 2025)


	// Cach 2
	time_t now = time(NULL); // Get the current time 

	struct tm* t = localtime(&now); // Convert to local time structure

	printf("Year: %d\n", t->tm_year + 1900); // Because tm_year store value from 1900 to current, so we have to add 1900 to get the actual year
	printf("Month: %d\n", t->tm_mon + 1);    // Because tm_mon store from 0;
	printf("Day: %d\n", t->tm_mday);
	printf("Hour: %d\n", t->tm_hour);
	printf("Minute: %d\n", t->tm_min);
	printf("Second: %d\n\n", t->tm_sec);


	// Cach 3
	char buffer[100];

	// Định dạng thời gian và lưu vào biến 'buffer'
    // %d: ngày, %m: tháng, %Y: năm, %H: giờ, %M: phút, %S: giây
	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", t);

	printf("%s", buffer);

	return 0;
}