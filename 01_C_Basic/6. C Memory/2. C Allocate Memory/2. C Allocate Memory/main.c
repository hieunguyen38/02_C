//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	//Static Memory
//	int student[20];
//
//	printf("%zu\n", sizeof(student));
//
//	// Dynamic Memory
//	int* students;
//	int numStudents = 12;
//
//	// xin cap phat du lieu bo nho dong
// 
//	students = calloc(numStudents, sizeof(*students));    // calloc la reset 0  malloc la du lieu rac
//  //int *ptr1, *ptr2;
    //ptr1 = (int *)malloc(sizeof(*ptr1)); //ep kieu cho no truoc cung dc
    //ptr2 = (int *)calloc(1, sizeof(*ptr2));
//
//	printf("%zu\n", numStudents * sizeof(*student));
//}


#include <stdio.h>
#include <stdlib.h> // Thư viện bắt buộc để dùng malloc/free

// 1. BỘ NHỚ STATIC (TĨNH)
// Biến toàn cục nằm ở vùng nhớ Static, tồn tại suốt vòng đời chương trình.
int globalVar = 100;

void demoMemory() {
    // 2. BỘ NHỚ STACK (NGĂN XẾP)
    // Biến cục bộ 'stackVar' nằm ở Stack. 
    // Nó sẽ bị xóa sạch khỏi bộ nhớ ngay khi hàm demoMemory() kết thúc.
    int stackVar = 10;

    // 3. BỘ NHỚ HEAP (ĐỐNG)
    // Dùng con trỏ để xin cấp phát bộ nhớ động trên Heap.
    // Hàm malloc trả về địa chỉ vùng nhớ trên Heap, con trỏ 'heapPtr' lưu địa chỉ đó.
    int* heapPtr = (int*)malloc(sizeof(int));

    // Kiểm tra nếu cấp phát thành công
    if (heapPtr != NULL) {
        *heapPtr = 50; // Gán giá trị vào vùng nhớ trên Heap

        printf("--- Trong hàm demoMemory ---\n");
        printf("Giá trị Static (Toàn cục): %d\n", globalVar);
        printf("Giá trị Stack (Cục bộ): %d\n", stackVar);
        printf("Giá trị Heap (Động): %d\n", *heapPtr);

        // BẮT BUỘC: Giải phóng bộ nhớ Heap sau khi dùng xong để tránh rò rỉ.
        free(heapPtr);
        printf("(Đã giải phóng bộ nhớ Heap)\n");
    }
} // <--- Tại đây, 'stackVar' bị xóa tự động, nhưng 'globalVar' vẫn còn.

int main() {
    demoMemory();

    printf("\n--- Sau khi thoát hàm demoMemory ---\n");
    printf("Giá trị Static vẫn tồn tại: %d\n", globalVar);
    // printf("%d", stackVar); // LỖI: Không thể truy cập vì stackVar đã bị xóa.
    // printf("%d", *heapPtr); // LỖI: Không thể truy cập vì bộ nhớ đã bị giải phóng.

    return 0;
}