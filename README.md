# 🚀 CẨM NANG TỰ HỌC C BASIC & C EMBEDDED TOÀN DIỆN

> Tài liệu tổng hợp khóa học **C Basic (W3Schools)** và **C Embedded Chuyên Sâu** dành cho Kỹ sư lập trình nhúng.
> Version: 1.1

📚 Tài liệu này được biên soạn tỉ mỉ, đầy đủ từ cơ bản đến nâng cao để tiện tra cứu, ôn tập và lưu trữ trên GitHub.

⚠️ Kiến thức là vô hạn. Nếu bạn thấy chỗ nào sai sót hay chưa rõ, hãy đóng góp để cùng nhau học tập!

---

## 📑 MỤC LỤC

```
==============================================================
| CHƯƠNG    | NỘI DUNG                                       |
==============================================================
| PHẦN I    | C BASIC (KIẾN THỨC CƠ BẢN TOÀN DIỆN)            |
| CHƯƠNG 01 | GIỚI THIỆU & THIẾT LẬP MÔI TRƯỜNG              |
| CHƯƠNG 02 | BIẾN, KIỂU DỮ LIỆU VÀ TOÁN TỬ                  |
| CHƯƠNG 03 | HẰNG SỐ & NHẬP XUẤT DỮ LIỆU (USER INPUT)       |
| CHƯƠNG 04 | CẤU TRÚC ĐIỀU KHIỂN & RA QUYẾT ĐỊNH            |
| CHƯƠNG 05 | VÒNG LẶP & ĐIỀU KHIỂN LUỒNG (CONTROL FLOW)     |
| CHƯƠNG 06 | MẢNG (ARRAY) VÀ CHUỖI KÝ TỰ (STRING)           |
| CHƯƠNG 07 | HÀM (FUNCTION) VÀ ĐỆ QUY (RECURSION)           |
| CHƯƠNG 08 | CẤU TRÚC (STRUCT) & KIỂU LIỆT KÊ (ENUM)         |
| CHƯƠNG 09 | XỬ LÝ TỆP TIN & QUẢN LÝ BỘ NHỚ ĐỘNG            |
|-----------|------------------------------------------------|
| PHẦN II   | C EMBEDDED (LẬP TRÌNH NHÚNG CHUYÊN SÂU)         |
| CHƯƠNG 10 | CON TRỎ TOÀN TẬP (NORMAL, VOID, FUNCTION PTR)  |
| CHƯƠNG 11 | THAO TÁC BIT CHUYÊN SÂU (BITWISE MANIPULATION) |
| CHƯƠNG 12 | TIỀN XỬ LÝ & MACRO                             |
| CHƯƠNG 13 | STRUCT ALIGNMENT & STRUCT PACKING              |
| CHƯƠNG 14 | UNION & ỨNG DỤNG TRUY CẬP THANH GHI DIRECT     |
| CHƯƠNG 15 | PHÂN BIỆT STATIC & EXTERN                      |
| CHƯƠNG 16 | VOLATILE TOÀN TẬP                              |
| CHƯƠNG 17 | CONST & WEAK: TỐI ƯU FLASH/RAM & CALLBACK      |
| CHƯƠNG 18 | TỔ CHỨC BỘ NHỚ MCU (FLASH, SRAM, STACK, HEAP)  |
| CHƯƠNG 19 | CHỐNG DỘI NÚT NHẤN (DEBOUNCE) & DEBUG LOG      |
|-----------|------------------------------------------------|
| PHẦN III  | BỘ CÂU HỎI TRẮC NGHIỆM ÔN THI CUỐI KHÓA        |
| CÂU 01-10 | GIẢI CHI TIẾT LOGIC BIÊN DỊCH TỪNG BYTE        |
==============================================================
```

### 🔖 Chi tiết các bài học

<details>
<summary><b>Chương 01: Giới thiệu và thiết lập môi trường C</b></summary>

- [#1. Giới thiệu ngôn ngữ lập trình C](#bai-01)
- [#2. Quy trình biên dịch chương trình C](#bai-02)
- [#3. Thiết lập môi trường và HelloWorld đầu tiên](#bai-03)
</details>

<details>
<summary><b>Chương 02: Biến, Kiểu dữ liệu và Toán tử</b></summary>

- [#4. Cú pháp cơ bản và Comment trong C](#bai-04)
- [#5. Biến và Quy tắc đặt tên biến](#bai-05)
- [#6. Kiểu dữ liệu cơ bản và Kích thước vùng nhớ](#bai-06)
- [#7. Cơ chế ép kiểu dữ liệu (Type Casting)](#bai-07)
- [#8. Bài Tập Lab 01](#bai-08)
- [#9. Chữa Bài Tập Lab 01](#bai-09)
</details>

<details>
<summary><b>Chương 03: Hằng số & Nhập xuất dữ liệu (User Input)</b></summary>

- [#10. Toán tử trong C](#bai-10)
- [#11. Hằng số trong C (const & #define)](#bai-11)
- [#12. Nhập xuất dữ liệu (printf, scanf & fgets)](#bai-12)
- [#13. Bài Tập Lab 02](#bai-13)
- [#14. Chữa Bài Tập Lab 02](#bai-14)
</details>

<details>
<summary><b>Chương 04: Cấu trúc điều khiển & Ra quyết định</b></summary>

- [#15. Câu lệnh điều kiện if / else / else if](#bai-15)
- [#16. Câu lệnh lựa chọn switch / case](#bai-16)
- [#17. Toán tử ba ngôi (Ternary Operator)](#bai-17)
- [#18. Bài Tập Lab 03](#bai-18)
- [#19. Chữa Bài Tập Lab 03](#bai-19)
</details>

<details>
<summary><b>Chương 05: Vòng lặp & Điều khiển luồng</b></summary>

- [#20. Vòng lặp while và do...while](#bai-20)
- [#21. Vòng lặp for](#bai-21)
- [#22. Câu lệnh điều khiển luồng break, continue](#bai-22)
- [#23. Bài Tập Lab 04](#bai-23)
- [#24. Chữa Bài Tập Lab 04](#bai-24)
</details>

<details>
<summary><b>Chương 06: Mảng (Array) và Chuỗi ký tự (String)</b></summary>

- [#25. Mảng một chiều và mảng hai chiều](#bai-25)
- [#26. Chuỗi ký tự (String) trong C](#bai-26)
- [#27. Thư viện xử lý chuỗi <string.h>](#bai-27)
- [#28. Bài Tập Lab 05](#bai-28)
- [#29. Chữa Bài Tập Lab 05](#bai-29)
</details>

<details>
<summary><b>Chương 07: Hàm (Function) và Đệ quy (Recursion)</b></summary>

- [#30. Định nghĩa và cách sử dụng Hàm](#bai-30)
- [#31. Truyền tham số: Tham trị (Value) vs Tham chiếu (Reference)](#bai-31)
- [#32. Phạm vi của biến (Scope)](#bai-32)
- [#33. Hàm đệ quy (Recursion)](#bai-33)
- [#34. Bài Tập Lab 06](#bai-34)
- [#35. Chữa Bài Tập Lab 06](#bai-35)
</details>

<details>
<summary><b>Chương 08: Cấu trúc (Struct) & Kiểu liệt kê (Enum)</b></summary>

- [#36. Cấu trúc dữ liệu Struct](#bai-36)
- [#37. Kiểu liệt kê Enum và từ khóa typedef](#bai-37)
- [#38. Bài Tập Lab 07](#bai-38)
- [#39. Chữa Bài Tập Lab 07](#bai-39)
</details>

<details>
<summary><b>Chương 09: Xử lý tệp tin & Quản lý bộ nhớ động</b></summary>

- [#40. Xử lý tệp tin cơ bản trong C](#bai-40)
- [#41. Cấp phát bộ nhớ động trên Heap (malloc, calloc, realloc, free)](#bai-41)
- [#42. Bài Tập Lab 08](#bai-42)
- [#43. Chữa Bài Tập Lab 08](#bai-43)
</details>

<details>
<summary><b>Phần II: C Embedded (Lập trình nhúng chuyên sâu)</b></summary>

- [#44. Con trỏ toàn tập: Normal, Void, Function Pointer & Arithmetic](#bai-44)
- [#45. Thao tác bit chuyên sâu: Set, Clear, Toggle, Check Bit](#bai-45)
- [#46. Tiền xử lý, Macro Function vs Inline Function](#bai-46)
- [#47. Struct Alignment và Struct Packing (#pragma pack)](#bai-47)
- [#48. Union & Ứng dụng can thiệp thanh ghi Register](#bai-48)
- [#49. Static & Extern trong lập trình module hóa](#bai-49)
- [#50. Volatile: Chống tối ưu hóa trình biên dịch & xử lý ngắt ISR](#bai-50)
- [#51. Const lưu Flash & Hàm __weak tạo Callback Driver](#bai-51)
- [#52. Cấu trúc phân vùng bộ nhớ MCU (Flash, SRAM, Stack, Heap)](#bai-52)
- [#53. Chống dội phím Debounce & Bật/Tắt Debug Log thực tế](#bai-53)
</details>

<details>
<summary><b>Phần III: Giải chi tiết bộ câu hỏi trắc nghiệm ôn tập tuyển dụng</b></summary>

- [#54. Phân tích logic biên dịch chi tiết 10 câu hỏi cuối khóa](#bai-54)
</details>

---

<div id="bai-01"></div>

# CHƯƠNG 01: GIỚI THIỆU VÀ THIẾT LẬP MÔI TRƯỜNG

## #1. Giới thiệu ngôn ngữ lập trình C

### 1. Khái niệm
Ngôn ngữ C là một ngôn ngữ lập trình **hướng cấu trúc** (structured programming) cực kỳ mạnh mẽ, được Dennis Ritchie phát triển vào năm 1972 để viết hệ điều hành UNIX. C đóng vai trò là "ngôn ngữ mẹ" của rất nhiều ngôn ngữ hiện đại như C++, Java, C#, PHP, JavaScript...

### 2. Đặc điểm nổi bật của C
- 🔹 **Gần gũi phần cứng** – Cho phép thao tác trực tiếp trên các ô nhớ, thanh ghi của vi xử lý.
- 🔹 **Tốc độ thực thi tối đa** – Tốc độ thực thi tiệm cận ngôn ngữ Assembly (hợp ngữ), nhanh hơn rất nhiều so với các ngôn ngữ thông dịch.
- 🔹 **Kích thước gọn nhẹ** – Trình biên dịch sinh ra mã máy có kích thước rất nhỏ, cực kỳ phù hợp cho các vi điều khiển có bộ nhớ hạn chế.
- 🔹 **Tính di động (Portability)** – Mã nguồn viết bằng C có thể biên dịch chạy trên nhiều nền tảng phần cứng khác nhau mà không cần sửa đổi lớn.

---

<div id="bai-02"></div>

## #2. Quy trình biên dịch chương trình C

### 1. Định nghĩa
C là một ngôn ngữ **biên dịch (Compiled Language)**. Mã nguồn viết bằng ngôn ngữ tự nhiên (`.c`, `.h`) bắt buộc phải được xử lý qua bộ công cụ gọi là **Toolchain** (Compiler & Linker) để dịch hoàn toàn thành file mã máy nhị phân (`.exe`, `.hex`, `.elf`) thì CPU mới hiểu và thực thi được.

### 2. Sơ đồ 4 bước biên dịch kinh điển
```
[File .c] ──(Tiền xử lý - Preprocessing)──> [File .i] ──(Biên dịch - Compilation)──> [File .s (Asm)] ──(Hợp dịch - Assembly)──> [File .o / .obj] ──(Liên kết - Linking)──> [File thực thi]
```

### 3. Chi tiết các giai đoạn

| # | Giai đoạn | Vai trò nhiệm vụ | File sinh ra |
|---|---|---|---|
| 1 | **Tiền xử lý (Preprocessing)** | Loại bỏ comment, nạp các file header (`#include`), thay thế các hằng số macro (`#define`). | `.i` |
| 2 | **Biên dịch (Compilation)** | Phân tích cú pháp ngôn ngữ C và dịch sang ngôn ngữ đại diện mức thấp là Assembly (Hợp ngữ). | `.s` hoặc `.asm` |
| 3 | **Hợp dịch (Assembly)** | Dịch các lệnh Assembly thành mã máy nhị phân dạng Object Code (Mã đối tượng). | `.o` hoặc `.obj` |
| 4 | **Liên kết (Linking)** | Ghép nối các file Object Code của dự án và các file thư viện hệ thống thành tệp thực thi cuối cùng. | `.exe` (PC) hoặc `.hex`/`.bin` (MCU) |

---

<div id="bai-03"></div>

## #3. Thiết lập môi trường và HelloWorld đầu tiên

### 1. Các công cụ lập trình C phổ biến

**Môi trường PC:**
- 🔥 **VS Code** (Kết hợp Extension *C/C++* của Microsoft và *Code Runner*) - Khuyên dùng vì nhẹ và đẹp.
- **MinGW / GCC** - Bộ trình biên dịch chuẩn mã nguồn mở cho Windows.
- Dev-C++, Code::Blocks (Dành cho người mới học).

**Môi trường Nhúng (Embedded):**
- **STM32CubeIDE** (STM32), **Keil C uVision** (ARM/8051), **Arduino IDE** (AVR, ESP32), **ESP-IDF** (ESP32).

### 2. Viết chương trình Hello World đầu tiên

```c
#include <stdio.h> // Khai báo thư viện vào/ra chuẩn để dùng hàm printf

int main() {
    // printf dùng để xuất dữ liệu ra màn hình console
    printf("Hello World! Chào mừng bạn đến với C Embedded.\n");
    return 0; // Trả về 0 báo hiệu chương trình chạy thành công
}
```

### 3. Biên dịch thủ công bằng Command Line (GCC)
Mở terminal tại thư mục chứa file `main.c` và chạy lệnh:
```bash
gcc main.c -o HelloWorldApp.exe  # Biên dịch sang file thực thi
./HelloWorldApp.exe               # Chạy file thực thi
```

---

<div id="bai-04"></div>

# CHƯƠNG 02: BIẾN, KIỂU DỮ LIỆU VÀ TOÁN TỬ

## #4. Cú pháp cơ bản và Comment trong C

### 1. Cú pháp
- ✅ **Kết thúc câu lệnh:** Mọi câu lệnh trong C bắt buộc phải kết thúc bằng dấu chấm phẩy `;`.
- ✅ **Khối mã:** Các đoạn mã liên quan hoặc nằm trong hàm, vòng lặp phải được đặt trong cặp dấu ngoặc nhọn `{}`.
- ✅ **Phân biệt chữ hoa/thường:** C là ngôn ngữ cực kỳ nhạy cảm với chữ hoa/thường. `myVar` và `myvar` là hai biến khác nhau.

### 2. Cách comment code (Ghi chú)

```c
// Đây là comment ngắn trên 1 dòng

/* 
   Đây là comment dài
   trên nhiều dòng khác nhau
   dùng để giải thích logic phức tạp
*/
```

---

<div id="bai-05"></div>

## #5. Biến và Quy tắc đặt tên biến

### 1. Cú pháp khai báo biến
```c
<Kiểu_dữ_liệu> <Tên_biến> = <Giá_trị_khởi_tạo>;
```

### 2. Ví dụ
```c
int ledStatus = 1;
float temperature = 36.5;
```

### 3. Quy tắc đặt tên biến bắt buộc
- ❌ **Không** bắt đầu bằng chữ số (Ví dụ: `1stSensor` là lỗi, `sensor1st` là đúng).
- ❌ **Không** chứa khoảng trắng và các ký tự đặc biệt như `@`, `#`, `$`, `%`...
- ❌ **Không** được trùng với các từ khóa hệ thống (`int`, `char`, `return`, `for`, `switch`...).
- 🔹 Có thể chứa chữ cái, chữ số và dấu gạch dưới `_`.

---

<div id="bai-06"></div>

## #6. Kiểu dữ liệu cơ bản và Kích thước vùng nhớ

### 1. Khái niệm
Kiểu dữ liệu xác định kích thước vùng nhớ mà trình biên dịch sẽ cấp phát cho biến và cách thức lưu trữ dữ liệu đó trong RAM.

### 2. Bảng tổng hợp các kiểu dữ liệu trên CPU 32-bit/64-bit

| Kiểu dữ liệu | Ý nghĩa | Kích thước (Bytes) | Định dạng xuất/nhập | Khoảng giá trị |
|---|---|:---:|:---:|---|
| `char` | Ký tự / Số nguyên nhỏ | 1 byte | `%c` hoặc `%d` | `-128` đến `127` |
| `unsigned char` | Số nguyên nhỏ không dấu | 1 byte | `%u` | `0` đến `255` |
| `short` | Số nguyên ngắn | 2 bytes | `%hd` | `-32,768` đến `32,767` |
| `unsigned short`| Số nguyên ngắn không dấu | 2 bytes | `%hu` | `0` đến `65,535` |
| `int` | Số nguyên tiêu chuẩn | 4 bytes | `%d` | `-2,147,483,648` đến `2.147.483.647` |
| `unsigned int`| Số nguyên không dấu | 4 bytes | `%u` | `0` đến `4.294.967.295` |
| `long long` | Số nguyên siêu dài | 8 bytes | `%lld` | $\pm 9 \times 10^{18}$ |
| `float` | Số thực độ chính xác đơn | 4 bytes | `%f` | 6 chữ số sau dấu thập phân |
| `double` | Số thực độ chính xác kép | 8 bytes | `%lf` | 15 chữ số sau dấu thập phân |

---

<div id="bai-07"></div>

## #7. Cơ chế ép kiểu dữ liệu (Type Casting)

### 1. Ép kiểu ngầm định (Implicit Conversion)
Trình biên dịch tự động chuyển kiểu dữ liệu nhỏ hơn sang kiểu dữ liệu lớn hơn để tránh mất mát dữ liệu mà không cần lập trình viên can thiệp.
```c
int myInt = 5;
double myDouble = myInt; // Tự động ép kiểu sang 5.000000
```

### 2. Ép kiểu tường minh (Explicit Casting)
Lập trình viên chỉ định ép kiểu bằng cách đặt tên kiểu dữ liệu mong muốn trong dấu ngoặc đơn `()` ngay trước biến/giá trị cần chuyển đổi.
```c
int totalPoints = 17;
int totalSubjects = 5;
float gpa1 = totalPoints / totalSubjects;         // Kết quả: 3.000000 (do phép chia nguyên 17/5 = 3)
float gpa2 = (float)totalPoints / totalSubjects;  // Kết quả: 3.400000 (ép sang float trước khi chia)
```

---

<div id="bai-08"></div>

## #8. Bài Tập Lab 01

### Yêu cầu
Tạo chương trình khai báo thông số cấu hình một chip vi điều khiển bao gồm:
- `mcuName`: Tên chip vi điều khiển (Chuỗi ký tự - dùng con trỏ `char*`).
- `flashSizeKB`: Dung lượng bộ nhớ Flash (Số nguyên `int`).
- `ramSizeKB`: Dung lượng RAM (Số nguyên `int`).

**Việc cần làm:**
1. Tính toán tỷ lệ phần trăm kích thước RAM trên bộ nhớ Flash (Tỷ lệ % = RAM / Flash * 100).
2. Yêu cầu in ra console theo đúng định dạng format như sau:
```
MCU: [mcuName]
Flash: [flashSizeKB] KB
RAM: [ramSizeKB] KB
Tỷ lệ RAM/Flash: [calculatedRatio]%
```

---

<div id="bai-09"></div>

## #9. Chữa Bài Tập Lab 01

```c
#include <stdio.h>

int main() {
    // Khai báo cấu hình MCU
    const char* mcuName = "STM32F407VET6";
    const int flashSizeKB = 512;
    const int ramSizeKB = 192;

    // Tính toán tỷ lệ phần trăm (Bắt buộc ép kiểu sang float để tránh phép chia nguyên)
    float ratio = ((float)ramSizeKB / flashSizeKB) * 100;

    // In dữ liệu ra màn hình
    printf("MCU: %s\n", mcuName);
    printf("Flash: %d KB\n", flashSizeKB);
    printf("RAM: %d KB\n", ramSizeKB);
    printf("Tỷ lệ RAM/Flash: %.2f%%\n", ratio); // %.2f để lấy 2 chữ số thập phân, %% để in dấu '%'

    return 0;
}
```

> 💡 **Giải thích:**
> - Sử dụng từ khóa `const` vì các thông số phần cứng này của MCU là cố định, không thay đổi.
> - Sử dụng `(float)ramSizeKB` để ép kiểu dữ liệu từ số nguyên sang số thực trước khi thực hiện phép chia, đảm bảo kết quả phép chia không bị làm tròn về `0`.

---

<div id="bai-10"></div>

# CHƯƠNG 03: HẰNG SỐ & NHẬP XUẤT DỮ LIỆU (USER INPUT)

## #10. Toán tử trong C

### 1. Bảng phân loại toán tử đầy đủ

| Loại toán tử | Danh sách toán tử | Ví dụ | Ý nghĩa |
|---|---|---|---|
| **Số học** | `+`, `-`, `*`, `/`, `%` | `7 % 3` | Trả về phần dư là `1` |
| **Tăng/Giảm** | `++`, `--` | `i++`, `--j` | Tăng/giảm giá trị biến đi 1 đơn vị |
| **Quan hệ** | `==`, `!=`, `>`, `<`, `>=`, `<=` | `a != b` | So sánh giá trị hai vế |
| **Logic** | `&&`, `\|\|`, `!` | `a && b` | Phép toán logic AND, OR, NOT |
| **Gán** | `=`, `+=`, `-=`, `*=`, `/=` | `a += 5` | Tương đương `a = a + 5` |

### 🆚 So sánh `i++` và `++i`

> 📌 **Khác biệt cốt lõi nằm ở thời điểm thay đổi giá trị:**

```c
// i++ (Post-increment): Lấy giá trị hiện tại để tính toán trước, sau đó mới cộng i lên 1
int i = 5;
int x = i++;       // x = 5, i tăng lên 6
printf("%d %d", x, i); // Kết quả: 5 6

// ++i (Pre-increment): Cộng i lên 1 trước, rồi lấy giá trị mới đó để thực hiện tính toán
int j = 5;
int y = ++j;       // j tăng lên 6, y = 6
printf("%d %d", y, j); // Kết quả: 6 6
```

---

<div id="bai-11"></div>

## #11. Hằng số trong C (const & #define)

Hằng số là đại lượng có giá trị không thể thay đổi trong suốt vòng đời của chương trình.

### 🆚 So sánh `const` và `#define`

| Đặc điểm | `const` | `#define` |
|---|---|---|
| **Cơ chế hoạt động** | Khai báo biến hằng có kiểu dữ liệu rõ ràng. | Định nghĩa macro, thay thế chuỗi văn bản ở bước tiền xử lý. |
| **Kiểm tra kiểu dữ liệu** | Có (Đảm bảo an toàn kiểu dữ liệu). | ❌ Không (Dễ gây lỗi nếu định nghĩa sai). |
| **Cấp phát bộ nhớ** | Chiếm không gian bộ nhớ (lưu RAM hoặc Flash). | ❌ Không tốn bộ nhớ (Chỉ thay thế trực tiếp chữ). |
| **Địa chỉ con trỏ** | Có thể lấy địa chỉ ô nhớ bằng toán tử `&`. | ❌ Không thể lấy địa chỉ (Chỉ là giá trị văn bản). |

```c
// Khai báo bằng const
const float PI = 3.14159;

// Khai báo bằng #define
#define LED_PIN  13
```

---

<div id="bai-12"></div>

## #12. Nhập xuất dữ liệu (printf, scanf & fgets)

### 1. Xuất dữ liệu bằng `printf`
In dữ liệu có định dạng ra màn hình console bằng chuỗi định dạng (Format specifier).
```c
int age = 20;
printf("Tôi năm nay %d tuổi.\n", age);
```

### 2. Nhập dữ liệu bằng `scanf`
Nhận dữ liệu từ bàn phím. **Bắt buộc truyền địa chỉ của biến bằng toán tử `&`**.
```c
int baudrate;
printf("Nhập Baudrate cấu hình: ");
scanf("%d", &baudrate); // &baudrate truyền địa chỉ để ghi dữ liệu trực tiếp vào biến
```

### 3. Vấn đề của `scanf` và giải pháp bằng `fgets`
- ❌ `scanf("%s", str)` sẽ dừng đọc ngay lập tức khi gặp ký tự khoảng trắng đầu tiên (dấu cách), do đó không thể dùng để nhập chuỗi họ và tên đầy đủ.
- ✅ **Giải pháp:** Sử dụng `fgets()` để nhập chuỗi có khoảng trắng một cách an toàn và ngăn ngừa lỗi tràn bộ đệm (Buffer Overflow).
```c
char mcuConfig[50];
printf("Nhập chuỗi cấu hình: ");
fgets(mcuConfig, sizeof(mcuConfig), stdin); // Nhận chuỗi an toàn
```

---

<div id="bai-13"></div>

## #13. Bài Tập Lab 02

### Yêu cầu
Viết chương trình nhập thông tin kiểm thử mạch sạc Pin lithium từ bàn phím gồm:
- Tên mạch sạc (Chuỗi ký tự có khoảng trắng).
- Điện áp đo được (Số thực `float`).
- Dòng sạc đo được (Số thực `float`).

**Việc cần làm:**
1. Tính công suất sạc hiện tại: $P = U \times I$.
2. In báo cáo kiểm thử ra màn hình theo định dạng:
```
========= BÁO CÁO KIỂM THỬ SẠC CHIP =========
Mạch sạc: [Tên mạch sạc]
Điện áp: [Voltage] V
Dòng sạc: [Current] A
Công suất sạc: [Power] W
============================================
```

---

<div id="bai-14"></div>

## #14. Chữa Bài Tập Lab 02

```c
#include <stdio.h>
#include <string.h>

int main() {
    char chargerName[50];
    float voltage = 0.0;
    float current = 0.0;

    // 1. Nhập tên mạch sạc (chấp nhận khoảng trắng)
    printf("Nhập tên mạch sạc: ");
    fgets(chargerName, sizeof(chargerName), stdin);
    
    // Loại bỏ ký tự xuống dòng '\n' ở cuối chuỗi sinh ra do nhấn Enter khi dùng fgets
    chargerName[strcspn(chargerName, "\n")] = '\0';

    // 2. Nhập thông số điện áp và dòng sạc
    printf("Nhập điện áp đo được (V): ");
    scanf("%f", &voltage);

    printf("Nhập dòng sạc đo được (A): ");
    scanf("%f", &current);

    // 3. Tính công suất
    float power = voltage * current;

    // 4. In báo cáo
    printf("\n========= BÁO CÁO KIỂM THỬ SẠC CHIP =========\n");
    printf("Mạch sạc: %s\n", chargerName);
    printf("Điện áp: %.2f V\n", voltage);
    printf("Dòng sạc: %.2f A\n", current);
    printf("Công suất sạc: %.2f W\n", power);
    printf("============================================\n");

    return 0;
}
```

---

<div id="bai-15"></div>

# CHƯƠNG 04: CẤU TRÚC ĐIỀU KHIỂN & RA QUYẾT ĐỊNH

## #15. Câu lệnh điều kiện if / else / else if

### 1. Khái niệm
Cấu trúc điều kiện cho phép chương trình kiểm tra các biểu thức logic (đúng hay sai) để thực hiện rẽ nhánh thực thi mã nguồn.

### 2. Ví dụ thực tế
```c
int batteryLevel = 15;

if (batteryLevel > 20) {
    printf("Thiết bị hoạt động bình thường.\n");
} else if (batteryLevel > 5) {
    printf("Cảnh báo: Pin yếu! Đèn LED chuyển màu vàng.\n");
} else {
    printf("Cảnh báo: Pin cực yếu! Tự động tắt thiết bị để bảo vệ pin.\n");
}
```

---

<div id="bai-16"></div>

## #16. Câu lệnh lựa chọn switch / case

`switch` dùng để so sánh một biến (chỉ chấp nhận kiểu số nguyên `int`, `char`, hoặc `enum`) với một danh sách các giá trị hằng số cố định (`case`).

### 1. Cú pháp cơ bản
```c
char command = 'S';

switch (command) {
    case 'S':
        printf("Bắt đầu hệ thống (Start)\n");
        break; // Thoát ngay ra khỏi switch
    case 'P':
        printf("Tạm dừng hệ thống (Pause)\n");
        break;
    default:
        printf("Lệnh không hợp lệ!\n");
}
```

> ⚠️ **Hiện tượng rớt lệnh (Fall-through):** Nếu bạn bỏ quên từ khóa `break` ở cuối mỗi khối `case`, chương trình sẽ tiếp tục chạy lọt xuống toàn bộ câu lệnh của `case` ngay phía dưới mặc dù giá trị so sánh không hề khớp, cho đến khi nó gặp lệnh `break` tiếp theo hoặc đi hết khối `switch`.

---

<div id="bai-17"></div>

## #17. Toán tử ba ngôi (Ternary Operator)

Là cú pháp rút gọn cực kỳ tối giản của cấu trúc `if...else`.

### 1. Cú pháp
```c
<Biến> = ( <Điều_kiện> ) ? <Giá_trị_nếu_đúng> : <Giá_trị_nếu_sai>;
```

### 2. Ví dụ
```c
int relayState = 1;
// Nếu relayState bằng 1 thì gán chuỗi "ON", ngược lại gán "OFF"
const char* message = (relayState == 1) ? "Relay ON" : "Relay OFF";
```

---

<div id="bai-18"></div>

## #18. Bài Tập Lab 03

### Yêu cầu
Viết chương trình điều khiển quạt tản nhiệt thông minh dựa trên nhiệt độ đo được từ cảm biến nhiệt độ hệ thống.
Nhập nhiệt độ `temperature` (số thực `float`) từ bàn phím.

**Logic điều khiển:**
- Nếu nhiệt độ $\ge 45.0$ độ C: In ra thông báo `"Bật quạt tốc độ tối đa (HIGH)"`.
- Nếu nhiệt độ từ $30.0$ đến $< 45.0$ độ C: In ra thông báo `"Bật quạt tốc độ trung bình (MEDIUM)"`.
- Ngược lại (Nhiệt độ $< 30.0$ độ C): In ra thông báo `"Tắt quạt (FAN OFF)"`.

> Thực hiện bằng cả 2 cách: dùng `if...else` và dùng toán tử ba ngôi lồng nhau.

---

<div id="bai-19"></div>

## #19. Chữa Bài Tập Lab 03

```c
#include <stdio.h>

int main() {
    float temp = 0.0;
    printf("Nhập nhiệt độ cảm biến (°C): ");
    scanf("%f", &temp);

    // Cách 1: Dùng cấu trúc if...else if...else
    printf("[Cách 1] Trạng thái quạt: ");
    if (temp >= 45.0) {
        printf("Bật quạt tốc độ tối đa (HIGH)\n");
    } else if (temp >= 30.0) {
        printf("Bật quạt tốc độ trung bình (MEDIUM)\n");
    } else {
        printf("Tắt quạt (FAN OFF)\n");
    }

    // Cách 2: Dùng toán tử ba ngôi lồng nhau (Gọn nhưng cần viết cẩn thận)
    printf("[Cách 2] Trạng thái quạt: %s\n", 
           (temp >= 45.0) ? "Bật quạt tốc độ tối đa (HIGH)" : 
           (temp >= 30.0) ? "Bật quạt tốc độ trung bình (MEDIUM)" : "Tắt quạt (FAN OFF)");

    return 0;
}
```

---

<div id="bai-20"></div>

# CHƯƠNG 05: VÒNG LẶP & ĐIỀU KHIỂN LUỒNG

## #20. Vòng lặp while và do...while

Vòng lặp được sử dụng để thực thi lặp đi lặp lại một đoạn mã nhiều lần tự động dựa trên điều kiện kiểm tra.

### 1. Vòng lặp `while`
Kiểm tra điều kiện **trước** khi thực thi khối lệnh. Nếu điều kiện sai ngay từ đầu, vòng lặp sẽ không chạy lần nào.
```c
int count = 0;
while (count < 3) {
    printf("Đếm: %d\n", count);
    count++;
}
```

### 2. Vòng lặp `do...while`
Thực thi khối lệnh bên trong **ít nhất một lần**, sau đó mới tiến hành kiểm tra điều kiện để quyết định có lặp tiếp hay không.
```c
int sensorData = 100;
do {
    // Dòng này luôn chạy ít nhất 1 lần cho dù điều kiện sai ngay lập tức
    printf("Đọc dữ liệu cảm biến: %d\n", sensorData);
} while (sensorData < 50); // Điều kiện sai, vòng lặp kết thúc
```

### 🆚 So sánh `while` và `do...while`

| Đặc điểm | `while` | `do...while` |
|---|---|---|
| **Thời điểm kiểm tra** | Kiểm tra điều kiện ở đầu vòng lặp. | Kiểm tra điều kiện ở cuối vòng lặp. |
| **Số lần lặp tối thiểu**| `0` lần. | Ít nhất `1` lần. |
| **Trường hợp áp dụng** | Khi không chắc chắn khối lệnh có cần thực thi hay không. | Khi bắt buộc phải thực hiện lệnh trước (ví dụ: hiển thị menu lựa chọn, đọc thử dữ liệu cảm biến). |

---

<div id="bai-21"></div>

## #21. Vòng lặp for

Thường được dùng khi bạn đã biết trước chính xác số lần lặp cụ thể.

### 1. Cú pháp
```c
for (khởi_tạo_biến; điều_kiện_lặp; cập_nhật_biến) {
    // Thân vòng lặp
}
```

### 2. Ví dụ
```c
// Nháy LED 5 lần
for (int i = 1; i <= 5; i++) {
    printf("LED nháy lần thứ: %d\n", i);
}
```

---

<div id="bai-22"></div>

## #22. Câu lệnh điều khiển luồng break, continue

Dùng để can thiệp trực tiếp vào luồng hoạt động của vòng lặp đang chạy.

### 1. Câu lệnh `break`
Thoát ra khỏi vòng lặp chứa nó **ngay lập tức** cho dù điều kiện lặp vẫn còn đúng.
```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) break; // Thoát vòng lặp khi i bằng 5
    printf("%d ", i); // Chỉ in ra: 1 2 3 4
}
```

### 2. Câu lệnh `continue`
Bỏ qua toàn bộ phần mã lệnh còn lại bên dưới của lượt lặp hiện tại để chuyển ngay sang lượt kiểm tra điều kiện/lần lặp tiếp theo.
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // Bỏ qua in giá trị 3
    printf("%d ", i); // Kết quả in ra: 1 2 4 5
}
```

---

<div id="bai-23"></div>

## #23. Bài Tập Lab 04

### Yêu cầu
Viết chương trình mô phỏng quá trình bộ lọc nhiễu đọc liên tục dữ liệu điện áp từ kênh bộ chuyển đổi tương tự-số (ADC) của vi điều khiển.
Yêu cầu chương trình lặp liên tục việc nhập điện áp (số thực `float` từ bàn phím) cho tới khi nhận được giá trị điện áp bằng `99.0` (giá trị báo hiệu dừng kiểm thử).

**Yêu cầu logic:**
1. Nếu điện áp nhập vào $< 0.0$V hoặc $> 5.0$V: In ra cảnh báo `"Điện áp lỗi! Bỏ qua mẫu đo này"`, không tính mẫu đo này và chuyển ngay sang lần đọc tiếp theo (Dùng `continue`).
2. Nếu nhập đúng điện áp hợp lệ (từ $0.0$V đến $5.0$V): Tính tổng điện áp và đếm số mẫu đo hợp lệ.
3. Khi nhập `99.0`: Thoát vòng lặp (Dùng `break`) và in ra màn hình **Giá trị điện áp trung bình** của các mẫu đo hợp lệ.

---

<div id="bai-24"></div>

## #24. Chữa Bài Tập Lab 04

```c
#include <stdio.h>

int main() {
    float voltage = 0.0;
    float sumVoltage = 0.0;
    int validSamplesCount = 0;

    printf("--- HỆ THỐNG GIÁM SÁT ADC (Nhập 99.0 để dừng và tính kết quả) ---\n");

    while (1) { // Tạo vòng lặp vô hạn
        printf("Nhập giá trị điện áp đo được (V): ");
        scanf("%f", &voltage);

        if (voltage == 99.0) {
            break; // Thoát vòng lặp
        }

        if (voltage < 0.0 || voltage > 5.0) {
            printf("=> Cảnh báo: Điện áp lỗi! Bỏ qua mẫu đo này.\n");
            continue; // Chuyển ngay sang lần lặp tiếp theo
        }

        // Tích lũy mẫu đo hợp lệ
        sumVoltage += voltage;
        validSamplesCount++;
    }

    // In kết quả trung bình
    if (validSamplesCount > 0) {
        float avgVoltage = sumVoltage / validSamplesCount;
        printf("\n============================================\n");
        printf("Tổng số mẫu đo hợp lệ: %d\n", validSamplesCount);
        printf("Điện áp trung bình đo được: %.3f V\n", avgVoltage);
        printf("============================================\n");
    } else {
        printf("\nKhông có mẫu đo hợp lệ nào được nhập!\n");
    }

    return 0;
}
```

---

<div id="bai-25"></div>

# CHƯƠNG 06: MẢNG (ARRAY) VÀ CHUỖI KÝ TỰ (STRING)

## #25. Mảng một chiều và mảng hai chiều

Mảng là tập hợp gồm các phần tử có **cùng kiểu dữ liệu**, được lưu trữ tại các ô nhớ **liên tiếp nhau** trên bộ nhớ RAM.

### 1. Mảng một chiều (1D Array)
- **Khai báo và khởi tạo:** `int adcBuffer[5] = {1024, 2048, 512, 4095, 0};`
- **Truy cập phần tử:** Chỉ số mảng (Index) bắt đầu từ `0` đến `size - 1`.
  - `adcBuffer[0]` trả về `1024` (phần tử đầu tiên).
  - `adcBuffer[4]` trả về `0` (phần tử thứ 5).

### 2. Mảng hai chiều (2D Array - Ma trận dữ liệu)
Được dùng để lưu trữ dữ liệu dạng bảng (gồm dòng và cột).
```c
// Mảng 2 dòng, 3 cột
int ledMatrix[2][3] = {
    {1, 0, 1}, // Dòng 0
    {0, 1, 0}  // Dòng 1
};
printf("Trạng thái LED hàng 1, cột 2: %d\n", ledMatrix[1][2]); // In ra 0
```

---

<div id="bai-26"></div>

## #26. Chuỗi ký tự (String) trong C

### 1. Bản chất
Trong ngôn ngữ C không có kiểu dữ liệu `string` riêng biệt. Chuỗi thực chất là một **mảng một chiều chứa các ký tự kiểu `char`**, kết thúc bằng ký tự đặc biệt gọi là **Ký tự kết thúc chuỗi `'\0'` (Null Terminator)** có giá trị ASCII bằng 0.

### 2. Ví dụ khai báo
- Trình biên dịch tự động cấp phát kích thước mảng gồm 6 ký tự gồm: `'H', 'e', 'l', 'l', 'o', '\0'`.
```c
char message[] = "Hello";
```

---

<div id="bai-27"></div>

## #27. Thư viện xử lý chuỗi <string.h>

Để thao tác với chuỗi, C cung cấp các hàm rất mạnh mẽ trong thư viện `<string.h>`:

| Tên hàm | Vai trò | Ví dụ sử dụng |
|---|---|---|
| `strlen(str)` | Trả về độ dài thực tế của chuỗi (không đếm ký tự `'\0'`). | `strlen("C")` -> Trả về `1` |
| `strcpy(dest, src)` | Sao chép toàn bộ chuỗi nguồn `src` ghi đè vào chuỗi đích `dest`. | `strcpy(buf, "ST")` |
| `strcat(dest, src)` | Nối chuỗi nguồn `src` vào sau chuỗi đích `dest`. | `strcat(buf, "Mcu")` |
| `strcmp(s1, s2)` | So sánh hai chuỗi theo mã ASCII. Trả về `0` nếu hai chuỗi giống hệt nhau. | `strcmp("A", "A")` -> `0` |

---

<div id="bai-28"></div>

## #28. Bài Tập Lab 05

### Yêu cầu
Viết chương trình lọc nhiễu tín hiệu ADC bằng phương pháp **lọc trung bình động (Moving Average Filter)**.
Cho một mảng tĩnh chứa 8 mẫu dữ liệu ADC đo được từ cảm biến:
`int adcValues[8] = {4012, 3980, 4005, 4020, 3995, 4010, 4030, 3988};`

**Việc cần làm:**
1. Duyệt mảng để tính tổng toàn bộ giá trị phần tử của mảng.
2. Tìm ra giá trị lớn nhất (Max) và giá trị nhỏ nhất (Min) trong mảng mẫu đo này.
3. Tính toán giá trị trung bình lọc nhiễu sau khi đã loại bỏ đi 1 mẫu lớn nhất và 1 mẫu nhỏ nhất (Để triệt tiêu nhiễu đỉnh đột ngột):
$$\text{Giá trị trung bình} = \frac{\text{Tổng} - \text{Max} - \text{Min}}{6}$$
4. In kết quả tính toán chi tiết ra màn hình.

---

<div id="bai-29"></div>

## #29. Chữa Bài Tập Lab 05

```c
#include <stdio.h>

int main() {
    int adcValues[8] = {4012, 3980, 4005, 4020, 3995, 4010, 4030, 3988};
    int totalSum = 0;
    int maxVal = adcValues[0];
    int minVal = adcValues[0];

    // Duyệt mảng để tìm Max, Min và tính Tổng
    for (int i = 0; i < 8; i++) {
        totalSum += adcValues[i];
        
        if (adcValues[i] > maxVal) {
            maxVal = adcValues[i]; // Cập nhật Max
        }
        if (adcValues[i] < minVal) {
            minVal = adcValues[i]; // Cập nhật Min
        }
    }

    // Tính toán trung bình sau khi loại bỏ 1 phần tử lớn nhất và 1 phần tử nhỏ nhất
    float filteredAverage = (float)(totalSum - maxVal - minVal) / 6;

    // In kết quả
    printf("Mẫu ADC đo được: ");
    for(int i = 0; i < 8; i++) {
        printf("%d ", adcValues[i]);
    }
    printf("\n--------------------------------------------\n");
    printf("Mẫu lớn nhất (Nhiễu HIGH): %d\n", maxVal);
    printf("Mẫu nhỏ nhất (Nhiễu LOW): %d\n", minVal);
    printf("Tổng ban đầu: %d\n", totalSum);
    printf("Giá trị trung bình lọc nhiễu (Sau bộ lọc): %.2f\n", filteredAverage);

    return 0;
}
```

---

<div id="bai-30"></div>

# CHƯƠNG 07: HÀM (FUNCTION) VÀ ĐỆ QUY (RECURSION)

## #30. Định nghĩa và cách sử dụng Hàm

Hàm là một khối mã lệnh độc lập có tên dùng để thực hiện một công việc cụ thể, giúp mã nguồn tái sử dụng được nhiều lần và dễ quản lý lỗi.

### 1. Khai báo nguyên mẫu hàm (Function Prototype)
Khai báo ở đầu file (hoặc file `.h`) để báo cho trình biên dịch biết sự tồn tại của hàm trước khi gọi nó trong hàm `main`.
```c
int addNumbers(int a, int b); // Khai báo nguyên mẫu
```

### 2. Định nghĩa hàm chi tiết
```c
int addNumbers(int a, int b) {
    return a + b; // Trả về kết quả phép cộng
}
```

---

<div id="bai-31"></div>

## #31. Truyền tham số: Tham trị (Value) vs Tham chiếu (Reference)

### 🆚 So sánh bản chất truyền tham số

| Đặc điểm | Truyền tham trị (Pass by Value) | Truyền tham chiếu (Pass by Reference) |
|---|---|---|
| **Bản chất truyền** | Hàm tạo ra một bản sao giá trị của biến truyền vào trong bộ nhớ Stack tạm thời của hàm. | Hàm nhận trực tiếp **Địa chỉ ô nhớ** của biến gốc ngoài hàm thông qua biến con trỏ. |
| **Tác động biến gốc**| ❌ Mọi thay đổi giá trị tham số trong hàm **không** làm thay đổi giá trị của biến gốc bên ngoài. | Thay đổi giá trị thông qua phép giải trỏ (`*ptr`) sẽ **thay đổi trực tiếp** biến gốc ngoài hàm. |
| **Hiệu năng truyền** | Tốn dung lượng Stack và thời gian copy nếu cấu trúc truyền vào có kích thước lớn (như Struct dài). | Rất nhanh và tiết kiệm bộ nhớ vì chỉ truyền địa chỉ kích thước cố định (4 bytes trên MCU 32-bit). |

---

<div id="bai-32"></div>

## #32. Phạm vi của biến (Scope)

- **Biến cục bộ (Local Variable):** Khai báo bên trong một hàm hoặc khối lệnh `{}`. Chỉ có thể sử dụng nội bộ bên trong hàm đó và biến sẽ tự động giải phóng khỏi bộ nhớ Stack khi thoát khỏi hàm.
- **Biến toàn cục (Global Variable):** Khai báo ngoài tất cả các hàm. Có thể truy cập và thay đổi bởi bất kỳ hàm nào trong toàn dự án. Tồn tại suốt thời gian chương trình hoạt động.

---

<div id="bai-33"></div>

## #33. Hàm đệ quy (Recursion)

Hàm đệ quy là hàm tự gọi lại chính nó trong thân hàm của nó.

### ⚠️ Quy tắc bắt buộc khi viết đệ quy
Một hàm đệ quy bắt buộc phải thiết kế hai thành phần chính:
1. **Điểm dừng (Base Case):** Điều kiện thoát đệ quy để dừng việc gọi lại chính nó, nếu thiếu sẽ dẫn đến việc gọi vô hạn gây lỗi tràn bộ nhớ Stack (Stack Overflow).
2. **Bước đệ quy (Recursive Case):** Gọi lại chính hàm đó với tham số có kích thước nhỏ hơn để dần tiến về điểm dừng.

```c
// Tính giai thừa n! = n * (n-1) * ... * 1
int factorial(int n) {
    if (n <= 1) return 1; // Điểm dừng
    return n * factorial(n - 1); // Bước đệ quy
}
```

---

<div id="bai-34"></div>

## #34. Bài Tập Lab 06

### Yêu cầu
Viết hàm đệ quy tính toán số hạng thứ `n` trong **dãy số Fibonacci**.
Biết dãy Fibonacci bắt đầu bằng: $F(0) = 0, F(1) = 1$, số hạng tiếp theo bằng tổng hai số hạng trước đó: $F(n) = F(n-1) + F(n-2)$.

**Yêu cầu chương trình:**
1. Nhập số nguyên `n` từ bàn phím.
2. Viết hàm đệ quy `int fibonacci(int n)`.
3. In ra giá trị Fibonacci tương ứng.

---

<div id="bai-35"></div>

## #35. Chữa Bài Tập Lab 06

```c
#include <stdio.h>

// Hàm đệ quy tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n == 0) return 0; // Điểm dừng 1
    if (n == 1) return 1; // Điểm dừng 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Bước đệ quy
}

int main() {
    int n = 0;
    printf("Nhập vị trí n cần tính Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui lòng nhập số nguyên n >= 0!\n");
    } else {
        printf("Số Fibonacci thứ %d là: %d\n", n, fibonacci(n));
    }
    return 0;
}
```

---

<div id="bai-36"></div>

# CHƯƠNG 08: CẤU TRÚC (STRUCT) & KIỂU LIỆT KÊ (ENUM)

## #36. Cấu trúc dữ liệu Struct

Struct cho phép gộp nhiều biến thành phần có các kiểu dữ liệu khác nhau (như `char`, `int`, `float`) thành một khối cấu trúc duy nhất để đại diện cho một đối tượng cụ thể.

### 1. Khai báo và khởi tạo struct
```c
struct SensorConfig {
    char id[10];
    int sampleRateMs;
    float upperLimit;
};

int main() {
    // Khởi tạo biến struct
    struct SensorConfig tempSensor = {"TEMP01", 1000, 85.5};
    
    // Truy cập phần tử bằng toán tử dấu chấm '.'
    printf("Sensor ID: %s, Rate: %d\n", tempSensor.id, tempSensor.sampleRateMs);
    return 0;
}
```

---

<div id="bai-37"></div>

## #37. Kiểu liệt kê Enum và từ khóa typedef

### 1. Kiểu liệt kê Enum
Enum dùng để khai báo một nhóm các hằng số nguyên liên tiếp có tên hiển thị trực quan, giúp mã nguồn rõ ràng, dễ đọc hơn so với việc định nghĩa các số nguyên rời rạc.
```c
enum SystemState {
    SYSTEM_INIT,     // Tự động bằng 0
    SYSTEM_RUNNING,  // Bằng 1
    SYSTEM_STOPPED,  // Bằng 2
    SYSTEM_ERROR = 99, // Gán hằng số cụ thể 99
    SYSTEM_RETRY     // Tự động bằng 100 (phần tử trước đó + 1)
};
```

### 2. Từ khóa `typedef`
Dùng để gán một cái tên mới (Alias) ngắn gọn và dễ hiểu hơn cho một kiểu dữ liệu phức tạp có sẵn.
```c
typedef struct {
    float latitude;
    float longitude;
} GpsCoordinates; // Đặt tên mới GpsCoordinates thay cho cụm "struct ..." phức tạp

GpsCoordinates currentPos = {10.762622, 106.660172}; // Khai báo cực kỳ ngắn gọn!
```

---

<div id="bai-38"></div>

## #38. Bài Tập Lab 07

### Yêu cầu
Trong lập trình nhúng, khi giao tiếp truyền nhận UART, dữ liệu thường được đóng gói theo dạng Frame (Gói tin).
Yêu cầu thiết kế một gói tin UART sử dụng `typedef struct` đặt tên là `UartPacket` chứa các thông tin:
- `header`: Byte khởi đầu gói tin (Kiểu `unsigned char`).
- `payloadLength`: Kích thước phần dữ liệu thực (Kiểu `unsigned char`).
- `dataBuffer`: Mảng chứa tối đa 10 byte dữ liệu thực (Mảng `unsigned char`).
- `checksum`: Byte kiểm tra lỗi truyền dữ liệu (Kiểu `unsigned char`).

**Việc cần làm:**
1. Khai báo một gói tin UART mẫu với `header = 0xAA`, nạp dữ liệu thực gồm 4 phần tử `{10, 20, 30, 40}` vào mảng `dataBuffer`.
2. Viết một hàm `void calculateChecksum(UartPacket *packet)` để tính toán byte `checksum` của gói tin đó. Biết thuật toán tính checksum bằng phép cộng XOR toàn bộ các byte trong mảng dữ liệu thực `dataBuffer` của gói tin.
3. In gói tin đầy đủ ra màn hình dưới dạng mã Hex (`%02X`).

---

<div id="bai-39"></div>

## #39. Chữa Bài Tập Lab 07

```c
#include <stdio.h>

// Định nghĩa gói tin UART bằng typedef struct
typedef struct {
    unsigned char header;
    unsigned char payloadLength;
    unsigned char dataBuffer[10];
    unsigned char checksum;
} UartPacket;

// Hàm tính checksum sử dụng truyền tham chiếu bằng con trỏ
void calculateChecksum(UartPacket *packet) {
    unsigned char tempXor = 0;
    for (int i = 0; i < packet->payloadLength; i++) {
        // Toán tử -> được dùng để truy cập phần tử struct thông qua biến con trỏ
        tempXor ^= packet->dataBuffer[i]; 
    }
    packet->checksum = tempXor; // Ghi giá trị checksum vào struct gốc
}

int main() {
    // Khởi tạo gói tin mẫu
    UartPacket myPacket;
    myPacket.header = 0xAA;
    myPacket.payloadLength = 4;
    myPacket.dataBuffer[0] = 10;
    myPacket.dataBuffer[1] = 20;
    myPacket.dataBuffer[2] = 30;
    myPacket.dataBuffer[3] = 40;
    myPacket.checksum = 0;

    // Tính checksum bằng cách truyền địa chỉ của gói tin vào hàm
    calculateChecksum(&myPacket);

    // In thông tin gói tin ra màn hình dưới dạng mã HEX
    printf("===== GÓI TIN UART TRUYỀN ĐI =====\n");
    printf("Header: 0x%02X\n", myPacket.header);
    printf("Length: %d\n", myPacket.payloadLength);
    printf("Payload Data: ");
    for(int i = 0; i < myPacket.payloadLength; i++) {
        printf("0x%02X ", myPacket.dataBuffer[i]);
    }
    printf("\nChecksum XOR: 0x%02X\n", myPacket.checksum);
    printf("==================================\n");

    return 0;
}
```

---

<div id="bai-40"></div>

# CHƯƠNG 09: XỬ LÝ TỆP TIN & QUẢN LÝ BỘ NHỚ ĐỘNG

## #40. Xử lý tệp tin cơ bản trong C

C cung cấp con trỏ tệp tin `FILE*` của thư viện `<stdio.h>` để lưu trữ và đọc dữ liệu từ ổ cứng. Quy trình làm việc bắt buộc: Mở File -> Đọc/Ghi -> Đóng File.

```c
#include <stdio.h>

int main() {
    // 1. Mở file ghi dữ liệu (Chế độ "w" - Write)
    FILE *fptr = fopen("sensor_data.txt", "w");
    if (fptr == NULL) {
        printf("Lỗi mở tệp tin!\n");
        return 1;
    }

    // 2. Ghi dữ liệu dạng văn bản vào tệp
    fprintf(fptr, "Nhiệt độ: 32.5 C\nĐộ ẩm: 70%%\n");

    // 3. Đóng file để hoàn tất lưu xuống ổ cứng
    fclose(fptr);
    return 0;
}
```

---

<div id="bai-41"></div>

## #41. Cấp phát bộ nhớ động trên Heap (malloc, calloc, realloc, free)

Thông thường các biến khai báo tĩnh được lưu trữ tự động trên **Stack** với kích thước cố định lúc compile. Để cấp phát vùng nhớ linh hoạt khi chạy chương trình (Runtime), ta sử dụng bộ nhớ **Heap** thông qua thư viện `<stdlib.h>`.

### 1. Chi tiết 4 hàm cấp phát động cốt lõi

- **`malloc(size)` (Memory Allocation):** Cấp phát một khối bộ nhớ có kích thước `size` bytes. Giá trị trong vùng nhớ này chưa được khởi tạo (Chứa toàn bộ các byte rác).
- **`calloc(n, size)` (Contiguous Allocation):** Cấp phát vùng nhớ cho mảng gồm `n` phần tử, mỗi phần tử có kích thước `size` bytes. Đặc biệt: **Tự động xóa toàn bộ các byte trong vùng nhớ này về giá trị 0**.
- **`realloc(ptr, new_size)`:** Thay đổi kích thước khối bộ nhớ đã được cấp phát động tại con trỏ `ptr` sang kích thước mới `new_size` bytes.
- **`free(ptr)`:** Giải phóng vùng nhớ Heap đã cấp phát để trả lại tài nguyên RAM cho hệ thống.

```c
int *ptr = (int*) malloc(5 * sizeof(int)); // Cấp phát động mảng gồm 5 số int
if (ptr != NULL) {
    ptr[0] = 100;
    free(ptr); // Bắt buộc phải giải phóng sau khi sử dụng xong
    ptr = NULL; // Tránh con trỏ lạc (Dangling Pointer)
}
```

---

<div id="bai-42"></div>

## #42. Bài Tập Lab 08

### Yêu cầu
Viết chương trình cho phép người dùng nhập vào số lượng mẫu đo cảm biến `n` từ bàn phím.
Sử dụng hàm cấp phát bộ nhớ động `calloc` để cấp phát chính xác vùng nhớ lưu trữ cho mảng `n` phần tử số nguyên.

**Yêu cầu logic:**
1. Tiến hành nhập từng giá trị mẫu đo từ bàn phím.
2. Tính toán tổng và giá trị trung bình của mảng động này.
3. Sử dụng `realloc` để mở rộng thêm mảng động thêm 1 phần tử ở cuối để chèn thêm 1 mẫu đo mới và in toàn bộ mảng ra màn hình.
4. Bắt buộc giải phóng bộ nhớ động bằng `free()` sau khi hoàn thành.

---

<div id="bai-43"></div>

## #43. Chữa Bài Tập Lab 08

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Nhập số lượng mẫu đo ban đầu: ");
    scanf("%d", &n);

    // 1. Cấp phát động mảng n phần tử kiểu int bằng calloc (Giá trị tự động bằng 0)
    int *samples = (int*) calloc(n, sizeof(int));
    if (samples == NULL) {
        printf("Lỗi: Không đủ bộ nhớ Heap!\n");
        return 1;
    }

    // 2. Nhập các mẫu đo
    int sum = 0;
    for(int i = 0; i < n; i++) {
        printf("Nhập mẫu đo %d: ", i + 1);
        scanf("%d", &samples[i]);
        sum += samples[i];
    }
    printf("Trung bình mẫu đo ban đầu: %.2f\n", (float)sum / n);

    // 3. Mở rộng mảng thêm 1 phần tử bằng realloc
    printf("\nMở rộng mảng để nhận thêm mẫu đo mới...\n");
    int *temp = (int*) realloc(samples, (n + 1) * sizeof(int));
    if (temp == NULL) {
        printf("Lỗi: Mở rộng bộ nhớ thất bại!\n");
        free(samples); // Giải phóng vùng nhớ cũ
        return 1;
    }
    samples = temp; // Cập nhật lại con trỏ mới hợp lệ
    
    // Nhập giá trị cho phần tử mới thêm vào ở cuối
    printf("Nhập mẫu đo bổ sung: ");
    scanf("%d", &samples[n]);
    n++; // Tăng kích thước đếm mảng lên n + 1

    // 4. In mảng động sau khi mở rộng
    printf("Toàn bộ mảng động hiện tại: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", samples[i]);
    }
    printf("\n");

    // 5. Giải phóng vùng nhớ động - RẤT QUAN TRỌNG
    free(samples);
    samples = NULL;

    return 0;
}
```

---

<div id="bai-44"></div>

# PHẦN II: C EMBEDDED (LẬP TRÌNH NHÚNG CHUYÊN SÂU)

## #44. Con trỏ toàn tập: Normal, Void, Function Pointer & Arithmetic

### 1. Con trỏ Void (Void Pointer - `void*`)
- Là con trỏ vạn năng, có thể nhận địa chỉ của bất kỳ kiểu dữ liệu nào (`char`, `int`, `struct`...) mà không cần thực hiện ép kiểu tường minh.
- ⚠️ **Lưu ý:** Không thể thực hiện phép toán giải trỏ (`*ptr`) lấy giá trị trực tiếp từ con trỏ `void` nếu không thực hiện ép kiểu về con trỏ dữ liệu cụ thể trước.
```c
int a = 15;
void *vPtr = &a; // Hợp lệ hoàn toàn
// printf("%d", *vPtr); // ❌ Lỗi biên dịch (Không rõ kích thước kiểu dữ liệu trỏ tới)
printf("%d", *(int*)vPtr); // ✅ Đúng: Ép về kiểu (int*) rồi giải trỏ lấy giá trị
```

### 2. Phép toán tịnh tiến con trỏ (Pointer Arithmetic)
Cộng/trừ một số nguyên với con trỏ sẽ dịch chuyển địa chỉ ô nhớ của con trỏ dựa trên **Kích thước của kiểu dữ liệu** mà con trỏ đó đang quản lý:
$$\text{Địa chỉ mới} = \text{Địa chỉ cũ} + (n \times \text{sizeof(Kiểu_dữ_liệu)})$$

```c
char *cPtr = (char*) 0x20000000;
int *iPtr = (int*) 0x20000000;

cPtr++; // Dịch chuyển đi 1 byte  -> Địa chỉ mới: 0x20000001
iPtr++; // Dịch chuyển đi 4 bytes -> Địa chỉ mới: 0x20000004
```

### 3. Con trỏ Hàm (Function Pointer)
- Hàm khi biên dịch sẽ được nạp cố định vào bộ nhớ Flash và bắt đầu bằng một địa chỉ cụ thể. Con trỏ hàm dùng để lưu trữ địa chỉ bắt đầu của hàm đó để có thể gọi thực thi hàm một cách gián tiếp.
- **Ứng dụng lớn trong nhúng:** Viết Driver ngoại vi, làm hàm **Callback** phản hồi sự kiện ngắt, thiết kế máy trạng thái (State Machine).

```c
void toggleLed() {
    printf("Đã đảo trạng thái LED!\n");
}

int main() {
    // Khai báo con trỏ hàm: void (*PtrName)()
    void (*eventCallback)() = toggleLed;
    
    // Gọi thực thi hàm gián tiếp thông qua con trỏ hàm
    eventCallback(); // In ra: "Đã đảo trạng thái LED!"
    return 0;
}
```

---

<div id="bai-45"></div>

## #45. Thao tác bit chuyên sâu: Set, Clear, Toggle, Check Bit

Trong lập trình vi điều khiển, việc cấu hình phần cứng thực chất là thay đổi trạng thái các bit trong các thanh ghi (Register) điều khiển.

### 1. Bảng các phép Bitwise Manipulations kinh điển

Giả sử cần cấu hình hoặc thay đổi trạng thái tại vị trí bit thứ `n` trên thanh ghi (hoặc biến số) `Register`:

| Nhiệm vụ phần cứng | Cú pháp thao tác Bit | Giải thích thuật toán |
|---|---|---|
| **Đặt bit lên 1 (Set Bit)** | `Register \|= (1 << n);` | Sử dụng phép toán logic OR với mặt nạ dịch `1` trái `n` bit. |
| **Xóa bit về 0 (Clear Bit)** | `Register &= ~(1 << n);` | Đảo ngược mặt nạ dịch nhị phân rồi thực hiện phép logic AND. |
| **Đảo trạng thái (Toggle Bit)**| `Register ^= (1 << n);` | Phép toán XOR giúp đảo trạng thái bit $0 \to 1$ hoặc $1 \to 0$. |
| **Kiểm tra bit (Check Bit)** | `if (Register & (1 << n))`| Thực hiện phép AND, nếu kết quả khác 0 tức bit thứ `n` đang là 1. |

```c
// Ví dụ thực tế điều khiển thanh ghi GPIOB
unsigned char GPIOB_ODR = 0x00; // Khởi tạo thanh ghi bằng 0x00 (0000 0000)

GPIOB_ODR |= (1 << 3);  // Đặt bit 3 lên 1 -> GPIOB_ODR = 0x08 (0000 1000)
GPIOB_ODR ^= (1 << 3);  // Đảo bit 3 về 0 -> GPIOB_ODR = 0x00 (0000 0000)
```

---

<div id="bai-46"></div>

## #46. Tiền xử lý, Macro Function vs Inline Function

### 1. Chỉ thị bảo vệ tệp tiêu đề (Header Guards)
Sử dụng `#ifndef` kết hợp `#define` ở tất cả các file header `.h` trong dự án để ngăn ngừa hiện tượng biên dịch lặp đi lặp lại nhiều lần cùng một cấu trúc dữ liệu, gây ra lỗi trùng định nghĩa (Duplicate Definition) cực kỳ khó chịu khi liên kết file.
```c
// File: temp_sensor.h
#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

void read_sensor(void);

#endif // TEMP_SENSOR_H
```

### 🆚 So sánh Macro Function và Inline Function

| Đặc điểm | Macro Function (`#define`) | Inline Function (`inline`) |
|---|---|---|
| **Cơ chế hoạt động** | Thay thế chuỗi văn bản trực tiếp ở bước tiền xử lý trước khi compile. | Trình biên dịch xem xét chèn trực tiếp toàn bộ thân hàm vào nơi gọi hàm. |
| **Kiểm tra kiểu dữ liệu** | ❌ Không kiểm tra kiểu (Dễ gây lỗi logic nghiêm trọng). | Có kiểm tra kiểu dữ liệu nghiêm ngặt của tham số truyền vào. |
| **Quá trình gỡ lỗi (Debug)**| ❌ Cực kỳ khó debug vì code gốc đã bị thay thế trực tiếp chữ. | Dễ dàng gỡ lỗi, đặt breakpoint kiểm tra giá trị bình thường. |

---

<div id="bai-47"></div>

## #47. Struct Alignment và Struct Packing (#pragma pack)

### 1. Hiện tượng Căn chỉnh bộ nhớ (Memory Alignment)
Để tăng tốc độ truy cập dữ liệu của CPU, trình biên dịch tự động chèn thêm các byte rác (Padding Bytes) vào bên trong struct để địa chỉ bắt đầu của các thành viên là bội số kích thước kiểu dữ liệu của chính nó.

```c
struct Sample {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
// Mặc dù tổng thực là 1 + 4 + 1 = 6 bytes, nhưng sizeof(struct Sample) = 12 bytes!
// Do trình biên dịch chèn 3 bytes padding vào sau 'a' và 3 bytes padding vào sau 'c'.
```

### 2. Ép căn lề 1 byte bằng Struct Packing
Trong lập trình nhúng truyền thông UART/SPI/CAN, ta cần gửi gói tin chính xác từng byte (Data Frame) mà không chứa bất kỳ byte rác padding nào. Sử dụng chỉ thị cấu hình `#pragma pack(push, 1)`:

```c
#pragma pack(push, 1) // Ép trình biên dịch căn chỉnh sát từng 1 byte
struct Packet {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
#pragma pack(pop)     // Trả về cấu hình căn chỉnh mặc định của hệ thống

// sizeof(struct Packet) lúc này trả về chính xác 6 bytes!
```

---

<div id="bai-48"></div>

## #48. Union & Ứng dụng can thiệp thanh ghi Register

Union dùng chung 1 vùng nhớ vật lý duy nhất cho toàn bộ các biến thành viên của nó. Kích thước của Union luôn bằng kích thước của phần tử lớn nhất.

### Ứng dụng điều khiển trực tiếp các bit trong thanh ghi Register:
Sự kết hợp hoàn hảo giữa `Union` và cấu trúc `Bit-field` cho phép người lập trình vừa có thể thay đổi nhanh toàn bộ giá trị thanh ghi, vừa có thể ghi cụ thể từng bit cấu hình phần cứng một cách cực kỳ trực quan mà không cần dùng phép dịch bit phức tạp.

```c
typedef union {
    struct {
        unsigned char pin0 : 1; // Chiếm 1 bit
        unsigned char pin1 : 1; // Chiếm 1 bit
        unsigned char pin2 : 1; // Chiếm 1 bit
        unsigned char reserved : 5; // 5 bit còn lại để trống cho đủ 8 bit
    } bits;
    unsigned char regValue; // Giá trị toàn vẹn 8-bit của thanh ghi
} GpioPortRegister;

int main() {
    GpioPortRegister myRegister;
    myRegister.regValue = 0x00; // Xóa toàn bộ thanh ghi về 0 nhanh chóng
    myRegister.bits.pin1 = 1;   // Đặt duy nhất bit pin1 lên 1 cực kỳ trực quan!
    return 0;
}
```

---

<div id="bai-49"></div>

## #49. Static & Extern trong lập trình module hóa

### 1. Từ khóa `static`
- **Static cục bộ (Local Static Variable):** Khai báo bên trong hàm. Biến được khởi tạo một lần duy nhất khi nạp chương trình, giá trị biến được **giữ nguyên không bị giải phóng** khi hàm kết thúc. Biến chuyển từ lưu trữ ở Stack sang phân vùng `.data` hoặc `.bss` của RAM.
- **Static toàn cục (Global Static Variable / Function):** Khai báo ở mức file `.c`. **Giới hạn phạm vi sử dụng của biến/hàm chỉ nằm trong nội bộ file `.c` đó**, file `.c` khác không thể can thiệp được. Giúp đóng gói module an toàn, tránh lỗi trùng tên biến trong dự án lớn.

### 2. Từ khóa `extern`
Dùng để thông báo cho trình biên dịch biết một biến toàn cục đã được định nghĩa tại một file `.c` khác, cho phép chia sẻ sử dụng biến toàn cục này xuyên suốt toàn bộ hệ thống dự án.

```c
// File: bms.c
int batteryPercentage = 95; // Định nghĩa biến toàn cục

// File: lcd.c
extern int batteryPercentage; // Khai báo extern để LCD đọc và hiển thị
```

---

<div id="bai-50"></div>

## #50. Volatile: Chống tối ưu hóa trình biên dịch & xử lý ngắt ISR

### 1. Bản chất của `volatile`
- Từ khóa `volatile` thông báo cho trình biên dịch biết rằng biến này có thể bị thay đổi giá trị bất ngờ từ bên ngoài luồng chạy của chương trình chính.
- **Tác dụng:** Ép buộc CPU **luôn luôn thực hiện đọc/ghi trực tiếp giá trị từ ô nhớ RAM**, ngăn trình biên dịch tối ưu hóa bằng cách đọc giá trị lưu tạm trong các thanh ghi đa năng của lõi CPU.

### 2. Các trường hợp bắt buộc phải sử dụng `volatile` trong Lập trình Nhúng
1. **Biến toàn cục được chia sẻ giữa chương trình phục vụ ngắt (ISR) và chương trình chính (`main`):**
```c
volatile int isButtonPressed = 0; // Bắt buộc phải có volatile

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    isButtonPressed = 1; // Thay đổi giá trị biến trong hàm ngắt
}

int main() {
    while (isButtonPressed == 0) {
        // Nếu thiếu volatile, trình biên dịch có thể tối ưu hóa biến này thành hằng số 0 cố định
        // dẫn tới việc vòng lặp while bị treo vĩnh viễn ở chế độ tối ưu hóa cao.
    }
    printf("Đã xử lý sự kiện nhấn nút!\n");
}
```
2. **Địa chỉ các thanh ghi ngoại vi (Hardware Registers) của MCU.**
3. **Biến chia sẻ dùng chung giữa các Task trong hệ điều hành thời gian thực (RTOS).**

---

<div id="bai-51"></div>

## #51. Const lưu Flash & Hàm __weak tạo Callback Driver

### 1. Từ khóa `const` - Giải phóng RAM lưu vào Flash
Trong các hệ thống nhúng, tài nguyên SRAM cực kỳ quý giá. Khi khai báo mảng/biến cố định (như bảng font chữ OLED, bảng tra cứu dữ liệu cảm biến) bằng từ khóa `const`, trình biên dịch sẽ chuyển toàn bộ dữ liệu này sang lưu trữ cố định trên bộ nhớ **Flash (ROM)**, giúp giải phóng hoàn toàn không gian SRAM cho chương trình hoạt động.

### 2. Từ khóa `__weak` (Hàm yếu)
Từ khóa `__weak` cho phép người viết thư viện Driver định nghĩa trước một hàm Callback mặc định rỗng. Nếu người dùng định nghĩa lại hàm đó trong file `main.c` của mình, trình liên kết (Linker) sẽ tự động ghi đè và ưu tiên thực thi hàm của người dùng mà không xảy ra lỗi trùng lặp định nghĩa.

```c
// Driver UART gốc (Sản xuất):
__weak void UART_RxCallback(uint8_t data) {
    // Hàm mặc định trống, không xử lý gì cả
}

// File main.c của người dùng (Sử dụng driver):
void UART_RxCallback(uint8_t data) {
    printf("Đã nhận ký tự: %c\n", data); // Ghi đè xử lý theo nhu cầu thực tế
}
```

---

<div id="bai-52"></div>

## #52. Cấu trúc phân vùng bộ nhớ MCU (Flash, SRAM, Stack, Heap)

Khi vi điều khiển khởi động, bộ nhớ của nó được phân chia thành các vùng chức năng quản lý riêng biệt cực kỳ chặt chẽ:

```
+-------------------------------------------------------------+
| BỘ NHỚ FLASH (Lưu trữ cố định, không mất dữ liệu khi mất điện) |
| - [ .text   ] : Lưu trữ mã lệnh thực thi của chương trình.   |
| - [ .rodata ] : Lưu trữ các hằng số chỉ đọc (biến const...). |
+-------------------------------------------------------------+
| BỘ NHỚ SRAM  (Lưu trữ tạm thời, mất toàn bộ dữ liệu khi mất điện)|
| - [ .data   ] : Lưu biến toàn cục/static ĐÃ khởi tạo khác 0. |
| - [ .bss    ] : Lưu biến toàn cục/static CHƯA khởi tạo/bằng 0.|
|                                                             |
| - [ HEAP    ] : Bộ nhớ cấp phát động lúc runtime (malloc...)  |
|       |                                                     |
|       v (Phát triển hướng lên địa chỉ cao)                   |
|                                                             |
|       ^ (Phát triển hướng xuống địa chỉ thấp)                 |
|       |                                                     |
| - [ STACK   ] : Biến cục bộ trong hàm, tham số truyền vào,   |
|                 địa chỉ phản hồi hàm ngắt. Quản lý tự động.  |
+-------------------------------------------------------------+
```

> ⚠️ **Lời khuyên thực chiến:** Hạn chế tối đa sử dụng bộ nhớ **Heap** trong các dự án nhúng chạy lâu dài (như thiết bị IoT hoạt động 24/7) để tránh hiện tượng phân mảnh bộ nhớ (Memory Fragmentation), gây sập nguồn hoặc crash hệ điều hành RTOS bất ngờ.

---

<div id="bai-53"></div>

## #53. Chống dội phím Debounce & Bật/Tắt Debug Log thực tế

### 1. Kỹ thuật chống dội nút nhấn bằng phần mềm (Software Debouncing)
Nút nhấn cơ học khi nhấn sẽ tạo ra các xung rung động sụt áp HIGH/LOW xen kẽ liên tục trong khoảng $10 - 20$ms. Để tránh việc MCU nhận diện nhầm thành nhấn nút nhiều lần, ta viết hàm đọc kiểm tra kèm chống dội:

```c
int read_button_debounced() {
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET) { // Nhận tín hiệu nhấn
        HAL_Delay(20); // Đợi 20ms vượt qua vùng xung rung dội của nút nhấn
        if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET) { // Xác nhận lại trạng thái
            while(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_RESET); // Đợi thả tay ra hoàn toàn
            return 1; // Trả về tín hiệu nhấn thành công
        }
    }
    return 0;
}
```

### 2. Kỹ thuật Bật/Tắt Debug Log tiết kiệm dung lượng Flash bằng Preprocessor
Khi phát triển sản phẩm (giai đoạn Debug), ta cần rất nhiều log `printf` để kiểm tra lỗi hệ thống. Khi đưa vào sản xuất thương mại (giai đoạn Release), ta cần xóa sạch các dòng log này để tăng tốc độ MCU và tiết kiệm Flash. Ta thực hiện bằng Macro thông minh:

```c
#define DEBUG_MODE_ENABLED  1 // Đặt 1 để BẬT Log, đặt 0 để xóa sạch hoàn toàn dòng Log khi dịch

#if DEBUG_MODE_ENABLED
    #define LOG_INFO(fmt, ...) printf("[INFO] " fmt "\n", ##__VA_ARGS__)
#else
    #define LOG_INFO(fmt, ...) // Tự động biến mất dòng lệnh khi biên dịch, không tốn 1 byte Flash nào
#endif

int main() {
    LOG_INFO("Hệ thống khởi động thành công. Nhiệt độ: %.1f C", 28.5);
    return 0;
}
```

---

<div id="bai-54"></div>

# PHẦN III: GIẢI CHI TIẾT BỘ CÂU HỎI TRẮC NGHIỆM ÔN TẬP TUYỂN DỤNG

### ❓ Câu 1: Trình biên dịch hiển thị kết quả gì?
```c
int i;
for (i = 1; i < 101; ++i)
    i++;
printf("%d", i);
```
- **Đáp án:** `101`
- **Phân tích chi tiết:**
  1. Ban đầu khởi động vòng lặp `i = 1`.
  2. Thân vòng lặp thực hiện lệnh `i++` -> `i` tăng lên `2`.
  3. Kết thúc thân vòng lặp, chuyển sang bước cập nhật của vòng lặp `for` là `++i` -> `i` tăng tiếp lên `3`.
  4. Lần lặp tiếp theo điều kiện `3 < 101` đúng. Thân lặp chạy `i++` -> `4`. Cập nhật `++i` -> `5`.
  5. Tiến trình lặp liên tục làm `i` tăng theo dãy số lẻ: $1 \to 3 \to 5 \to 7 \dots \to 99$.
  6. Khi `i = 99`, điều kiện `99 < 101` đúng. Thân vòng lặp chạy `i++` -> `100`. Bước cập nhật `++i` -> `101`.
  7. Lần kiểm tra tiếp theo kiểm tra điều kiện: `101 < 101` (Sai) -> Vòng lặp dừng lại ngay lập tức.
  8. Lệnh `printf` in giá trị cuối cùng của `i` là `101`.

---

### ❓ Câu 2: Phân tích kết quả chạy đoạn mã sau:
```c
char i;
for (i = 0; i < 128;) {
    i++;
    printf("%d ", i);
}
```
- **Đáp án:** Vòng lặp vô hạn (Infinite Loop).
- **Phân tích chi tiết:**
  - Kiểu dữ liệu `char` trong C mặc định là số nguyên có dấu 8-bit (Signed 8-bit), có khoảng giá trị từ `-128` đến `127`.
  - Vòng lặp tăng biến `i` liên tục từ `0` lên đến `127`.
  - Khi `i` đạt giá trị lớn nhất là `127`, thực hiện lệnh `i++`. Lúc này xảy ra hiện tượng **tràn số có dấu (Signed Overflow)**, giá trị của `i` tự động quay về giá trị nhỏ nhất của kiểu là `-128`.
  - Kiểm tra điều kiện vòng lặp lúc này: `-128 < 128` (Đúng). Vòng lặp lại tiếp tục chạy và tăng từ `-128` về `0` rồi lên `127` rồi lại tràn về `-128`.
  - Điều kiện kiểm tra `i < 128` luôn luôn ĐÚNG vĩnh viễn, tạo ra vòng lặp vô hạn gây treo chương trình.

---

### ❓ Câu 3: Tính giá trị in ra màn hình của các biến:
```c
typedef union {
    struct Register {
        unsigned int value1 : 3; // Bit-field 3 bit (Khoảng giá trị 0-7)
        unsigned int value2 : 2; // Bit-field 2 bit (Khoảng giá trị 0-3)
        unsigned int value3 : 3; // Bit-field 3 bit (Khoảng giá trị 0-7)
    } value;
    unsigned int raw; // Số nguyên 32-bit dùng chung vùng nhớ
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
  1. Đây là một `union`, do đó struct bit-field `value` (chiếm tổng cộng 8 bit liên tiếp) và biến số nguyên `raw` **chia sẻ chung một vùng nhớ vật lý vật lý duy nhất**.
  2. Câu lệnh `demo_reg.raw = 0xFF;` ghi giá trị `0xFF` (mã nhị phân là `1111 1111` - 8 bit đều là 1) đè hoàn toàn lên phân vùng nhớ chung.
  3. Lúc này khi tiến hành đọc các trường bit-field của struct `value`:
     - `value1` chiếm 3 bit đầu: đọc 3 bit nhị phân chứa toàn số 1 (`111`) -> Giá trị thập phân là `7`.
     - `value2` chiếm 2 bit tiếp theo: đọc 2 bit nhị phân chứa toàn số 1 (`11`) -> Giá trị thập phân là `3`.
     - `value3` chiếm 3 bit cuối: đọc 3 bit nhị phân chứa toàn số 1 (`111`) -> Giá trị thập phân là `7`.
     - `raw` hiển thị nguyên giá trị được gán là `0xFF` -> thập phân là `255`.
  4. Màn hình xuất ra chuỗi chính xác: `7 3 7 255`.

---

### ❓ Câu 4: Phân tích kết quả thực thi chương trình:
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
  - `funcPtr` và `funcPtr2` là các con trỏ hàm không nhận tham số và trả về kiểu `void`.
  - `funcPtr` được gán trỏ đến hàm `hello`.
  - `funcPtr2` được gán trỏ đến hàm `welcome`.
  - Lệnh gán `funcPtr = funcPtr2;` sao chép trực tiếp địa chỉ hàm mà `funcPtr2` đang lưu (địa chỉ của hàm `welcome`) vào cho con trỏ `funcPtr`.
  - Do đó, khi thực thi lệnh `funcPtr()`, hệ thống nhảy đến thực hiện mã lệnh tại địa chỉ hàm `welcome()`. Màn hình hiển thị chữ: `"welcome"`.

---

### ❓ Câu 5: Kết quả in ra là gì?
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
  - Chỉ thị tiền xử lý `#ifdef HCET` kiểm tra xem tên Macro `HCET` **đã được định nghĩa hay chưa**, hoàn toàn không phụ thuộc và không quan tâm đến giá trị gán của Macro đó là âm hay dương.
  - Do `HCET` đã được định nghĩa bằng câu lệnh `#define HCET -1`, biểu thức kiểm tra trả về ĐÚNG.
  - Khối mã chứa hàm `printMes()` in chữ `"WIN"` được giữ lại biên dịch, khối mã in chữ `"LOSE"` bị loại bỏ hoàn toàn trong bước xử lý của tiền xử lý.

---

### ❓ Câu 6: Tính toán giá trị các biến Enum:
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
  - Quy ước tăng tự động của Enum trong C: Các hằng số không gán giá trị rõ ràng sẽ tự động lấy giá trị của hằng số khai báo liền trước đó cộng thêm 1.
  - `one` = 1
  - `two` = 2
  - `three` tự động bằng `two + 1` = `3`.
  - `five` tự động bằng `three + 1` = `4`.
  - `four` được gán hằng số cụ thể = `4`.
  - `six` tự động bằng hằng số khai báo liền trước nó là `four + 1` = `4 + 1` = `5`.
  - `seven` = 7.
  - Kết quả in lần lượt của `five` (4), `four` (4), `six` (5) là: `4 4 5`.

---

### ❓ Câu 7: Phân tích địa chỉ giá trị trỏ cuối cùng của đoạn mã:
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
  1. Khởi tạo giá trị: `a=1`, `b=2`, `c=3`, `d=4`. Các con trỏ trỏ tương ứng.
  2. Tráo đổi địa chỉ:
     - `pb = &c;` -> `pb` trỏ đến biến `c`.
     - `pb = &d;` -> `pb` trỏ sang biến `d`.
     - `pa = &b;` -> `pa` trỏ đến biến `b`.
     - `pc = &a;` -> `pc` trỏ đến biến `a`.
  3. Thay đổi giá trị biến:
     - `b = a + d;` -> `b = 1 + 4 = 5` (Biến `b` đổi từ 2 thành 5).
     - `d = b + c;` -> `d = 5 + 3 = 8` (Biến `d` đổi từ 4 thành 8).
  4. Thực hiện gán con trỏ tiếp theo:
     - `pb = pc;` -> `pb` trỏ đến biến `a` (Địa chỉ `pc` đang trỏ).
     - `pb = pa;` -> `pb` trỏ đến biến `b` (Địa chỉ `pa` đang trỏ).
     - `pa = &b;` -> `pa` trỏ đến biến `b`.
     - `pc = pd;` -> `pc` trỏ sang trỏ biến `d` (Địa chỉ `pd` đang trỏ).
     - `pb = &c;` -> `pb` trỏ sang trỏ biến `c` trực tiếp.
     - `pd = &d;` -> `pd` trỏ sang trỏ biến `d` trực tiếp.
  5. Lấy giá trị giải trỏ cuối cùng của các con trỏ:
     - `*pa` (Trỏ đến `b`) = `5`.
     - `*pb` (Trỏ đến `c`) = `3`.
     - `*pc` (Trỏ đến `d`) = `8`.
     - `*pd` (Trỏ đến `d`) = `8`.
  6. Kết quả hiển thị: `5 3 8 8`.

---

### ❓ Câu 8: Phân tích hoạt động của hàm printf sau:
```c
int arr[] = {1, 2, 3, 4, 5};
int *ptr = arr;
printf("%d %d %d %d %d %d", *ptr, ++*ptr++, (*ptr)++, *ptr++, *++ptr, ++*ptr);
```
- **Đáp án:** `4 5 3 2 2 2` (Trên hầu hết các trình biên dịch C tiêu chuẩn như GCC hay MSVC chạy trên kiến trúc x86/ARM, các tham số truyền vào hàm `printf` sẽ được tính toán đánh giá (Evaluate) theo thứ tự từ **PHẢI QUA TRÁI** trước, sau đó mới in ra màn hình từ TRÁI QUA PHẢI).
- **Phân tích logic chạy từng bước từ Phải qua Trái:**
  - Ban đầu mảng `arr = {1, 2, 3, 4, 5}`. Con trỏ `ptr` trỏ tới phần tử thứ nhất `arr[0]` (Chứa giá trị `1`).
  1. **`++*ptr` (Tham số thứ 6):**
     - Giải trỏ lấy giá trị tại con trỏ đang đứng (`arr[0] = 1`), tăng giá trị đó lên 1 đơn vị -> `arr[0]` trở thành `2`.
     - *Kết quả trả về cho tham số 6:* `2`.
  2. **`*++ptr` (Tham số thứ 5):**
     - Dịch chuyển con trỏ `ptr` lên 1 phần tử trước (Trỏ đến `arr[1]` đang có giá trị là 2). Giải trỏ lấy giá trị tại đó.
     - *Kết quả trả về cho tham số 5:* `2`.
  3. **`*ptr++` (Tham số thứ 4):**
     - Phép toán hậu tố tăng con trỏ: Lấy giá trị tại con trỏ hiện hành trước (`arr[1] = 2`), sau đó dịch con trỏ `ptr` tiến lên 1 phần tử (Trỏ tới `arr[2]` có giá trị là 3).
     - *Kết quả trả về cho tham số 4:* `2`.
  4. **`(*ptr)++` (Tham số thứ 3):**
     - Lấy giá trị tại vị trí `ptr` đang trỏ hiện tại (`arr[2] = 3`), trả về giá trị `3` trước, sau đó tăng giá trị thực của `arr[2]` trong mảng lên 1 đơn vị thành `4`.
     - *Kết quả trả về cho tham số 3:* `3`.
  5. **`++*ptr++` (Tham số thứ 2):**
     - Phép toán kết hợp: Lấy giá trị tại con trỏ `ptr` đang trỏ (`arr[2] = 4`), tăng giá trị đó lên thành `5` (Tức `arr[2]` đổi thành `5`).
     - *Kết quả trả về cho tham số 2:* `5`.
     - Sau đó thực hiện hậu tố tăng dịch con trỏ `ptr++`, `ptr` dịch chuyển trỏ sang phần tử tiếp theo là `arr[3]` (Có giá trị ban đầu là `4`).
  6. **`*ptr` (Tham số thứ 1):**
     - Giải trỏ lấy giá trị tại vị trí hiện hành của con trỏ `ptr` (`arr[3]`). Giá trị hiện tại là `4`.
     - *Kết quả trả về cho tham số 1:* `4`.
  - Tổng hợp in toàn bộ chuỗi giá trị từ trái qua phải: `4 5 3 2 2 2`.

---

### ❓ Câu 9: Trình biên dịch hiển thị ký tự gì?
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
  1. Struct `MyStruct` chứa các trường kiểu `int` (mỗi trường 4 bytes). Vùng nhớ của struct `a` được cấp phát liên tục trong RAM:
     - `a.a` (offset 0 đến 3 bytes) -> chứa giá trị `65` (Ký tự 'A').
     - `a.b` (offset 4 đến 7 bytes) -> chứa giá trị `66` (Ký tự 'B').
     - `a.c` (offset 8 đến 11 bytes) -> chứa giá trị `67` (Ký tự 'C').
     - `a.d` (offset 12 đến 15 bytes) -> chứa giá trị `68` (Ký tự 'D').
  2. Con trỏ `b` kiểu `MyStruct2*` được ép kiểu trỏ vào địa chỉ bắt đầu của struct `a` (offset 0).
  3. Kích thước của `MyStruct2` là `sizeof(MyStruct2) = 1` byte (Chỉ chứa một biến `char a`).
  4. Thực hiện phép toán cộng con trỏ `b += 4;` dịch con trỏ đi:
     $$\text{Dịch chuyển} = 4 \times \text{sizeof}(MyStruct2) = 4 \times 1 = 4\text{ bytes}$$
  5. Con trỏ `b` lúc này trỏ chính xác vào byte thứ 4 (offset 4) của struct `a`.
  6. Địa chỉ offset 4 của struct `a` chính là điểm bắt đầu của trường dữ liệu `a.b` (Chứa giá trị số nguyên `66`).
  7. Lệnh `b->a` đọc dữ liệu 1 byte tại vị trí trỏ dưới dạng biến `char`. Giá trị đọc được là `66`.
  8. Định dạng `%c` in mã ASCII `66` ra màn hình, hiển thị đúng ký tự: `'B'`.

---

### ❓ Câu 10: Tính kích thước vùng nhớ (sizeof) của các struct:
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
    - `long b` (4 bytes) yêu cầu căn lề địa chỉ chia hết cho 4, do đó compiler tự động chèn **2 bytes padding** rác vào bytes [2, 3]. `b` chiếm bytes [4, 5, 6, 7].
    - `char c` (1 byte) chiếm byte [8].
    - Tổng kích thước hiện tại là 9 bytes. Tuy nhiên, kích thước toàn bộ struct bắt buộc phải là bội số của thành phần có kích thước lớn nhất (`long` - 4 bytes), do đó compiler chèn tiếp **3 bytes padding** rác vào cuối.
    - Kết quả: `sizeof(tem)` = **12 bytes**.
  - **Với struct `tem2`:**
    - `short a` (2 bytes) chiếm bytes [0, 1].
    - `char c` (1 byte) chiếm byte [2].
    - `long b` (4 bytes) yêu cầu căn lề địa chỉ chia hết cho 4. Compiler tự động chèn **1 byte padding** rác vào vị trí byte [3]. `b` chiếm bytes [4, 5, 6, 7].
    - Tổng kích thước lúc này là 8 bytes (Đã là bội số của 4, không cần chèn thêm padding ở cuối).
    - Kết quả: `sizeof(tem2)` = **8 bytes**.

---

Chúc bạn có những giây phút ôn tập hiệu quả và chinh phục thành công đỉnh cao Lập trình Nhúng! 🖥️🚀
