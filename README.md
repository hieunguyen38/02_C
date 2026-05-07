# 🚀 TỔNG HỢP KIẾN THỨC LẬP TRÌNH C BASIC & C EMBEDDED TOÀN DIỆN

> 📌 **Tài liệu học tập và ôn tập chuyên sâu dành cho Lập trình viên Nhúng (Embedded Software Engineer)**
> 🌟 Được tổng hợp đầy đủ từ khóa học **C Basic (W3Schools)** và tài liệu chuyên sâu **C Embedded** kèm các bài tập trắc nghiệm thực tế cuối khóa.

---

## 📑 MỤC LỤC CHI TIẾT

```
========================================================================================
| PHẦN | CHƯƠNG     | NỘI DUNG KIẾN THỨC CHI TIẾT                                      |
========================================================================================
| I    | CHƯƠNG 01  | GIỚI THIỆU & THIẾT LẬP MÔI TRƯỜNG LẬP TRÌNH C                     |
|      | CHƯƠNG 02  | CÚ PHÁP CƠ BẢN, BIẾN & KIỂU DỮ LIỆU                              |
|      | CHƯƠNG 03  | TOÁN TỬ, HẰNG SỐ & NHẬP XUẤT DỮ LIỆU (USER INPUT)                |
|      | CHƯƠNG 04  | CẤU TRÚC ĐIỀU KHIỂN & RA QUYẾT ĐỊNH (IF-ELSE, SWITCH-CASE)       |
|      | CHƯƠNG 05  | VÒNG LẶP & ĐIỀU KHIỂN LUỒNG (FOR, WHILE, DO-WHILE, BREAK, CONT)  |
|      | CHƯƠNG 06  | MẢNG (ARRAY) & CHUỖI KÝ TỰ (STRING)                              |
|      | CHƯƠNG 07  | HÀM (FUNCTION) & ĐỆ QUY (RECURSION)                              |
|      | CHƯƠNG 08  | CẤU TRÚC (STRUCT) & KIỂU LIỆT KÊ (ENUM) CƠ BẢN                   |
|      | CHƯƠNG 09  | XỬ LÝ TỆP TIN TRONG C (FILE HANDLING)                            |
|------|------------|------------------------------------------------------------------|
| II   | CHƯƠNG 10  | CON TRỎ TOÀN TẬP (NORMAL, VOID, FUNCTION POINTER & ARITHMETIC)   |
|      | CHƯƠNG 11  | THAO TÁC BIT CHUYÊN SÂU TRONG NHÚNG (BITWISE, SET/CLR/CHK BIT)   |
|      | CHƯƠNG 12  | TIỀN XỬ LÝ & MACRO (PREPROCESSOR DIRECTIVES, HEADER GUARDS)       |
|      | CHƯƠNG 13  | STRUCT ALIGNMENT & STRUCT PACKING (#PRAGMA PACK)                  |
|      | CHƯƠNG 14  | UNION TRONG NHÚNG & ỨNG DỤNG TRUY CẬP THANH GHI (REGISTER)       |
|      | CHƯƠNG 15  | PHÂN BIỆT BIẾN TĨNH (STATIC) & BIẾN TOÀN CỤC (EXTERN)             |
|      | CHƯƠNG 16  | VOLATILE TOÀN TẬP: NGĂN TỐI ƯU HÓA & KHÔNG GIAN NGẮT (ISR)       |
|      | CHƯƠNG 17  | CONST & WEAK: TỐI ƯU HÓA FLASH/RAM & CƠ CHẾ CALLBACK              |
|      | CHƯƠNG 18  | TỔ CHỨC BỘ NHỚ MCU (MEMORY LAYOUT: FLASH, SRAM, STACK, HEAP)     |
|      | CHƯƠNG 19  | CHỐNG DỘI NÚT NHẤN (DEBOUNCE) & BẬT/TẮT DEBUG LOG THỰC TẾ         |
|------|------------|------------------------------------------------------------------|
| III  | BÀI THI    | ĐÁP ÁN & PHÂN TÍCH LOGIC CHI TIẾT 10 CÂU TRẮC NGHIỆM CUỐI KHÓA    |
========================================================================================
```

---

# PHẦN I: C BASIC (KIẾN THỨC CƠ BẢN)

<details>
<summary><b>Chương 01: Giới thiệu & Thiết lập môi trường lập trình C</b></summary>

### 1. Ngôn ngữ lập trình C là gì?
- Được phát triển bởi **Dennis Ritchie** tại Bell Labs vào năm 1972.
- Là ngôn ngữ **biên dịch (compiled)**, mã nguồn `.c` cần được dịch qua Compiler (GCC, MSVC, Clang) thành mã máy `.exe` hoặc `.hex` mới có thể thực thi.
- C là ngôn ngữ trung gian (mid-level language), vừa có khả năng can thiệp trực tiếp vào phần cứng (thông qua pointer, memory mapping), vừa giữ cấu trúc tường minh của ngôn ngữ bậc cao. Do đó, **C là ngôn ngữ "vua" trong lập trình nhúng (Embedded)**.

### 2. Thiết lập môi trường
- **Học tập cơ bản:** Có thể sử dụng Visual Studio (màu tím), VS Code kết hợp bộ dịch MinGW (GCC), hoặc các IDE nhẹ như Dev-C++, Code::Blocks.
- **Lập trình nhúng:** Sử dụng các IDE chuyên dụng của hãng chip như STM32CubeIDE (cho STM32), Keil C (cho 8051, ARM), Espressif IDF/VS Code (cho ESP32), Arduino IDE.
</details>

<details>
<summary><b>Chương 02: Cú pháp cơ bản, Biến & Kiểu dữ liệu</b></summary>

### 1. Cấu trúc chương trình C đơn giản
```c
#include <stdio.h> // Thư viện nhập xuất chuẩn

int main() {
    printf("Hello World!\n"); // In ra màn hình
    return 0; // Trả về 0 báo hiệu chương trình chạy thành công
}
```

### 2. Biến (Variables)
Biến là vùng nhớ được đặt tên để lưu trữ giá trị trong chương trình.
- **Cú pháp:** `kieu_du_lieu ten_bien = gia_tri;`
- **Quy tắc đặt tên:** Không chứa khoảng trắng, không bắt đầu bằng số, không dùng ký tự đặc biệt (trừ dấu gạch dưới `_`), không trùng từ khóa của hệ thống.

### 3. Kiểu dữ liệu cơ bản trong C
Kích thước của kiểu dữ liệu phụ thuộc vào kiến trúc compiler/CPU (ví dụ: 8-bit, 16-bit, 32-bit, 64-bit). Bảng dưới đây mô tả kích thước phổ biến trên hệ thống **32-bit / 64-bit**:

| Kiểu dữ liệu | Ý nghĩa | Kích thước (Bytes) | Định dạng (`printf`) | Khoảng giá trị |
|:---|:---|:---:|:---:|:---|
| `char` | Ký tự hoặc số nguyên nhỏ | 1 byte | `%c` hoặc `%d` | `-128` đến `127` |
| `unsigned char` | Số nguyên không dấu nhỏ | 1 byte | `%u` | `0` đến `255` |
| `int` | Số nguyên | 4 bytes | `%d` hoặc `%i` | `-2,147,483,648` đến `2,147,483,647` |
| `unsigned int`| Số nguyên không dấu | 4 bytes | `%u` | `0` đến `4,294,967,295` |
| `short` | Số nguyên ngắn | 2 bytes | `%hd` | `-32,768` đến `32,767` |
| `long` | Số nguyên dài | 4 bytes | `%ld` | `-2,147,483,648` đến `2,147,483,647` |
| `long long` | Số nguyên cực dài | 8 bytes | `%lld` | `-9x10^18` đến `9x10^18` |
| `float` | Số thực độ chính xác đơn | 4 bytes | `%f` | 6 chữ số thập phân |
| `double` | Số thực độ chính xác kép | 8 bytes | `%lf` | 15 chữ số thập phân |

</details>

<details>
<summary><b>Chương 03: Toán tử, Hằng số & Nhập xuất dữ liệu (User Input)</b></summary>

### 1. Các toán tử (Operators)
- **Toán tử số học:** `+`, `-`, `*`, `/` (chia lấy nguyên), `%` (chia lấy dư), `++` (tăng 1), `--` (giảm 1).
  > 📌 **Phân biệt `i++` (Post-increment) và `++i` (Pre-increment):**
  > - `i++`: Trả về giá trị hiện tại của `i` trong biểu thức trước, sau đó mới cộng `i` lên 1.
  > - `++i`: Cộng `i` lên 1 trước, sau đó trả về giá trị mới của `i` để thực thi biểu thức.
- **Toán tử so sánh:** `==`, `!=`, `>`, `<`, `>=`, `<=`.
- **Toán tử logic:** `&&` (VÀ), `||` (HOẶC), `!` (PHỦ ĐỊNH).
- **Toán tử gán:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`.

### 2. Hằng số (Constants)
Sử dụng hằng số để ngăn chặn việc sửa đổi giá trị trong suốt vòng đời chương trình.
- **Cách 1 (Sử dụng từ khóa `const`):** `const float PI = 3.14159;`
- **Cách 2 (Sử dụng tiền xử lý `#define`):** `#define PI 3.14159`

### 3. Nhập xuất dữ liệu (User Input)
Sử dụng hàm `scanf()` từ thư viện `<stdio.h>` để nhận dữ liệu đầu vào từ bàn phím.
```c
int age;
printf("Nhập tuổi của bạn: ");
scanf("%d", &age); // Cần truyền địa chỉ của biến (&age)
printf("Tuổi của bạn là: %d\n", age);
```
</details>

<details>
<summary><b>Chương 04: Cấu trúc điều khiển & Ra quyết định (if-else, switch-case)</b></summary>

### 1. Cấu trúc `if...else if...else`
Giúp rẽ nhánh chương trình dựa trên các điều kiện kiểm tra.
```c
int score = 85;
if (score >= 90) {
    printf("Xuất sắc\n");
} else if (score >= 80) {
    printf("Khá/Giỏi\n");
} else {
    printf("Trung bình\n");
}
```

### 2. Cấu trúc `switch...case`
Sử dụng khi có nhiều điều kiện so sánh bằng trên cùng một biến số nguyên hoặc ký tự (`char`, `int`, `enum`).
```c
int day = 3;
switch (day) {
    case 1:
        printf("Chủ nhật\n");
        break; // Thoát khỏi cấu trúc switch
    case 2:
        printf("Thứ hai\n");
        break;
    case 3:
        printf("Thứ ba\n");
        break;
    default:
        printf("Ngày không hợp lệ!\n");
}
```
> [!IMPORTANT]
> Luôn sử dụng từ khóa `break` ở cuối mỗi nhánh `case`. Nếu thiếu `break`, chương trình sẽ tiếp tục chạy rớt xuống các case bên dưới (hiện tượng **Fall-through**).

### 3. Toán tử ba ngôi (Ternary Operator)
Là viết tắt của `if-else`: `biểu_thức_điều_kiện ? giá_trị_nếu_đúng : giá_trị_nếu_sai;`
```c
int age = 20;
const char* status = (age >= 18) ? "Đã trưởng thành" : "Trẻ em";
```
</details>

<details>
<summary><b>Chương 05: Vòng lặp & Điều khiển luồng (for, while, do-while, break, continue)</b></summary>

Vòng lặp giúp lặp đi lặp lại một khối lệnh nhiều lần.

### 1. Vòng lặp `for`
Thường dùng khi biết trước số lần lặp.
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", i); // In ra: 0 1 2 3 4
}
```

### 2. Vòng lặp `while`
Kiểm tra điều kiện **trước** khi thực hiện khối lệnh. Lặp cho đến khi điều kiện sai.
```c
int i = 0;
while (i < 5) {
    printf("%d ", i++);
}
```

### 3. Vòng lặp `do-while`
Thực hiện khối lệnh **ít nhất 1 lần**, sau đó mới kiểm tra điều kiện để lặp tiếp.
```c
int i = 10;
do {
    printf("Chạy ít nhất 1 lần!\n");
} while (i < 5);
```

### 4. `break` và `continue`
- `break`: Thoát hoàn toàn khỏi vòng lặp chứa nó ngay lập tức.
- `continue`: Bỏ qua các câu lệnh phía sau trong lần lặp hiện tại để chuyển ngay sang lần lặp tiếp theo.
</details>

<details>
<summary><b>Chương 06: Mảng (Array) & Chuỗi ký tự (String)</b></summary>

### 1. Mảng (Array)
Mảng là một tập hợp các phần tử có **cùng kiểu dữ liệu**, được lưu trữ ở các ô nhớ **liên tiếp nhau** trong bộ nhớ.
- **Khai báo:** `kieu_du_lieu ten_mang[kich_thuoc];`
- **Truy cập phần tử:** Chỉ số mảng bắt đầu từ `0` đến `kich_thuoc - 1`.
```c
int numbers[5] = {10, 20, 30, 40, 50};
printf("Phần tử đầu tiên: %d\n", numbers[0]); // 10
numbers[2] = 99; // Thay đổi phần tử thứ 3 thành 99
```

### 2. Chuỗi ký tự (String)
Trong C, không có kiểu dữ liệu `string` riêng biệt. Chuỗi thực chất là **mảng một chiều các ký tự `char`**, kết thúc bằng ký tự đặc biệt `'\0'` (Null terminator).
```c
char name[] = "Hello"; // Thực chất mảng có kích thước là 6 kí tự: 'H', 'e', 'l', 'l', 'o', '\0'
printf("%s\n", name);
```
- Các hàm xử lý chuỗi phổ biến trong `<string.h>`:
  - `strlen(str)`: Lấy độ dài chuỗi (không tính `'\0'`).
  - `strcpy(dest, src)`: Sao chép chuỗi.
  - `strcmp(str1, str2)`: So sánh hai chuỗi (trả về 0 nếu bằng nhau).
</details>

<details>
<summary><b>Chương 07: Hàm (Function) & Đệ quy (Recursion)</b></summary>

### 1. Hàm (Function)
Hàm là một khối lệnh thực hiện một nhiệm vụ cụ thể, giúp tái sử dụng mã nguồn và quản lý code dễ dàng hơn.
```c
// Khai báo nguyên mẫu hàm (Prototype)
int add(int a, int b);

int main() {
    int sum = add(5, 7); // Gọi hàm
    printf("Tổng: %d\n", sum);
    return 0;
}

// Định nghĩa hàm
int add(int a, int b) {
    return a + b;
}
```

### 2. Truyền tham trị (Pass by Value) và Truyền tham chiếu (Pass by Reference)
- **Truyền tham trị:** Tạo bản sao của biến truyền vào hàm. Mọi thay đổi bên trong hàm không ảnh hưởng đến biến gốc ngoài hàm.
- **Truyền tham chiếu:** Truyền địa chỉ của biến (sử dụng con trỏ). Thay đổi bên trong hàm sẽ tác động trực tiếp lên biến gốc bên ngoài.

### 3. Đệ quy (Recursion)
Hàm tự gọi lại chính nó. Cần có **điều kiện dừng** rõ ràng để tránh tràn bộ nhớ Stack (Stack Overflow).
```c
// Ví dụ: Tính giai thừa n!
int factorial(int n) {
    if (n <= 1) return 1; // Điều kiện dừng
    return n * factorial(n - 1); // Bước đệ quy
}
```
</details>

<details>
<summary><b>Chương 08: Cấu trúc (Struct) & Kiểu liệt kê (Enum) cơ bản</b></summary>

### 1. Cấu trúc (Struct)
Gộp nhiều biến có kiểu dữ liệu khác nhau lại thành một kiểu dữ liệu mới do người dùng tự định nghĩa.
```c
struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student s1 = {"Nguyễn Văn A", 20, 3.8};
    printf("Sinh viên: %s, GPA: %.1f\n", s1.name, s1.gpa);
    return 0;
}
```

### 2. Kiểu liệt kê (Enum)
Định nghĩa một tập hợp các hằng số nguyên có tên đại diện trực quan hơn.
```c
enum State {
    DISCONNECTED, // Mặc định là 0
    CONNECTED,    // 1
    ERROR_STATE   // 2
};
```
</details>

<details>
<summary><b>Chương 09: Xử lý tệp tin trong C (File Handling)</b></summary>

Sử dụng thư viện `<stdio.h>` với đối tượng `FILE` để đọc/ghi tệp tin.
- **Các hàm chính:**
  - `fopen("path", "mode")`: Mở file. Các mode gồm: `"r"` (đọc), `"w"` (ghi đè), `"a"` (ghi tiếp vào cuối).
  - `fprintf()`, `fputs()`: Ghi dữ liệu vào file.
  - `fscanf()`, `fgets()`: Đọc dữ liệu từ file.
  - `fclose()`: Đóng file để giải phóng tài nguyên.

```c
// Ví dụ ghi file
FILE *fptr = fopen("test.txt", "w");
if (fptr != NULL) {
    fprintf(fptr, "Lập trình C cơ bản\n");
    fclose(fptr);
}
```
</details>

---

# PHẦN II: C EMBEDDED (LẬP TRÌNH NHÚNG CHUYÊN SÂU)

<details>
<summary><b>Chương 10: Con trỏ toàn tập (Pointers, Void Pointer, Function Pointer & Arithmetic)</b></summary>

Con trỏ là linh hồn của lập trình C và là công cụ can thiệp trực tiếp vào phần cứng cực kỳ mạnh mẽ trong hệ thống nhúng.

### 1. Tại sao con trỏ cực kỳ quan trọng trong Nhúng (Embedded)?
- **RAM/ROM hạn chế:** Các vi điều khiển (MCU) có tài nguyên RAM rất nhỏ (vài KB đến vài MB). Sử dụng con trỏ giúp tối ưu dung lượng bộ nhớ.
- Khi truyền một cấu trúc dữ liệu lớn (như Struct dài hàng trăm bytes) vào hàm, việc truyền tham trị (Pass by Value) sẽ sao chép toàn bộ struct đó vào vùng nhớ **Stack**, dễ gây tràn Stack. Truyền con trỏ (Pass by Reference) chỉ tốn kích thước cố định của con trỏ (4 bytes trên MCU 32-bit, 8 bytes trên máy tính 64-bit) để trỏ đến vùng nhớ gốc.
- Con trỏ giúp trỏ trực tiếp đến địa chỉ thanh ghi phần cứng (Hardware Registers) để cấu hình ngoại vi (GPIO, UART, I2C, SPI).

### 2. Bản chất con trỏ
- Con trỏ là một biến dùng để lưu trữ **địa chỉ ô nhớ** của biến khác.
- Kích thước của biến con trỏ không phụ thuộc vào kiểu dữ liệu nó trỏ tới (cho dù là `char*`, `int*`, hay `struct*`...). Kích thước con trỏ phụ thuộc hoàn toàn vào kiến trúc bus địa chỉ của CPU:
  - Hệ thống **32-bit** (như STM32, ESP32...): Kích thước con trỏ luôn là **4 bytes** (quản lý tối đa $2^{32} \approx 4$ GB địa chỉ).
  - Hệ thống **64-bit** (như PC, Raspberry Pi chạy OS 64-bit...): Kích thước con trỏ luôn là **8 bytes**.

```
Địa chỉ ô nhớ:  [ 0x20000000 ] ----Trỏ đến---> [    15    ] (Giá trị trong ô nhớ)
Biến con trỏ:   [    ptr     ]                 [   biến x   ]
```

### 3. Phép toán con trỏ (Pointer Arithmetic)
- Phép cộng/trừ con trỏ dịch chuyển địa chỉ dựa trên **kích thước của kiểu dữ liệu** mà nó quản lý.
- Nếu `ptr` là con trỏ kiểu `T*`:
  $$\text{ptr} + n \iff \text{Địa chỉ hiện tại} + (n \times \text{sizeof}(T))$$
- **Ví dụ minh họa:**
  ```c
  char *ptr8 = (char*)0x1000;
  int *ptr32 = (int*)0x1000;
  
  ptr8++;  // Dịch đi 1 byte  -> Địa chỉ mới: 0x1001
  ptr32++; // Dịch đi 4 bytes -> Địa chỉ mới: 0x1004
  ```

### 4. Con trỏ Void (Void Pointer - `void *`)
- Là con trỏ không có kiểu dữ liệu liên kết cụ thể (generic pointer).
- **Tính chất:** Có thể nhận địa chỉ của bất kỳ kiểu dữ liệu nào mà không cần ép kiểu trực tiếp. Tuy nhiên, **không thể dereference (`*ptr`)** trực tiếp con trỏ `void` nếu không ép kiểu về một kiểu cụ thể trước.
- **Ứng dụng:** Thường dùng trong các hàm tổng quát hóa như `memcpy`, `malloc` hoặc cấu trúc truyền dữ liệu trong hệ điều hành thời gian thực (RTOS) như tham số truyền vào Task của FreeRTOS.
```c
void printValue(void *ptr, char type) {
    if (type == 'i') {
        printf("%d\n", *(int*)ptr); // Ép về int* rồi lấy giá trị
    } else if (type == 'f') {
        printf("%f\n", *(float*)ptr); // Ép về float* rồi lấy giá trị
    }
}
```

### 5. Con trỏ hàm (Function Pointer)
- Hàm khi được nạp vào bộ nhớ (Flash/ROM) sẽ nằm tại một địa chỉ cụ thể. Con trỏ hàm dùng để lưu trữ địa chỉ của hàm đó.
- **Cú pháp khai báo:** `kieu_tra_ve (*ten_con_tro)(danh_sach_tham_so);`
- **Ứng dụng cực lớn trong Nhúng:**
  - Viết Driver thiết bị.
  - Cơ chế **Callback** (ví dụ: khi nhận dữ liệu từ UART thành công, gọi hàm callback tương ứng).
  - Thiết kế State Machine (máy trạng thái) chuyên nghiệp.
```c
void hello() { printf("Hello World!\n"); }

int main() {
    void (*funcPtr)() = hello; // Gán địa chỉ hàm hello cho con trỏ hàm funcPtr
    funcPtr(); // Gọi hàm gián tiếp thông qua địa chỉ -> In ra "Hello World!"
    return 0;
}
```
</details>

<details>
<summary><b>Chương 11: Thao tác bit chuyên sâu trong Nhúng (Bitwise, Set/Clear/Check Bit)</b></summary>

Trong hệ thống nhúng, việc điều khiển phần cứng thực chất là điều khiển các bit trong thanh ghi (Register). Do đó, thành thạo các toán tử Bitwise là bắt buộc.

### 1. Các toán tử Bitwise cơ bản

| Toán tử | Ý nghĩa | Ứng dụng phổ biến |
|:---:|:---|:---|
| `&` | AND từng bit | Xóa bit về 0 (Clear bit) hoặc kiểm tra bit (Masking) |
| `\|` | OR từng bit | Thiết lập bit lên 1 (Set bit) |
| `^` | XOR từng bit | Đảo trạng thái bit (Toggle bit) |
| `~` | NOT từng bit | Đảo ngược toàn bộ bit |
| `<<` | Dịch trái bit | Nhân giá trị cho lũy thừa của 2, dịch chuyển bit sang trái |
| `>>` | Dịch phải bit | Chia giá trị cho lũy thừa của 2, dịch chuyển bit sang phải |

### 2. Các phép thao tác Bit kinh điển
Giả sử chúng ta cần thao tác trên thanh ghi (hoặc biến) `Register` tại vị trí bit thứ `n`:

- **Set bit (Đặt bit thứ `n` lên 1):**
  ```c
  Register |= (1 << n);
  ```
- **Clear bit (Xóa bit thứ `n` về 0):**
  ```c
  Register &= ~(1 << n);
  ```
- **Toggle bit (Đảo bit thứ `n` từ 0->1 hoặc 1->0):**
  ```c
  Register ^= (1 << n);
  ```
- **Check bit (Kiểm tra xem bit thứ `n` là 0 hay 1):**
  ```c
  if (Register & (1 << n)) {
      // Bit thứ n là 1
  } else {
      // Bit thứ n là 0
  }
  ```
</details>

<details>
<summary><b>Chương 12: Tiền xử lý & Macro (Preprocessor Directives, Header Guards)</b></summary>

Bộ tiền xử lý (Preprocessor) quét mã nguồn trước khi quá trình biên dịch (Compiling) diễn ra. Toàn bộ lệnh tiền xử lý đều bắt đầu bằng dấu `#`.

### 1. Chỉ thị tiền xử lý thường dùng
- `#include`: Nhúng mã nguồn từ tệp tin khác vào tệp tin hiện tại.
  - `#include <stdio.h>`: Tìm tệp tin trong các thư mục hệ thống/thư viện chuẩn của compiler.
  - `#include "my_header.h"`: Tìm tệp tin trong thư mục dự án hiện hành trước.
- `#define`: Định nghĩa Macro. Khi tiền xử lý chạy, nó sẽ tìm tất cả các vị trí chứa tên Macro và thay thế trực tiếp bằng giá trị tương ứng (Text Substitution).
- `#ifdef`, `#ifndef`, `#else`, `#endif`: Kiểm tra xem một Macro đã được định nghĩa hay chưa để biên dịch có điều kiện.

### 2. Header Guards (Tránh lỗi Duplicate Definition)
Khi dự án lớn dần, nhiều file `.c` include cùng một file `.h` có thể dẫn đến việc biên dịch lặp lại cùng một cấu trúc/hàm, gây lỗi định nghĩa chồng chéo. Sử dụng Header Guard để ngăn chặn việc này:
```c
// File: my_header.h
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Các khai báo biến, struct, prototype hàm
void init_gpio(void);

#endif // MY_HEADER_H
```

### 3. Macro Function vs Inline Function
- **Macro Function:** Thay thế trực tiếp chuỗi văn bản trước khi compile.
  - *Ưu điểm:* Tiết kiệm thời gian gọi hàm (không tốn chi phí đẩy tham số vào Stack và nhảy địa chỉ lệnh), không giới hạn kiểu dữ liệu truyền vào.
  - *Nhược điểm:* Không kiểm tra kiểu dữ liệu (dễ gây lỗi logic), làm phình to mã nguồn (Code Bloating) nếu macro quá lớn và được gọi nhiều lần.
- **Inline Function (Từ khóa `inline`):** Đưa ra gợi ý cho trình biên dịch chèn trực tiếp thân hàm vào nơi gọi để tăng tốc độ thực thi, nhưng vẫn giữ nguyên tính chất kiểm tra kiểu dữ liệu của hàm thông thường.
</details>

<details>
<summary><b>Chương 13: Struct Alignment & Struct Packing (#pragma pack)</b></summary>

### 1. Cơ chế Căn chỉnh bộ nhớ (Memory Alignment)
Để tối ưu hóa tốc độ truy xuất dữ liệu của CPU (thường đọc từ RAM theo từng từ dữ liệu - Word 32-bit trên các dòng vi điều khiển ARM), trình biên dịch sẽ tự động chèn thêm các byte rác (Padding bytes) vào trong struct để đảm bảo địa chỉ của các phần tử là bội số của kích thước của chính phần tử đó.

Giả sử ta có struct sau:
```c
struct Data {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
```
Mặc dù tổng kích thước thật là $1 + 4 + 1 = 6$ bytes, nhưng trình biên dịch sẽ căn chỉnh theo kiểu lớn nhất (`int` - 4 bytes).
- `a` nằm ở offset 0.
- `b` cần nằm ở offset chia hết cho 4, do đó trình biên dịch tự động thêm **3 bytes padding** sau `a`. `b` nằm ở offset 4-7.
- `c` nằm ở offset 8.
- Để cả struct có kích thước chia hết cho 4, trình biên dịch thêm tiếp **3 bytes padding** sau `c`.
- Tổng kích thước thực tế hiển thị bởi `sizeof` là **12 bytes**!

```
[ a ] [pad] [pad] [pad] [  b (byte 1)  ] [  b (byte 2)  ] [  b (byte 3)  ] [  b (byte 4)  ] [ c ] [pad] [pad] [pad]
```

### 2. Kỹ thuật sắp xếp Struct tối ưu RAM
Cách tiết kiệm bộ nhớ thủ công đơn giản nhất là **sắp xếp các trường của struct từ lớn đến nhỏ**:
```c
struct DataOptimized {
    int b;   // 4 bytes (offset 0)
    char a;  // 1 byte  (offset 4)
    char c;  // 1 byte  (offset 5)
    // 2 bytes padding được thêm ở cuối để cấu trúc đạt 8 bytes (chia hết cho 4)
};
```
Tổng kích thước giảm từ **12 bytes xuống còn 8 bytes**!

### 3. Struct Packing (`#pragma pack(1)`)
Trong lập trình nhúng, khi cần truyền struct qua mạng hoặc các giao thức bus truyền thông (UART, SPI, CAN...) hoặc lưu trữ vào bộ nhớ Flash/EEPROM, ta cần loại bỏ hoàn toàn các byte padding này để khớp chính xác dữ liệu từng byte (Data Frame).
Sử dụng chỉ thị `#pragma pack(push, 1)` để ép trình biên dịch căn chỉnh bộ nhớ theo từng byte (không chèn padding):

```c
#pragma pack(push, 1) // Bắt đầu ép căn chỉnh 1 byte
struct Packet {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
#pragma pack(pop)     // Khôi phục lại cấu hình căn chỉnh mặc định của Compiler

// sizeof(struct Packet) lúc này sẽ trả về chính xác 6 bytes!
```
> [!WARNING]
> Mặc dù `pack(1)` giúp tiết kiệm bộ nhớ tối đa, nó có thể làm giảm tốc độ truy cập dữ liệu của CPU trên một số kiến trúc vi xử lý do phải thực hiện nhiều chu kỳ đọc hơn để xử lý một biến không được căn chỉnh địa chỉ (misaligned memory access).

</details>

<details>
<summary><b>Chương 14: Union trong Nhúng & Ứng dụng truy cập thanh ghi (Register Manipulation)</b></summary>

### 1. Bản chất của Union
- Union có cú pháp khai báo giống hệt Struct, nhưng **tất cả các thành viên trong Union đều dùng chung một vùng nhớ duy nhất**.
- Kích thước của Union bằng kích thước của thành viên lớn nhất. Thay đổi giá trị của một thành viên sẽ ảnh hưởng trực tiếp đến giá trị của các thành viên khác.

### 2. Ứng dụng Union trong Nhúng
Union là công cụ đắc lực để giao tiếp và cấu hình phần cứng:
- **Tách/gộp byte:** Rất hữu ích khi nhận dữ liệu từng byte từ UART/I2C rồi ghép lại thành số nguyên lớn.
  ```c
  union DataConverter {
      float floatVal;
      uint8_t byteVal[4];
  };
  ```
- **Truy cập thanh ghi phần cứng linh hoạt:** Vừa có thể truy cập toàn bộ giá trị thanh ghi, vừa có thể truy cập cụ thể từng nhóm bit (Bit-field) mà không cần sử dụng các phép toán Bitwise phức tạp.

```c
typedef union {
    struct {
        uint32_t b0 : 1; // Bit-field 1 bit
        uint32_t b1 : 1;
        uint32_t b2 : 1;
        uint32_t reserved : 29; // Các bit trống còn lại
    } bits;
    uint32_t reg_val; // Giá trị 32-bit toàn vẹn của thanh ghi
} MyGPIO_Register;

MyGPIO_Register gpio_reg;
gpio_reg.reg_val = 0x00; // Xóa toàn bộ thanh ghi
gpio_reg.bits.b1 = 1;    // Đặt bit 1 lên 1 (Nhanh chóng và trực quan)
```
</details>

<details>
<summary><b>Chương 15: Phân biệt biến tĩnh (Static) & Biến toàn cục (Extern)</b></summary>

### 1. Từ khóa `static`
Từ khóa `static` thay đổi phạm vi hoạt động (scope) và thời gian tồn tại (lifetime) của biến hoặc hàm tùy theo vị trí khai báo:

- **Static cục bộ (Local static variable):** Khai báo bên trong một hàm.
  - *Tính chất:* Biến được khởi tạo một lần duy nhất khi nạp chương trình. Nó không bị giải phóng khi hàm kết thúc (không nằm trên Stack mà được chuyển sang phân vùng `.data` hoặc `.bss`). Giá trị được giữ nguyên giữa các lần gọi hàm tiếp theo.
  - *Ứng dụng:* Đếm số lần gọi hàm, lưu trạng thái nội bộ của hàm.
- **Static toàn cục (Global static variable / function):** Khai báo bên ngoài các hàm (ở mức tệp `.c`).
  - *Tính chất:* Giới hạn phạm vi sử dụng của biến/hàm **chỉ trong nội bộ tệp `.c` đó**. Các tệp `.c` khác không thể nhìn thấy hoặc truy cập vào biến/hàm này, ngay cả khi sử dụng từ khóa `extern`.
  - *Ứng dụng:* Bảo mật thông tin, đóng gói mã nguồn, tránh xung đột trùng tên hàm/biến khi tích hợp nhiều module mã nguồn từ các dev khác nhau trong dự án lớn.

### 2. Từ khóa `extern`
- Dùng để thông báo cho trình biên dịch biết rằng một biến hoặc hàm toàn cục đã được định nghĩa tại một tệp nguồn `.c` khác.
- Giúp chia sẻ tài nguyên (biến toàn cục, hàm) giữa các tệp nguồn trong dự án.
- **Ví dụ minh họa:**
  ```c
  // File: sensor.c
  int sensor_data = 100; // Định nghĩa biến toàn cục
  
  // File: main.c
  extern int sensor_data; // Khai báo extern để sử dụng
  
  int main() {
      printf("Dữ liệu cảm biến: %d\n", sensor_data); // Đọc bình thường
      return 0;
  }
  ```
</details>

<details>
<summary><b>Chương 16: Volatile toàn tập: Ngăn tối ưu hóa & Không gian ngắt (ISR)</b></summary>

### 1. Volatile là gì?
- Từ khóa `volatile` báo cho Trình biên dịch (Compiler) biết rằng biến này có thể bị thay đổi giá trị một cách bất ngờ bên ngoài luồng kiểm soát của chương trình chính.
- **Tác dụng:** Ép buộc trình biên dịch **luôn luôn thực hiện đọc/ghi trực tiếp từ ô nhớ RAM** thay vì tối ưu hóa bằng cách đọc giá trị lưu tạm trong các thanh ghi đa năng của CPU (CPU Registers).

### 2. Tại sao cần `volatile`? (Hậu quả nếu thiếu)
Nếu không khai báo `volatile`, trình biên dịch khi biên dịch ở chế độ tối ưu hóa cao (`-O2`, `-O3`) sẽ thấy vòng lặp kiểm tra biến không thay đổi trong chương trình chính, nó sẽ lưu giá trị biến vào thanh ghi CPU để đọc cho nhanh hoặc thậm chí tối ưu hóa loại bỏ luôn vòng lặp, dẫn đến việc chương trình không bao giờ thoát hoặc hoạt động sai logic khi biến bị thay đổi ở nơi khác.

### 3. 3 trường hợp BẮT BUỘC dùng `volatile` trong lập trình Nhúng
- **Thanh ghi ngoại vi phần cứng (Hardware Registers):** Các giá trị thanh ghi thay đổi liên tục dựa trên trạng thái phần cứng bên ngoài (ví dụ: thanh ghi chứa dữ liệu nhận UART, trạng thái chân GPIO).
- **Biến toàn cục chia sẻ giữa chương trình chính và chương trình phục vụ ngắt (ISR - Interrupt Service Routine):**
  ```c
  volatile int event_flag = 0;
  
  void EXTI0_IRQHandler() { // Chương trình phục vụ ngắt chân IO
      event_flag = 1; // Thay đổi giá trị biến trong ngắt
  }
  
  int main() {
      while (event_flag == 0) {
          // Nếu thiếu volatile, compiler có thể tối ưu hóa thành vòng lặp vô hạn
          // vì nghĩ event_flag không bao giờ thay đổi trong luồng main
      }
      printf("Xử lý sự kiện ngắt thành công!\n");
  }
  ```
- **Biến toàn cục được chia sẻ giữa nhiều Task/Thread trong hệ điều hành thời gian thực (RTOS).**
</details>

<details>
<summary><b>Chương 17: Const & Weak: Tối ưu hóa Flash/RAM & Cần thiết Callback</b></summary>

### 1. Từ khóa `const` trong Nhúng
- Báo cho compiler ngăn chặn hành vi thay đổi giá trị của biến.
- **Đặc thù trong Nhúng:** 
  - Các biến thông thường lưu trong RAM (SRAM) để có thể đọc/ghi lúc runtime. RAM có dung lượng cực kỳ hạn chế.
  - Khi hằng số được khai báo với `const`, trình biên dịch sẽ đặt hằng số này trực tiếp vào bộ nhớ **Flash (ROM / Code)**, nơi có dung lượng lớn hơn nhiều so với RAM.
  - Sử dụng `const` cho các bảng tra cứu (Look-up tables), cấu hình hệ thống, mảng cố định... giúp **tiết kiệm bộ nhớ RAM tối đa** và tăng tính an toàn (không bị ghi đè do lỗi con trỏ lạc).

### 2. Từ khóa `__weak` (Hàm Weak)
- Thường thấy trong các thư viện HAL của STM32 hoặc các SDK chuyên nghiệp.
- **Cơ chế:** Cho phép người viết thư viện định nghĩa trước một hàm mặc định với từ khóa `__weak`. Nếu người dùng định nghĩa lại một hàm có cùng tên, kiểu trả về và tham số ở file mã nguồn của mình (không có từ khóa `__weak`), trình liên kết (Linker) sẽ ưu tiên sử dụng hàm của người dùng và tự động bỏ qua hàm mặc định mà không gây ra lỗi trùng lặp định nghĩa.
- **Ứng dụng:** Viết các hàm Callback ngắt cực kỳ tiện lợi. Người dùng chỉ cần định nghĩa hàm callback trong `main.c` khi cần dùng mà không cần sửa file driver gốc.
</details>

<details>
<summary><b>Chương 18: Tổ chức bộ nhớ MCU (Memory Layout: Flash, SRAM, Stack, Heap)</b></summary>

Hiểu rõ cấu trúc bộ nhớ của vi điều khiển giúp lập trình viên quản lý lỗi tràn bộ nhớ, phân bổ tài nguyên hợp lý.

```
+-------------------------------------------------------------+
| BỘ NHỚ FLASH (ROM / CODE)                                    |
| - Lưu mã máy (Text/Code)                                    |
| - Lưu các hằng số (Const)                                   |
+-------------------------------------------------------------+
| BỘ NHỚ SRAM (RAM - RUNTIME DATA)                            |
|                                                             |
| [ .data ] - Lưu biến toàn cục/static ĐÃ khởi tạo khác 0     |
| [ .bss  ] - Lưu biến toàn cục/static CHƯA khởi tạo/bằng 0   |
|                                                             |
| [ HEAP  ] - Phát triển lên (Cấp phát động: malloc, free)    |
|     |                                                       |
|     v                                                       |
|     ^                                                       |
|     |                                                       |
| [ STACK ] - Phát triển xuống (Biến cục bộ, tham số hàm)     |
+-------------------------------------------------------------+
```

### 1. Phân vùng bộ nhớ chi tiết
- **Flash (ROM):** Lưu trữ cố định, không mất dữ liệu khi mất điện.
  - `.text`: Lưu mã lệnh thực thi của chương trình.
  - `.rodata`: Lưu dữ liệu chỉ đọc (hằng số `const`, chuỗi hằng...).
- **SRAM (RAM):** Lưu dữ liệu tạm thời, mất dữ liệu khi mất điện.
  - **Phân vùng tĩnh (Static Allocation):**
    - `.data`: Lưu biến toàn cục và biến static đã được khởi tạo giá trị ban đầu khác 0.
    - `.bss`: Lưu biến toàn cục và biến static chưa được khởi tạo hoặc khởi tạo bằng 0. Khi MCU khởi động, chương trình startup sẽ tự động xóa phân vùng này về 0.
  - **Phân vùng động (Dynamic Allocation):**
    - **Stack (Ngăn xếp):** Lưu trữ các biến cục bộ trong hàm, tham số truyền vào hàm, địa chỉ phản hồi khi gọi hàm. Hoạt động theo cơ chế **LIFO** (Last In First Out). Được quản lý hoàn toàn tự động bởi phần cứng CPU. Phát triển từ địa chỉ cao xuống địa chỉ thấp.
    - **Heap:** Dùng cho việc cấp phát bộ nhớ động thông qua các hàm `malloc()`, `calloc()`, `realloc()`, `free()`. Được quản lý bởi lập trình viên. Phát triển từ địa chỉ thấp lên cao.
      > ⚠️ **Cảnh báo:** Trong lập trình nhúng, cực kỳ hạn chế sử dụng bộ nhớ **Heap** vì dễ gây ra hiện tượng phân mảnh bộ nhớ (Memory Fragmentation), dẫn đến MCU hoạt động lâu ngày bị crash đột ngột do không tìm thấy phân vùng nhớ trống đủ lớn để cấp phát.

</details>

<details>
<summary><b>Chương 19: Chống dội nút nhấn (Debounce) & Bật/tắt Debug Log thực tế</b></summary>

### 1. Chống dội nút nhấn cơ học (Button Debounce)
- **Vấn đề:** Khi nhấn hoặc thả một nút nhấn cơ học, các tiếp điểm bên trong nút bị rung động liên tục tạo ra các mức tín hiệu HIGH/LOW xen kẽ trong khoảng thời gian rất ngắn (10 - 20ms) trước khi ổn định ở trạng thái mới. Do vi điều khiển chạy với tần số rất cao, nó sẽ nhận diện đây là hành động nhấn nút liên tục nhiều lần (gọi là dội phím - bounce).
- **Giải pháp:**
  - *Phần cứng:* Mắc thêm mạch lọc RC (tụ điện song song với nút nhấn) để dập tắt xung nhiễu dội.
  - *Phần mềm:* Đợi một khoảng thời gian ngắn (Delay) rồi kiểm tra lại trạng thái chân IO:
    ```c
    int read_button() {
        if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET) {
            HAL_Delay(20); // Trì hoãn 20ms để bỏ qua vùng dội rung động
            if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET) {
                while(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET); // Chờ nhả phím
                return 1; // Xác nhận nút nhấn thực sự được nhấn
            }
        }
        return 0;
    }
    ```

### 2. Kỹ thuật bật/tắt Debug Log thông minh bằng Macro
Khi phát triển sản phẩm (Giai đoạn R&D/Debug), chúng ta cần in rất nhiều log qua UART (`printf`) để kiểm tra lỗi. Tuy nhiên, khi chuyển sang sản xuất thương mại (Giai đoạn Release), việc giữ lại các hàm `printf` sẽ làm chậm tốc độ hệ thống rất nhiều và làm phình to bộ nhớ Flash.
Kỹ thuật cấu hình bật/tắt log bằng 1 dòng cấu hình sử dụng tiền xử lý:

```c
#define DEBUG_MODE  1 // Đặt 1 để BẬT debug, đặt 0 để TẮT hoàn toàn log khi sản xuất

#if DEBUG_MODE
    #define DEBUG_LOG(fmt, ...) printf("[DEBUG] " fmt "\n", ##__VA_ARGS__)
#else
    #define DEBUG_LOG(fmt, ...) // Tự động xóa hoàn toàn dòng log khi dịch, tiết kiệm Flash tối đa
#endif

int main() {
    DEBUG_LOG("Khởi động hệ thống thành công. Điện áp pin: %.2fV", 3.75);
    return 0;
}
```
</details>

---

# PHẦN III: BÀI TẬP TRẮC NGHIỆM ÔN TẬP CHUYÊN SÂU

Dưới đây là phần phân tích chi tiết bộ câu hỏi trắc nghiệm hóc búa nhất trích ra từ tài liệu phục vụ ôn tập thi tuyển dụng phần mềm nhúng.

### ❓ Câu 1: (Vòng lặp For)
```c
int i;
for (i = 1; i < 101; ++i)
    i++;
printf("%d", i);
```
- **Đáp án:** `101`
- **Phân tích chi tiết:**
  1. Khởi động vòng lặp với `i = 1`.
  2. Trong thân vòng lặp thực hiện lệnh `i++` -> `i` tăng lên `2`.
  3. Kết thúc vòng lặp hiện tại, chuyển sang bước cập nhật của vòng lặp `for` là `++i` -> `i` tăng lên `3`.
  4. Lần lặp 2: Điều kiện `3 < 101` (Đúng). Thân vòng lặp chạy `i++` -> `4`. Bước cập nhật `++i` -> `5`.
  5. Tiến trình này làm `i` tăng theo các số lẻ: $1 \to 3 \to 5 \to 7 \dots \to 99$.
  6. Khi `i = 99`, điều kiện `99 < 101` vẫn đúng. Thân vòng lặp chạy `i++` -> `100`. Bước cập nhật `++i` -> `101`.
  7. Lần lặp tiếp theo kiểm tra điều kiện `101 < 101` (Sai) -> Vòng lặp dừng lại.
  8. Giá trị cuối cùng của `i` in ra màn hình là `101`.

---

### ❓ Câu 2: (Tràn số kiểu ký tự char)
```c
char i;
for (i = 0; i < 128;) {
    i++;
    printf("%d ", i);
}
```
- **Đáp án:** Vòng lặp vô hạn (Infinite Loop).
- **Phân tích chi tiết:**
  - Kiểu dữ liệu `char` trong C mặc định là số nguyên có dấu (Signed 8-bit) trên hầu hết các compiler, có khoảng giá trị từ `-128` đến `127`.
  - Vòng lặp tăng `i` từ `0` dần lên đến `127`.
  - Khi `i` đang bằng `127`, thực hiện lệnh `i++`. Lúc này xảy ra hiện tượng **tràn số có dấu (Signed Overflow)**, giá trị của `i` sẽ quay về giá trị nhỏ nhất của kiểu là `-128`.
  - Kiểm tra điều kiện vòng lặp: `-128 < 128` (Đúng). Vòng lặp tiếp tục chạy và tăng dần từ `-128` lên `0` rồi lên lại `127` rồi lại tràn về `-128`.
  - Điều kiện `i < 128` luôn luôn ĐÚNG, tạo ra một vòng lặp vô hạn không bao giờ dừng.
  - *Cách khắc phục:* Chuyển kiểu dữ liệu thành `unsigned char` (0 đến 255) hoặc đổi biến chạy thành `int`.

---

### ❓ Câu 3: (Union & Bit-field)
```c
typedef union {
    struct Register {
        unsigned int value1 : 3; // Bit-field 3 bit (giá trị 0-7)
        unsigned int value2 : 2; // Bit-field 2 bit (giá trị 0-3)
        unsigned int value3 : 3; // Bit-field 3 bit (giá trị 0-7)
    } value;
    unsigned int raw; // 32-bit (hoặc 16-bit tùy CPU)
} DemoRegister;

DemoRegister demo_reg;
demo_reg.value.value1 = 1;
demo_reg.value.value2 = 2;
demo_reg.value.value3 = 3;
demo_reg.raw = 0xFF;

printf("%d %d %d %d", demo_reg.value.value1, demo_reg.value.value2, demo_reg.value.value3, demo_reg.raw);
```
- **Đáp án:** `7 3 7 255`
- **Phân tích chi tiết:**
  1. Đây là một `union`, do đó biến `value` (struct chứa bit-field chiếm tổng cộng 8 bit) và biến `raw` (số nguyên) **chia sẻ chung một vùng nhớ vật lý**.
  2. Ban đầu, các bit-field được gán lần lượt các giá trị. Tuy nhiên, ngay sau đó câu lệnh `demo_reg.raw = 0xFF;` được thực thi.
  3. Giá trị `0xFF` chuyển sang nhị phân là `1111 1111` (8 bit đều là 1), ghi đè hoàn toàn lên phân vùng nhớ chung của union này.
  4. Lúc này khi gọi hiển thị các bit-field của struct `value`:
     - `value1` chiếm 3 bit. Đọc 3 bit chứa toàn bộ số 1 nhị phân là `111` -> Giá trị thập phân là `7`.
     - `value2` chiếm 2 bit. Đọc 2 bit chứa toàn bộ số 1 nhị phân là `11` -> Giá trị thập phân là `3`.
     - `value3` chiếm 3 bit. Đọc 3 bit chứa toàn bộ số 1 nhị phân là `111` -> Giá trị thập phân là `7`.
     - `raw` được gán trực tiếp là `0xFF` -> thập phân là `255`.
  5. Kết quả in ra màn hình chính xác là: `7 3 7 255`.

---

### ❓ Câu 4: (Gán địa chỉ con trỏ hàm)
```c
void hello() { printf("Hello"); }
void welcome() { printf("welcome"); }

int main() {
    void (*funcPtr)();
    void (*funcPtr2)();
    funcPtr = hello;
    funcPtr2 = welcome;
    funcPtr = funcPtr2;
    funcPtr();
}
```
- **Đáp án:** `welcome`
- **Phân tích chi tiết:**
  - `funcPtr` và `funcPtr2` là hai con trỏ hàm không nhận đối số và trả về `void`.
  - `funcPtr` được gán địa chỉ của hàm `hello`.
  - `funcPtr2` được gán địa chỉ của hàm `welcome`.
  - Lệnh `funcPtr = funcPtr2;` thực hiện sao chép địa chỉ đang được giữ bởi `funcPtr2` (địa chỉ của hàm `welcome`) vào con trỏ `funcPtr`.
  - Gọi thực thi `funcPtr()` tương đương với việc thực thi trực tiếp hàm `welcome()`.
  - Do đó màn hình in ra: `welcome`.

---

### ❓ Câu 5: (Biên dịch có điều kiện bằng tiền xử lý #ifdef)
```c
#define HCET -1

#ifdef HCET
void printMes() { printf("WIN"); }
#endif

#ifndef HCET
void printMes() { printf("LOSE"); }
#endif

int main() {
    printMes();
}
```
- **Đáp án:** `WIN`
- **Phân tích chi tiết:**
  - Macro `HCET` được định nghĩa với giá trị `-1`.
  - Chỉ thị `#ifdef HCET` kiểm tra xem Macro tên là `HCET` **đã được định nghĩa hay chưa**, hoàn toàn không quan tâm đến giá trị của nó là âm hay dương. Do `HCET` đã được định nghĩa qua `#define`, biểu thức này trả về ĐÚNG.
  - Khối mã chứa hàm `printMes()` in ra chữ `"WIN"` được biên dịch.
  - Ngược lại, `#ifndef HCET` (nếu chưa định nghĩa HCET) trả về SAI, khối mã in `"LOSE"` bị loại bỏ hoàn toàn trong giai đoạn tiền xử lý.
  - Kết quả chạy chương trình in ra: `WIN`.

---

### ❓ Câu 6: (Tính chất tăng dần của Enum)
```c
enum number {
    one = 1,
    two = 2,
    three,
    five,
    four = 4,
    six,
    seven = 7
};

int main() {
    printf("%d %d %d", five, four, six);
}
```
- **Đáp án:** `4 4 5`
- **Phân tích chi tiết:**
  - Trong cấu trúc `enum`, các phần tử không được gán giá trị rõ ràng sẽ tự động lấy giá trị của phần tử liền trước nó cộng thêm 1.
  - `one` = 1
  - `two` = 2
  - `three` không gán -> bằng `two + 1` = `3`.
  - `five` không gán -> bằng `three + 1` = `4`.
  - `four` được gán tường minh = `4`.
  - `six` không gán -> bằng phần tử liền trước nó là `four + 1` = `4 + 1` = `5`.
  - `seven` được gán tường minh = `7`.
  - Hàm `printf` in giá trị của `five` (4), `four` (4), và `six` (5).
  - Kết quả xuất ra màn hình: `4 4 5`.

---

### ❓ Câu 7: (Thao tác tráo đổi con trỏ địa chỉ)
```c
int a = 1, b = 2, c = 3, d = 4;
int *pa = &a, *pb = &b, *pc = &c, *pd = &d;
pb = &c;
pb = &d;
pa = &b;
pc = &a;
b = a + d;
d = b + c;
pb = pc;
pb = pa;
pa = &b;
pc = pd;
pb = &c;
pd = &d;

printf("%d %d %d %d", *pa, *pb, *pc, *pd);
```
- **Đáp án:** `5 3 8 8`
- **Phân tích chi tiết từng bước:**
  1. Khởi tạo giá trị: `a=1`, `b=2`, `c=3`, `d=4`. Các con trỏ ban đầu trỏ tương ứng đến các biến đó.
  2. Thực hiện tráo đổi địa chỉ con trỏ ở các dòng đầu:
     - `pb = &c;` -> `pb` trỏ đến `c`.
     - `pb = &d;` -> `pb` trỏ đến `d`.
     - `pa = &b;` -> `pa` trỏ đến `b`.
     - `pc = &a;` -> `pc` trỏ đến `a`.
  3. Thực hiện thay đổi giá trị của các biến thông qua phép toán:
     - `b = a + d;` -> `b = 1 + 4 = 5` (Giá trị của `b` thay đổi từ 2 thành 5).
     - `d = b + c;` -> `d = 5 + 3 = 8` (Giá trị của `d` thay đổi từ 4 thành 8).
  4. Thực hiện gán tiếp địa chỉ cho các con trỏ ở các dòng sau:
     - `pb = pc;` -> `pb` trỏ đến biến `a` (vì lúc này `pc` đang trỏ đến `a`).
     - `pb = pa;` -> `pb` trỏ đến biến `b` (vì `pa` đang trỏ đến `b`).
     - `pa = &b;` -> `pa` trỏ đến biến `b`.
     - `pc = pd;` -> `pc` trỏ đến biến `d` (vì `pd` đang trỏ đến `d`).
     - `pb = &c;` -> `pb` trỏ đến biến `c` trực tiếp.
     - `pd = &d;` -> `pd` trỏ đến biến `d` trực tiếp.
  5. Tổng kết điểm trỏ cuối cùng của các con trỏ và giá trị biến tương ứng:
     - `pa` trỏ đến `b` -> `*pa` = `5`.
     - `pb` trỏ đến `c` -> `*pb` = `3`.
     - `pc` trỏ đến `d` -> `*pc` = `8`.
     - `pd` trỏ đến `d` -> `*pd` = `8`.
  6. Kết quả in ra chính xác là: `5 3 8 8`.

---

### ❓ Câu 8: (Thứ tự đánh giá tham số phức tạp trong hàm printf)
```c
int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr;
printf("%d %d %d %d %d %d", *ptr, ++*ptr++, (*ptr)++, *ptr++, *++ptr, ++*ptr);
```
- **Đáp án:** `4 5 3 2 2 2` (Lưu ý: Kết quả có thể thay đổi tùy thuộc vào Compiler vì tiêu chuẩn C không quy định thứ tự đánh giá các tham số trong hàm `printf`, tuy nhiên hầu hết các compiler phổ biến trên hệ thống x86/ARM như GCC hay MSVC đều biên dịch và đánh giá các tham số từ **PHẢI QUA TRÁI** rồi in ra theo thứ tự từ TRÁI QUA PHẢI).
- **Phân tích chi tiết theo cơ chế đánh giá từ Phải qua Trái:**
  - Ban đầu mảng là `arr = {1, 2, 3, 4, 5}`. Con trỏ `ptr` trỏ tới `arr[0]` (địa chỉ của giá trị `1`).
  - Đánh giá từ phải qua trái (tham số thứ 6 đến tham số thứ 1):
    1. **`++*ptr` (Tham số thứ 6):**
       - Lấy giá trị tại vị trí `ptr` đang trỏ (`arr[0] = 1`), tăng giá trị đó lên 1 đơn vị -> `arr[0]` trở thành `2`.
       - *Kết quả trả về cho tham số 6:* `2`.
    2. **`*++ptr` (Tham số thứ 5):**
       - Dịch con trỏ `ptr` lên 1 phần tử (trỏ đến `arr[1]` có giá trị là 2). Dereference lấy giá trị tại đó.
       - *Kết quả trả về cho tham số 5:* `2`.
    3. **`*ptr++` (Tham số thứ 4):**
       - Đây là hậu tố tăng cho con trỏ: Lấy giá trị tại địa chỉ hiện tại của con trỏ trước (`arr[1] = 2`), sau đó dịch con trỏ `ptr` lên 1 phần tử (lúc này `ptr` trỏ tới `arr[2]` có giá trị là 3).
       - *Kết quả trả về cho tham số 4:* `2`.
    4. **`(*ptr)++` (Tham số thứ 3):**
       - Lấy giá trị tại `ptr` đang trỏ (`arr[2] = 3`). Do là hậu tố tăng cho giá trị, trả về giá trị `3` trước, sau đó tăng giá trị của `arr[2]` trong mảng lên thành `4`.
       - *Kết quả trả về cho tham số 3:* `3`.
    5. **`++*ptr++` (Tham số thứ 2):**
       - Phép toán kết hợp hậu tố dịch con trỏ `ptr++` và tiền tố tăng giá trị `++*`:
       - Lấy giá trị tại `ptr` đang trỏ trước (`arr[2] = 4`), tăng giá trị đó lên thành `5` (tức `arr[2]` đổi thành `5`).
       - *Kết quả trả về cho tham số 2:* `5`.
       - Sau đó thực hiện hậu tố dịch con trỏ `ptr++`, con trỏ `ptr` dịch sang trỏ đến `arr[3]` (có giá trị là `4`).
    6. **`*ptr` (Tham số thứ 1):**
       - Dereference con trỏ `ptr` tại vị trí hiện hành (`arr[3]`). Giá trị hiện tại là `4`.
       - *Kết quả trả về cho tham số 1:* `4`.
  - Tổng hợp in ra màn hình từ tham số 1 đến 6: `4 5 3 2 2 2`.

---

### ❓ Câu 9: (Ép kiểu con trỏ struct & Phép toán cộng con trỏ)
```c
typedef struct {
    int a; int b; int c; int d; int f; int g; int h;
} MyStruct;

typedef struct {
    char a;
} MyStruct2;

int main() {
    MyStruct a;
    a.a = 65; a.b = 66; a.c = 67; a.d = 68;
    MyStruct2 *b = (MyStruct2 *)&a;
    b += 4;
    printf("%c", b->a);
}
```
- **Đáp án:** `'B'` (Ký tự B)
- **Phân tích chi tiết:**
  1. Struct `MyStruct` chứa các trường kiểu `int` (mỗi trường 4 bytes). Vùng nhớ của struct `a` được phân bổ liên tiếp:
     - `a.a` (offset 0 đến 3 bytes) -> chứa giá trị `65` (mã ASCII của ký tự 'A').
     - `a.b` (offset 4 đến 7 bytes) -> chứa giá trị `66` (mã ASCII của ký tự 'B').
     - `a.c` (offset 8 đến 11 bytes) -> chứa giá trị `67` (mã ASCII của ký tự 'C').
     - `a.d` (offset 12 đến 15 bytes) -> chứa giá trị `68` (mã ASCII của ký tự 'D').
  2. Con trỏ `b` thuộc kiểu `MyStruct2*` được ép kiểu trỏ vào địa chỉ của struct `a` (bắt đầu từ offset 0).
  3. Kích thước của `MyStruct2` là `sizeof(MyStruct2) = 1` byte (chỉ chứa một biến `char a`).
  4. Câu lệnh cộng con trỏ `b += 4;` dịch chuyển con trỏ đi:
     $$\text{Dịch chuyển} = 4 \times \text{sizeof}(MyStruct2) = 4 \times 1 = 4\text{ bytes}$$
  5. Lúc này con trỏ `b` trỏ chính xác vào byte thứ 4 (offset 4) của struct `a`.
  6. Offset 4 của struct `a` chính là điểm khởi đầu của trường dữ liệu `a.b` (chứa giá trị `66`).
  7. Lệnh `b->a` đọc dữ liệu 1 byte tại vị trí trỏ dưới dạng một biến kiểu `char`. Giá trị đọc được là `66`.
  8. Định dạng `%c` in mã ASCII `66` ra màn hình, hiển thị ký tự: `'B'`.

---

### ❓ Câu 10: (Memory Alignment của Struct)
```c
typedef struct {
    short a;
    long b;
    char c;
} tem;

typedef struct {
    short a;
    char c;
    long b;
} tem2;

int main() {
    tem a;
    printf("%d %d", sizeof(tem), sizeof(tem2));
}
```
- **Đáp án:** `12 8` (trên kiến trúc CPU ARM 32-bit/64-bit phổ biến, giả sử `short` = 2 bytes, `char` = 1 byte, `long` = 4 bytes).
- **Phân tích chi tiết:**
  - **Với struct `tem`:**
    - `short a` (2 bytes) chiếm bytes [0, 1].
    - `long b` (4 bytes) yêu cầu căn lề chia hết cho 4, do đó compiler chèn **2 bytes padding** rác vào bytes [2, 3]. `b` chiếm bytes [4, 5, 6, 7].
    - `char c` (1 byte) chiếm byte [8].
    - Tổng kích thước hiện tại là 9 bytes. Tuy nhiên, kích thước toàn bộ struct phải là bội số của thành phần lớn nhất (`long` - 4 bytes), do đó compiler chèn tiếp **3 bytes padding** vào cuối.
    - Kết quả: `sizeof(tem)` = **12 bytes**.
  - **Với struct `tem2`:**
    - `short a` (2 bytes) chiếm bytes [0, 1].
    - `char c` (1 byte) chiếm byte [2].
    - `long b` (4 bytes) yêu cầu căn lề chia hết cho 4. Compiler chèn **1 byte padding** vào vị trí byte [3]. `b` chiếm bytes [4, 5, 6, 7].
    - Tổng kích thước lúc này là 8 bytes (đã là bội số của 4, không cần chèn thêm padding ở cuối).
    - Kết quả: `sizeof(tem2)` = **8 bytes**.

---

Chúc bạn có những giây phút ôn tập hiệu quả và chinh phục thành công đỉnh cao Lập trình Nhúng! 🖥️🚀
