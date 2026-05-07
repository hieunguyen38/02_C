#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE* f = fopen("nothing.txt", "r");

    if (f == NULL) {
        if (errno == ENOENT) {
            printf("The file was not found.\n");
            //exit(1);
            //exit(EXIT_FAILURE); // More readable than exit(1
        }
        else {
            printf("Some other file error occurred.\n");
        }

        perror("Error opening file"); // Get more details
        printf("\n");
        printf("Error: %s\n", strerror(errno));
        return 1;
    }

    fclose(f);
    return 0;
}