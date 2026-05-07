#include <stdio.h>
#include <stdlib.h>

int main() {
    
    
    int* ptr;
    ptr = malloc(sizeof(*ptr)); // Allocate memory for one integer

    // If memory cannot be allocated, print a message and end the main() function
    if (ptr == NULL) {
        printf("Unable to allocate memory");
        return 1;
    }

    // Set the value of the integer
    *ptr = 20;

    // Print the integer value
    printf("Integer value: %d\n", *ptr);

    // Free allocated memory
    free(ptr);

    // Set the pointer to NULL to prevent it from being accidentally used
    ptr = NULL;

   
    /*
    
    int x = 5;
    int* ptr;
    ptr = calloc(2, sizeof(*ptr));
    ptr = &x; // khong the truy cap lai bo nho cu de giai phong

    int* ptr;
    ptr = malloc(sizeof(*ptr));
    ptr = realloc(ptr, 2 * sizeof(*ptr)); // tuong tu

    */




    return 0;
}