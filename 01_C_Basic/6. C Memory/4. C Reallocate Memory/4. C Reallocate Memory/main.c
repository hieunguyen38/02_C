//



#include <stdio.h>
#include <stdlib.h>

/*

int main() {
    // Bước 1: Cấp phát một lượng nhỏ (ví dụ 8 byte)
    int* ptr1 = malloc(8);
    if (ptr1 == NULL) return 1;
    printf("Dia chi ban dau (ptr1): %p\n", (void*)ptr1);

    // Bước 2: realloc thêm một chút (ví dụ lên 16 byte)
    // Dung luong tang it thi ti le "noi rong tai cho" se cao hon
    int* ptr2 = realloc(ptr1, 16);

    if (ptr2 == NULL) {
        free(ptr1);
        return 1;
    }

    printf("Dia chi sau realloc (ptr2): %p\n", (void*)ptr2);

    if (ptr1 == ptr2) {
        printf("=> KET QUA: Noi rong tai cho thanh cong (Giu nguyen dia chi)!\n");
    }
    else {
        printf("=> KET QUA: Phai chuyen sang dia chi moi.\n");
    }

    free(ptr2);
    return 0;
}

*/

int main() {

    int* ptr1, * ptr2, size1, size2;

    size1 = 4 * sizeof(*ptr1);

    ptr1 = malloc(size1);

    if (ptr1 == NULL) {
        printf("Failed. Unable to allocate memory\n");
    }
    else {
        printf("Success. %d bytes allocated at address %p\n", size1, ptr1);
    }

    size2 = 6 * sizeof(*ptr1);

    ptr2 = realloc(ptr1, 6 * sizeof(*ptr1));

    if (ptr2 == NULL) {
        printf("Failed. Unable to reallocate memory\n");
    }
    else {
        printf("Success. %d bytes reallocated at address %p\n", size2, ptr2);
    }

    ptr1 = ptr2;

    printf("Address of ptr1: %p", ptr1);

    free(ptr1);


    return 0;
}