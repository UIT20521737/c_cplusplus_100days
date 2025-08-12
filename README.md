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

Dự án được quản lý bởi một `Makefile` tiện lợi nằm trong từng thư mục `day`.

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