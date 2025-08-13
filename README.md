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


* **Biên dịch và chạy file một file cụ thể**:
    ```bash
    # Sao chép file Makefile của day1 vào thư mục day2
    cp day1/Makefile day2/
    
    # Di chuyển vào thư mục day2
    cd day2

    # Biên dịch file bạn muốn như trong day1
    ```
---
