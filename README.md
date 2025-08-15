# Hành Trình 100 Ngày với C/C++ 

Kho chứa này ghi lại hành trình 100 ngày học và làm chủ ngôn ngữ C++, từ những khái niệm cơ bản đến các ứng dụng nâng cao trong xử lý ảnh, hệ thống nhúng và học máy.

---

## **Day 1: Nền Tảng Vững Chắc & Quy Trình Làm Việc**

Ngày đầu tiên tập trung vào việc thiết lập một môi trường làm việc chuyên nghiệp và nắm vững các toán tử cơ bản trong C++.

### **Kiến thức đã học**

1.  **Làm quen với C++**:
    * Viết và biên dịch thành công chương trình `Hello, World!` kinh điển.

2.  **Làm chủ Toán tử (Operators)**:
    * Thực hành và tìm hiểu sâu về các nhóm toán tử quan trọng, mỗi nhóm được tổ chức trong một file riêng biệt để dễ dàng quản lý:
        * **Số học**: `arithmetic.cpp` (`+`, `-`, `*`, `/`, `%`, `++`, `--`)
        * **Gán**: `assignment.cpp` (`=`, `+=`, `-=`, `*=`, `/=`, `%=`)
        * **Quan hệ**: `relational.cpp` (`==`, `!=`, `>`, `<`, `>=`, `<=`)
        * **Logic**: `logical.cpp` (`&&`, `||`, `!`)
        * **Trên bit**: `bitwise.cpp` (`&`, `|`, `^`, `~`, `<<`, `>>`)
        * **Khác**: `miscellaneous.cpp` (bao gồm `?:`, `sizeof`, con trỏ `&`/`*`, và quản lý bộ nhớ động `new`/`delete`)

---

### **Môi trường & Công cụ**

* **Ngôn ngữ**: C++ (sử dụng chuẩn C++17)
* **Trình biên dịch**: g++
* **Hệ thống Build**: Makefile
* **Quản lý phiên bản**: Git & GitHub 
* **Trình soạn thảo**: Visual Studio Code

---

### **Quy trình làm việc**

Dự án được quản lý bởi một `Makefile` tiện lợi nằm trong từng thư mục `day*`.

* **Biên dịch một file cụ thể**:
    ```bash
    # Di chuyển vào thư mục của ngày học, ví dụ: day1
    cd day1

    # Biên dịch file bạn muốn, ví dụ: arithmetic.cpp
    make arithmetic
    ```

* **Chạy file gần nhất đã biên dịch**:
    ```bash
    make run
    ```

* **Dọn dẹp các file thực thi**:
    ```bash
    make clean
    ```

---

## **Day 2: Làm Chủ Luồng Điều Khiển & Vòng Lặp**

Trong ngày thứ hai, học cách ra lệnh cho chương trình tự đưa ra quyết định và thực hiện các công việc lặp đi lặp lại một cách hiệu quả

### **Kiến thức đã học**

1. **Cấu trúc Rẽ nhánh (Conditional Statements)**: 
    * Học cách điều hướng luồng của chương trình dựa trên các điều kiện.

    * if / else if / else: Nắm vững cách kiểm tra một chuỗi các điều kiện (thực hành trong if_else.cpp).

    * switch / case: Hiểu cách sử dụng để so sánh một biến với nhiều giá trị cụ thể, bao gồm cả kỹ thuật "fall-through" (thực hành trong switch_case.cpp).

2. **Vòng lặp (Loops):**
    * Học cách tự động hóa các tác vụ lặp lại.

    * for: Sử dụng khi biết trước số lần lặp (thực hành trong for.cpp).

    * while và do-while: Nắm vững sự khác biệt cốt lõi giữa hai vòng lặp, đặc biệt là việc do-while luôn chạy ít nhất một lần (thực hành trong while_dowhile.cpp).

3. **Kiểm soát Vòng lặp (Loop Control):**
    * Học các kỹ thuật nâng cao để điều khiển vòng lặp một cách linh hoạt. (Thực hành trong break_continue.cpp)

    * break: Dùng để thoát khỏi vòng lặp ngay lập tức.

    * continue: Dùng để bỏ qua lần lặp hiện tại và chuyển sang lần lặp tiếp theo.
### **Quy trình làm việc**


* **Thiết lập môi trường cho ngày học**:
    ```bash
    # Sao chép file Makefile của day1 vào thư mục day2
    cp day1/Makefile day2/
    
    # Di chuyển vào thư mục day2
    cd day2
    ```

* **Biên dịch và chạy code**:
    ```bash
    # Biên dịch một file cụ thể (ví dụ: for.cpp)
    make for

    # Chạy file vừa biên dịch gần nhất
    make run
    
    # Dọn dẹp các file thực thi đã tạo
    make clean
    ```
---

## **Day 3: Kiểu Dữ Liệu & Cấu Trúc Mảng**
Trong ngày thứ 3 tổ chức và lưu trữ dữ liệu, từ các kiểu đơn lẻ đến các cấu trúc phức tạp hơn như chuỗi ký tự và mảng.
### **Kiến thức đã học**

1. **Ôn tập Kiểu dữ liệu Nguyên thủy:**

* Bạn đã ôn lại các kiểu dữ liệu cơ bản và quan trọng nhất: int, double, char, bool.

2. **Làm chủ std::string:**

* Hiểu rõ std::string là một lớp mạnh mẽ, không phải kiểu dữ liệu nguyên thủy.

* Thực hành với rất nhiều phương thức hữu ích đi kèm: .length(), .size(), .empty(), .find(), .substr(), .append(), .insert(), .erase(), .clear(), và .c_str().

* Nắm vững sự khác biệt cốt lõi về tính an toàn giữa việc truy cập bằng [] (nhanh, không an toàn) và .at() (chậm hơn, an toàn).

* Hiểu về size_t và tại sao nó là kiểu dữ liệu tiêu chuẩn cho kích thước và chỉ số.

3. **Giới thiệu về Mảng (Arrays):**

* Biết dùng toán tử sizeof() đề lấy kích thước mảng.

* Mảng 1D & 2D: Nắm được cách khai báo, khởi tạo và duyệt qua mảng một chiều và hai chiều bằng vòng lặp for.

### **Quy trình làm việc**
* Tiếp tục áp dụng quy trình làm việc hiệu quả bằng cách tạo thư mục day3, sao chép Makefile, và sử dụng nó để biên dịch và chạy các bài thực hành trong ngày.
---

## **Day 4: Hàm & Con trỏ cơ bản**
### **Kiến thức đã học**
1. **Hàm:**
* Hàm là một "cỗ máy nhỏ" thực hiện một công việc cụ thể. Việc "chế tạo" nó một lần và có thể gọi ra sử dụng lại nhiều lần, giúp chương trình trở nên gọn gàng và có tổ chức.
2. **Tham trị (Pass-by-Value) và Tham chiếu (Pass-by-Reference):**
* Khái niệm: Đây là hai cách khác nhau để truyền dữ liệu vào hàm.

    - Tham Trị (Pass-by-Value): Giống như bạn đưa cho hàm một bản photo của tài liệu. Hàm có thể thay đổi trên bản photo đó, nhưng bản gốc không hề bị ảnh hưởng.

    - Tham Chiếu (Pass-by-Reference): Giống như bạn đưa cho hàm địa chỉ của tài liệu gốc. Mọi thay đổi hàm thực hiện sẽ ảnh hưởng trực tiếp đến bản gốc.

3. **Con trỏ cơ bản:**

* Khái niệm: Con trỏ là một loại biến đặc biệt. Thay vì lưu một giá trị (như 10 hay 'A'), nó lưu địa chỉ trong bộ nhớ của một biến khác.

    - Toán tử & (Address-of): Lấy địa chỉ của một biến.

    - Toán tử * (Dereference): Lấy giá trị đang được lưu tại địa chỉ mà con trỏ đang trỏ tới.

### **Quy trình làm việc**
* Tạo thư mục day4 và sao chép Makefile từ day3 sang.
```bash 
    mkdir day4 && cp day3/Makefile day4/
```
* Di chuyển vào thư mục day4 và bắt đầu tạo các file *.cpp.
```bash
    cd day4/
    #Sau đó tạo các file .cpp
```

* Biên dịch các file .cpp như đã làm những ngày trước đó.

---

## **Day 5: Nhập môn hướng đối tượng (OOP)**
### **Kiến thức đã học**
1. **Tìm hiểu từ struct đến class:**
* Bắt đầu tìm hiều **struct**. Sử dụng **struct** gom nhóm các dữ liệu liên quan vào một kiểu dữ liệu duy nhất.
* Sau đó nâng cấp lên **class** là một cách gom nhóm dữ liệu (attributes) an toàn hơn và bổ sung thêm các hàm cho kiểu dữ liệu gọi là các phương thức (methods):

    * Thuộc tính (**Attributes**): Các biến dữ liệu bên trong lớp.

    * Phương thức (**Methods**): Các hàm thuộc về lớp để xử lý dữ liệu.

    * Tính đóng gói (**Encapsulation**): Che giấu dữ liệu bằng private và cung cấp giao diện an toàn qua public.
2. **Tổ chức code:**

* Học được kỹ năng thiết yếu là tách biệt code ra thành các file **Header (`.h`)** để khai báo (interface) và file **Source (`.cpp`)** để triển khai chi tiết (implementation).

### **Quy trình làm việc**
* Viết Make file mới có thể biên dịch và liên kết nhiều file mã nguồn lại với nhau.

* Gọi lệnh **make** để build 1 file thực thi hoàn chỉnh.

    ```bash
    # Để biên dịch toàn bộ dự án
    make

    # Để chạy chương trình chính
    ./main_program
    ```
---

## **Day 6: Con Trỏ Nâng Cao và Quản Lý Bộ Nhớ Động**

### **Kiến thức đã học**
1. **Khái niệm Stack và Heap:**

* **Stack:** Vùng nhớ này **nhỏ, rất nhanh**, và được **quản lý tự động**. Tất cả các biến bạn khai báo bên trong hàm (ví dụ: int x;) đều nằm trên **Stack** và sẽ tự đông bị xoá khi hàm kết thúc.

* **Heap:** Vùng nhớ này **lớn, chậm hơn**, và phải **tự quản lý**. Dùng (**new**) để cấp phát bộ nhớ và (**delete**) để xoá/trả lại vừng nhớ đã cấp khi dùng xong. Nếu không trả lại vùng nhớ đã dùng có thể gây lỗi **rò rỉ bộ nhớ (memory leak)**.

2. **Cấp phát động với `new` và `delete`:**

* Dùng `new` thì phải có `delete`.

* Dùng `new[]` thì phải `delete[]`. 

* Luôn gán con trỏ bằng `nullptr` ngay sau khi `delete` hoặc `delete[]` để tránh các lỗi con trỏ treo.

3. **Con trỏ hàm (Function Pointers):**

* Con trỏ hàm là một biến không trỏ đến dữ liệu, mà trỏ đến **địa 
chỉ của một hàm**.

* Ứng dụng: Con trỏ hàm rất mạnh mẽ trong việc tạo ra các hệ thống linh hoạt. Ví dụ, bạn có thể tạo một mảng các con trỏ hàm, mỗi con trỏ trỏ đến một thuật toán sắp xếp khác nhau. Người dùng chỉ cần chọn một số, và bạn sẽ gọi thuật toán tương ứng thông qua con trỏ trong mảng.

4. **Truyền Con trỏ vào Hàm (Passing Pointers to Functions):**

* Khi truyền một biến thông thường vào hàm (tham trị), hàm sẽ nhận được một bản sao (copy). Mọi thay đổi trên bản sao đó không ảnh hưởng đến bản gốc.

* Nhưng khi truyền một con trỏ vào hàm, thì chúng ta đang đưa cho hàm đó địa chỉ thật của biến gốc. Điều này cho phép hàm có thể thay đổi trực tiếp giá trị của biến gốc thông qua địa chỉ đó.

5. **Con trỏ và Mảng:**

* **Con trỏ và Mảng 1 chiều:** 

    * Trong C++, tên của một mảng thực chất là một hằng con trỏ trỏ đến địa chỉ của phần tử đầu tiên trong mảng. Điều này cho phép chúng ta sử dụng các phép toán con trỏ (pointer arithmetic) để duyệt mảng. 

    * Cách gọi `arr[i]` thực chất chỉ là một cách viết tắt tiện lợi cho `*(arr + i)`.

* **Con trỏ và Mảng 2 Chiều (Nâng cao):**
    * Để tạo một mảng 2 chiều động, chúng ta không dùng `int**` trực tiếp. Thay vào đó, chúng ta tạo một "mảng các con trỏ", sau đó cho mỗi con trỏ trong mảng đó trỏ đến một hàng (một mảng 1 chiều) riêng biệt.
### **Quy trình làm việc**

* Tạo thư mục day6 và sao chép Makefile từ day3 sang.
```bash 
    mkdir day6 && cp day5/Makefile day6/
```

* Chỉnh sửa Makefile lại và gọi lệnh **make** để build 1 file thực thi hoàn chỉnh.

```bash
# Để biên dịch toàn bộ dự án
make file_name

# Để chạy chương trình chính
./file_name
```
---