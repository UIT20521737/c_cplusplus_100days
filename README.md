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

2. **Getter và Setter:**

* Getter: Là một phương thức public dùng để lấy (`get`) giá trị của một thuộc tính private. Thường có tên bắt đầu bằng `get`.

* Setter: Là một phương thức public dùng để thiết lập (`set`) giá trị cho một thuộc tính private. Thường có tên bắt đầu bằng `set` và chứa logic kiểm tra dữ liệu đầu vào.

3. **Tổ chức code:**

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

* Tạo thư mục day6 và sao chép Makefile từ day5 sang.
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

## **Day 7: Làm việc với File và xử lý ngoại lệ**
### **Kiến thức đã học:**
1. **Đọc/Ghi File với  `fstream`:**

* Khái niệm: Thư viện `fstream` trong C++ cung cấp các công cụ để làm việc với file một cách dễ dàng, tương tự như cách bạn dùng cout và cin.
    
    * ofstream (output file stream): Dùng để ghi dữ liệu ra file.
    
    * ifstream (input file stream): Dùng để đọc dữ liệu từ fi

2. **Xử lý ngoại lệ:**
* Khái niệm: Khi mở file, rất nhiều lỗi có thể xảy ra (ví dụ file không tồn tại). if/else có thể xử lý được, nhưng khi chương trình phức tạp, code sẽ rất rối. Xử lý ngoại lệ (try/catch) là cách làm hiện đại và gọn gàng hơn.

    * `try`: Đặt đoạn code có nguy cơ gây lỗi vào trong khối `try`.
    
    * `throw`: Khi có lỗi xảy ra, bạn "ném" ra một tín hiệu lỗi.

    * `catch`: Khối lệnh này sẽ "bắt" lấy tín hiệu lỗi và xử lý nó, giúp chương trình không bị sập.

3. **Ghi đè file:**

* Nếu bạn muốn ghi thêm vào file có sẵn mà không xóa nội dung cũ thì bạn chỉ cần thêm một "chế độ" khi mở file.
```cpp 
    ofstream file("log.txt", ios::app);
```

* Các Chế độ Mở File (File Modes)

    * `ios::in`
       
       * Mục đích: Mở file để đọc (input).
       
       * Mặc định cho: ifstream.
    
    * `ios::out`

        * Mục đích: Mở file để ghi (output).
        
        * Mặc định cho: ofstream. Theo mặc định, chế độ này sẽ xóa nội dung cũ của file nếu file đã tồn tại.
    
    * `ios::app (append)`
        
        * Mục đích: Mở file để ghi nối tiếp. Con trỏ ghi sẽ được đặt ở cuối file trước mỗi thao tác ghi. Nội dung cũ được giữ lại.
    * `ios::ate (at end)`

        * Mục đích: Mở file và di chuyển con trỏ đến cuối file ngay lập tức. Tuy nhiên, bạn vẫn có thể di chuyển con trỏ đến vị trí khác để đọc hoặc ghi.
        Khác biệt với app: app luôn luôn ghi ở cuối, còn ate chỉ di chuyển đến cuối lúc ban đầu.

    * `ios::trunc (truncate)`
        
        * Mục đích: Nếu file đã tồn tại, xóa sạch nội dung của nó. Đây là hành vi mặc định khi bạn dùng ios::out.
    
    * `ios::binary`
        
        * Mục đích: Mở file ở chế độ nhị phân thay vì văn bản. Chế độ này dùng để đọc/ghi các file không phải text như ảnh, âm thanh, file thực thi,...

### **Quy trình làm việc:**

* Tạo thư mục day7 và sao chép Makefile từ day6 sang.
```bash 
    mkdir day7 && cp day7/Makefile day6/
```

* Chỉnh sửa Makefile lại và gọi lệnh **make** để build 1 file thực thi hoàn chỉnh.

```bash
# Để biên dịch toàn bộ dự án
make file_name

# Để chạy chương trình chính
./file_name
```
---

## **Day 8: Vòng đời đối tượng và The Rule of Three**

---

### **Kiến thức đã học**
1. **Constructor (Hàm khởi tạo):**

* Khái niệm: Constructor là một phương thức đặc biệt được gọi tự động mỗi khi một đối tượng của lớp được tạo ra. Nhiệm vụ chính của nó là khởi tạo các giá trị ban đầu cho các thuộc tính.

* Hãy tưởng tượng nó là quy trình "cài đặt ban đầu" khi bạn bật một chiếc điện thoại mới.

2. **Destructor (Hàm huỷ):**

* Destructor là một phương thức đặc biệt được gọi tự động mỗi khi một đối tượng của lớp hết phạm vi hoạt động. Nhiệm vụ chính của nó là huỷ đối tượng sau khi đã hết phạm vi hoạt động.

3. **The Rule of Three:**

* Khái niệm: Đây là một quy tắc cực kỳ quan trọng trong C++. Nó nói rằng: "Nếu lớp của bạn cần tự định nghĩa một trong ba phương thức sau, thì rất có thể nó cần cả ba."
Destructor

* Copy Constructor (Hàm khởi tạo sao chép)

* Copy Assignment Operator (Toán tử gán sao chép)

* Quy tắc này đặc biệt quan trọng khi lớp của bạn có chứa con trỏ quản lý bộ nhớ động. Nếu không tuân thủ, bạn sẽ gặp lỗi "sao chép nông" (shallow copy), dẫn đến việc hai đối tượng cùng trỏ vào một vùng nhớ và gây ra lỗi nghiêm trọng khi một trong hai bị hủy.

### **Quy trình làm việc**

* Tạo thư mục day8, sao chép Makefile trong thư mục day7, và cd day8.

* Sửa nội dung trong Makefile
```Makefile
SOURCES = main.cpp Car.cpp 
```

* Tạo các file .cpp và thực hành.

* Biên dịch với `make` và chạy với `./main_program`.

---

## **Day 9: Tính Kế Thừa (Inheritance):**

### **Kiến thức đã học**

1. **Định nghĩa Tính Kế Thừa:**

    Hãy tưởng tượng mối quan hệ trong thế giới thực: "Chó" là một "Động vật".

    * Lớp Động vật (Animal) là lớp cơ sở (Base Class), nó có các thuộc tính và hành động chung như age (tuổi) và eat() (ăn).

    * Lớp Chó (Dog) là lớp dẫn xuất (Derived Class), nó kế thừa tất cả những gì lớp Animal có, và còn có thêm những đặc điểm riêng như breed (giống loài) và hành động bark() (sủa).

    Kế thừa giúp bạn không phải viết lại code cho các thuộc tính và phương thức chung.

2. **Các dạng Kế Thừa:**

    Khi một lớp con kế thừa từ lớp cha, "dạng kế thừa" (`public`, `protected`, hay `private`) sẽ quyết định quyền truy cập của các thành viên được kế thừa sẽ trở thành như thế nào trong lớp con.

    * Kế thừa `public` (Phổ biến nhất):
        * Thành viên `public` của lớp cha vẫn là `public` trong lớp con.

        * Thành viên ``protected`` của lớp cha vẫn là `protected` trong lớp con.

        * Thành viên `private` của lớp cha không bao giờ được truy cập.

    * Kế thừa `protected`:
        * Thành viên `public` và `protected` của lớp cha đều trở thành `protected` trong lớp con.

    * Kế thừa `private`:
        * Thành viên `public` và `protected` của lớp cha đều trở thành `private` trong lớp con.

3. **Đa Thừa Kế:**

* C++ là một trong số ít ngôn ngữ cho phép một lớp con có thể kế thừa từ nhiều lớp cha cùng một lúc.

* Đa kế thừa rất mạnh mẽ nhưng cũng có thể gây ra các vấn đề phức tạp như "The Diamond Problem" (Vấn đề Kim cương)

* Vấn đề Kim Cương:
    
    * Vấn đề Kim cương (Diamond Problem) là một sự mơ hồ xảy ra trong đa kế thừa khi một lớp con kế thừa từ hai lớp cha, và hai lớp cha đó lại cùng kế thừa từ một lớp "ông". Điều này tạo ra một cấu trúc kế thừa hình kim cương.

    * Vấn đề phát sinh là: lớp cháu cuối cùng sẽ có hai bản sao của các thuộc tính và phương thức từ lớp ông, gây ra sự nhầm lẫn và xung đột.

    * Ví dụ:
        Hãy tưởng tượng hệ thống phân cấp lớp sau:
        
        * Lớp "ông": Person (Người) có một thuộc tính là name

        * Lớp cha 1: Student (Sinh viên) kế thừa từ Person (vì Sinh viên là một Người).

        * Lớp cha 2: Employee (Nhân viên) cũng kế thừa từ Person (vì Nhân viên là một Người).

        * Lớp cháu: GraduateAssistant (Trợ giảng) kế thừa từ cả Student và Employee (vì Trợ giảng vừa là Sinh viên, vừa là Nhân viên).

    * Cấu trúc này tạo ra một hình kim cương: GraduateAssistant ở dưới cùng, Student và Employee ở giữa, và Person ở trên cùng.

    * Lớp GraduateAssistant bây giờ kế thừa Person qua hai con đường khác nhau (một qua Student, một qua Employee). Điều này dẫn đến hai vấn đề:

        * Dữ liệu bị trùng lặp: Đối tượng GraduateAssistant sẽ có hai thuộc tính name riêng biệt, một cái từ phần Student và một cái từ phần Employee. Điều này gây lãng phí bộ nhớ và phi logic, vì một trợ giảng chỉ có một cái tên.
            
        * Sự mơ hồ (Ambiguity): Nếu bạn gọi một phương thức của lớp Person từ một đối tượng GraduateAssistant (ví dụ: ga.getName()), trình biên dịch sẽ bối rối. Nó không biết nên gọi phiên bản getName() được kế thừa qua Student hay phiên bản được kế thừa qua Employee. Điều này sẽ gây ra lỗi biên dịch.

    * Giải pháp: Kế thừa ảo (Virtual Inheritance)

        * C++ cung cấp một giải pháp thanh lịch cho vấn đề này bằng cách sử dụng từ khóa virtual khi khai báo kế thừa.

        * Chỉ cần thêm virtual vào các lớp cha ở giữa (Student và Employee):
    
        ```cpp
            // Person class remains the same.
            class Person {
            public:
                string name;
            };

            // Add 'virtual' to the inheritance declaration.
            class Student : virtual public Person {
                // ...
            };

            // Add 'virtual' here as well.
            class Employee : virtual public Person {
                // ...
            };

            // GraduateAssistant class remains the same.
            class GraduateAssistant : public Student, public Employee {
                // ...
            };
        ```
### **Quy trình làm việc**
* Tạo thư mục day9, sao chép Makefile từ day8, và cd day9.

* Sửa nội dung trong Makefile
```Makefile
SOURCES ?= main.cpp Dog.cpp Animal.cpp
```
* Tạo file các file `.cpp` và file `.h` và thực hành.

* Biên dịch với `make` và chạy với `./main_program`.
---

## **Day 10: Tính Đa Hình (Polymorphism) & Tính Trừu Tượng (Abstraction)**
### **Kiến thức đã học**
1. **Tính Đa Hình (Polymorphism)**

* Đa hình là khả năng cho phép xử lý nhiều đối tượng thuộc các lớp con khác nhau (ví dụ Circle, Square) thông qua một giao diện chung duy nhất (thường là con trỏ hoặc tham chiếu của lớp cha, ví dụ Shape*). Điều này giúp viết code linh hoạt và dễ dàng mở rộng.

* Từ khoá `virtual` là "Công tắc" để bật đa hình, ra lệnh cho C++ quyết đinh phiên bản phương thức nào (của lớp cha hay lớp con) sẽ được gọi _tại thời điểm chạy (runtime)_, dựa trên kiểu đối tượng thực tế.

2. **Tính Trừu Tượng (Abstraction)**

* Tính trừu tượng là nguyên tắc **che giấu sự phức tạp của việc triển khai** và chỉ đưa ra một "hợp đồng" hoặc "giao diện" (interface) mà cacxs lớp khác phải tuân theo. Nó tập trung vào **"cái gì"** (what) thay vì **(như thế nào)** (how).

* Công cụ: 
    * **Hàm thuần ảo (Pure Virtual Function):** Một hàm ảo không có phần triển khai ở lớp cha, được khai báo bằng cú pháp `virtual ... = 0;`

    * **Lớp trừu tượng (Abstract Class):** Một lớp chứa ít nhất một hàm thuần ảo. Lớp này không thể được dùng để tạo đối tượng trực tiếp. 

3. Các Kỹ thuật và Quy ước Quan trọng

* Từ khóa override: Sử dụng override sau khai báo phương thức ở lớp con để yêu cầu trình biên dịch kiểm tra xem phương thức đó có thực sự đang định nghĩa lại một hàm virtual từ lớp cha hay không. Đây là một thói quen tốt để tránh các lỗi chính tả tinh vi.

* Hàm hủy ảo (Virtual Destructor): Hiểu tầm quan trọng của việc khai báo virtual ~ClassName() ở lớp cha. Điều này đảm bảo khi bạn xóa một đối tượng lớp con thông qua con trỏ lớp cha, hàm hủy của cả lớp con và lớp cha đều được gọi đúng thứ tự, tránh rò rỉ tài nguyên.

4. Hàm Bạn và Lớp Bạn (friend) 

* Thông thường, các thuộc tính private của một lớp được bảo vệ tuyệt đối khỏi sự truy cập từ bên ngoài. Tuy nhiên, đôi khi bạn cần cho phép một hàm hoặc một lớp khác (là "bạn bè" thân thiết) có quyền truy cập vào các thành viên private này. Từ khóa friend cho phép bạn làm điều đó.

* Hãy tưởng tượng private là "phòng riêng" của bạn. friend giống như việc bạn đưa chìa khóa dự phòng 🔑 cho một người bạn thân hoặc một thành viên gia đình mà bạn tin tưởng tuyệt đối.
### **Quy trình làm việc**
* Cấu trúc Dự án nhiều file: Bạn đã xây dựng thành công một dự án OOP hoàn chỉnh được tách biệt rõ ràng thành các file .h (khai báo) và .cpp (triển khai), một kỹ năng thiết yếu cho mọi dự án thực tế.

    ```bash
        day10/
        ├── Circle.cpp
        ├── Circle.h
        ├── Makefile
        ├── Shape.cpp
        ├── Shape.h
        ├── Square.cpp
        ├── Square.h
        └── main.cpp
    ```

* Cập nhật **Makefile**: Bạn đã học cách cập nhật biến SOURCES để biên dịch và liên kết tất cả các file mã nguồn cần thiết thành một chương trình duy nhất.

    ```Makefile
    SOURCES = main.cpp Shape.cpp Circle.cpp Square.cpp
    ```
* Biên dịch và Chạy:

    ```Makefile
        # Để biên dịch toàn bộ dự án
        make

        # Để chạy chương trình
        ./main_program
    ```
---

## **Day 11: Nhập môn STL**
### **Kiến thức đã học**
1. **`vector` - Mảng thông minh:**

* `vector` là một phiên bản nâng cấp toàn diện của mảng C-style. nó là một mảng động, có thể tự động co giãn kích thước khi bạn thêm hoặc xoá phần tử. Đây là container được sử dụng nhiều nhất trong C++ hiện đại.

* Các phương thức của `vector`:
    
    | Phương thức | Chức năng          |
    |-------------|--------------------|
    |`.push_back(value)`|	Thêm một phần tử vào cuối vector.|
    |`.pop_back()`|	Xóa phần tử cuối cùng của vector.|
    |`.insert(iterator, value)`|	Chèn một phần tử vào một vị trí cụ thể.|
    |`.erase(iterator)`|	Xóa một phần tử tại một vị trí cụ thể.|
    |`.clear()`|	Xóa tất cả các phần tử, làm cho vector rỗng.|
    |`[index]`|	Truy cập phần tử tại chỉ số index. Nhanh, không an toàn.|
    |.at(index)|	Truy cập phần tử tại chỉ số index. Chậm hơn, an toàn (sẽ báo lỗi nếu chỉ số không hợp lệ).|
    |`.front()`|	Lấy giá trị của phần tử đầu tiên.|
    |`.back()`|	Lấy giá trị của phần tử cuối cùng.|
    |`.size()`|	Trả về số lượng phần tử hiện có trong vector.|
    |`.empty()`|	Kiểm tra xem vector có rỗng không (trả về true hoặc false).|
    |`.capacity()`|	Trả về dung lượng bộ nhớ mà vector đã được cấp phát.|
    |`.resize(new_size)`|	Thay đổi số lượng phần tử của vector thành new_size|


    ```c++
        vector<int> nums = {10, 20};
        nums.push_back(30); // nums is now {10, 20, 30}
        cout << nums[0];       // Prints 10
        cout << nums.at(1);    // Prints 20
        cout << nums.front();  // Prints 10
        cout << nums.back();   // Prints 30
        nums.pop_back();    // nums is now {10, 20}
        nums.clear();       // nums is now {}


    ```

2. **`map` - Từ điển Key-Value**
* `map` hoạt động giống như một cuốn từ điển. Nó lưu trữ các cặp key-value (khóa-giá trị), ví dụ: key là "tên sinh viên", value là "điểm số". Các key là duy nhất và được map tự động sắp xếp.

* Các phương thức của `map`:
    
    | Phương thức | Chức năng          |
    |-------------|--------------------|
    |`.insert(...)`|	Thêm một cặp key-value. <br> Ví dụ: scores.insert({"Anna", 95});|
    |`.erase(key)`|	Xóa phần tử có key tương ứng.|
    |`.clear()`|	Xóa tất cả các cặp key-value.|
    |`.find(key)`|	Tìm một phần tử. Nếu tìm thấy, nó trả về một "iterator" (giống như con trỏ) trỏ đến phần tử đó. Nếu không, nó trả về iterator .end().|
    |`.count(key)`|	Đếm số lần xuất hiện của một key. Vì map chỉ chứa các key duy nhất, hàm này sẽ trả về 1 (nếu tồn tại) hoặc 0 (nếu không). Đây là cách kiểm tra sự tồn tại của một phần tử dễ nhất.|
    |`.size()`|	Trả về số lượng phần tử (cặp key-value cho map).|
    |`.empty()`|	Kiểm tra xem có rỗng không.|

    ```cpp
        // Map
        map<string, int> scores;
        scores.insert({"Eve", 89});
        scores.erase("Eve");

        if (scores.count("John") > 0) {
            cout << "John's score exists." << endl;
        }
    ```
3. **`set` - Bộ sưu tập các phần tử duy nhất**

* Các phương thức của `set`:
    
    | Phương thức | Chức năng          |
    |-------------|--------------------|
    |`.insert(...)`|	Thêm một cặp key-value. <br> Ví dụ: nums.insert(42);|
    |`.erase(key)`|	Xóa phần tử có giá trị tương ứng.|
    |`.clear()`|	Xóa tất cả các phần tử.|
    |`.find(key)`|	Tìm một phần tử. Nếu tìm thấy, nó trả về một "iterator" (giống như con trỏ) trỏ đến phần tử đó. Nếu không, nó trả về iterator .end().|
    |`.count(key)`|	Đếm số lần xuất hiện của một key. Vì set chỉ chứa các key duy nhất, hàm này sẽ trả về 1 (nếu tồn tại) hoặc 0 (nếu không). Đây là cách kiểm tra sự tồn tại của một phần tử dễ nhất.|

    ```cpp
        // Set
        set<int> unique_nums;
        unique_nums.insert(100);
        unique_nums.erase(100);
        if (unique_nums.find(50) != unique_nums.end()) {
            cout << "50 was found in the set." << endl;
        }

    ```
### **Quy trình làm việc**

* Thiết lập môi trường cho ngày học:
    ```Bash
        # Từ thư mục gốc của dự án
        mkdir day11
        cp day10/Makefile day11/
    ```

* Biên dịch và chạy các file thực hành:
    ```Bash
        # Di chuyển vào thư mục day11 để làm việc
        cd day11

        # Biên dịch một file cụ thể (ví dụ: vector_example.cpp)
        make vector_example

        # Chạy file vừa biên dịch
        ./vector_example
    ``` 
---

## **Day12: Debugger và Makefile**
### **Kiến thức đã học**
1. **Debugger:**

* Debugger: Giống như bạn có một bản vẽ 3D của cỗ máy, có thể chạy mô phỏng từng bước, tạm dừng, và xem xét giá trị của từng con ốc tại bất kỳ thời điểm nào.

* Các khái niệm có trong debugger:
    
    * Breakpoint (Điểm dừng): Đánh dấu một dòng code để chương trình tự động tạm dừng ngay trước khi thực thi dòng đó.

    * Step Over/Into/Out (Đi từng bước): Cho phép bạn thực thi chương trình từng dòng một.

    * Inspect Variables (Kiểm tra biến): Xem giá trị của tất cả các biến tại thời điểm chương trình bị tạm dừng.

2. **Makefile:**

* Makefile là một file kịch bản chứa các công thức để build (biên dịch và liên kết) một dự án phần mềm. Công cụ make sẽ đọc file này và thực thi các lệnh một cách thông minh, nó chỉ biên dịch lại những file đã bị thay đổi để tiết kiệm thời gian.

* Một Makefile được tạo nên từ 3 thành phần chính:
    * *Biến (Variables):*

        * Mục đích: Giúp file dễ đọc và dễ thay đổi.

        * Cú pháp: TEN_BIEN = giá_trị
        
        * Ví dụ: 
            ```Makefile
                # Trình biên dịch C++
                CXX = g++

                # Các cờ (flags) cho trình biên dịch
                # -std=c++17: Dùng chuẩn C++17
                # -Wall: Bật tất cả các cảnh báo (Warning all)
                # -g: Thêm thông tin gỡ lỗi (debug)
                CXXFLAGS = -std=c++17 -Wall -g

                # Tên của chương trình cuối cùng
                TARGET = my_app
            ```
        
    * *Quy tắc:*

        * Đây là trái tim của Makefile. Một quy tắc là một "công thức nấu ăn" chỉ cho make cách tạo ra một file từ các file khác.

        * Cú pháp:
            ```Makefile
                target: prerequisite1 prerequisite2 ...
                    <TAB>command
            ```
        * Giải thích:

            * target: "Món ăn" cuối cùng chúng ta muốn tạo (ví dụ: my_app hoặc main.o).

            * prerequisite: Các "nguyên liệu" cần có trước khi nấu (ví dụ: main.o, student.o hoặc main.cpp).

            * command: "Hướng dẫn nấu ăn". Đây là lệnh sẽ được thực thi.

            LƯU Ý CỰC KỲ QUAN TRỌNG: Dòng command bắt buộc phải được thụt vào bằng một ký tự Tab, không phải dấu cách (space).
        
    * *Target giả (Phony Targets):*
        
        * Đây là những quy tắc đặc biệt mà tên của chúng không phải là tên của một file. Chúng là tên của một hành động.

        * Mục đích: Dùng để ra lệnh cho make làm một việc gì đó, như make clean (dọn dẹp) hoặc make run (chạy chương trình).

        * Cú pháp: Chúng ta khai báo chúng bằng .PHONY để make không bị nhầm lẫn với các file có tên tương tự.

            ```Makefile
                .PHONY: all clean run
            ```
### **Quy trình làm việc**
* Tạo thư mục day12/ và file Makefile:
    ```bash
        mkdir day12/ && touch Makefile
    ```

* Tạo file main.cpp, a.cpp, b.cpp:
    ```bash
        touch main.cpp a.cpp b.cpp
    ```

* Viết nội dung Makefile và chạy file kiểm nghiệm.

---

## **Day13:**
### **Kiến thức đa học**
1. **Con trỏ thông minh:**
* Đây là giải pháp của C++ hiện đại cho vấn đề rò rỉ bộ nhớ. Con trỏ thông minh là các đối tượng "gói" con trỏ thô, và chúng tự động gọi delete khi không còn được sử dụng.

* `std::unique_ptr`: Đại diện cho quyền sở hữu duy nhất. Chỉ có một unique_ptr có thể trỏ đến một đối tượng tại một thời điểm. Đây là lựa chọn mặc định vì nó rất nhẹ và hiệu quả.

* `std::shared_ptr`: Cho phép chia sẻ quyền sở hữu. Nhiều shared_ptr có thể cùng trỏ đến một đối tượng. Đối tượng sẽ chỉ bị hủy khi con trỏ shared_ptr cuối cùng bị hủy.

* `std::weak_ptr`:  Dùng để phá vỡ các tham chiếu vòng tròn (circular references) khi sử dụng shared_ptr. weak_ptr có thể kiểm tra xem đối tượng nó đang quan sát còn tồn tại hay không, nhưng không thể truy cập trực tiếp. Để truy cập, bạn phải tạm thời "khóa" nó lại để tạo ra một `shared_ptr`.

2. **`auto` & Vòng lặp `for` dựa trên phạm vi:**

* Từ khóa `auto`: Yêu cầu trình biên dịch tự suy ra kiểu dữ liệu của biến. Cực kỳ hữu ích với các kiểu dữ liệu dài và phức tạp. Khi từ khoá `auto` đi kèm `&` sẽ tham chiếu đến đối tượng. Nếu không có nó sẽ copy ra 1 đối tượng mới làm chậm chương trình.

* Vòng lặp ``for`` dựa trên phạm vi (Range-based `for` loop): Một cách duyệt qua tất cả các phần tử trong một container (như vector) cực kỳ ngắn gọn, dễ đọc, và an toàn.

3. **Lamda:**

* Lambda là một cách để bạn tạo ra một hàm "vô danh" hay "hàm dùng một lần" ngay tại nơi bạn cần nó. Nó cực kỳ hữu ích khi bạn cần truyền một hàm nhỏ làm tham số cho một hàm khác (ví dụ như các thuật toán của STL).

* Các hàm có sẵn trong thư viện `<algorithm>`
    
    - Các thuật toán tìm kiếm và kiểm tra:

        |Hàm|Mục đích|Lamda đóng vai trò là gì|
        |---|---|---|
        |`std::find_if`|	Tìm phần tử đầu tiên thỏa mãn điều kiện.|	Trả về `true` cho phần tử cần tìm.|
        |`std::count_if`|	Đếm số lượng phần tử thỏa mãn điều kiện.|	Trả về `true` cho các phần tử cần đếm.|
        |`std::any_of`|	Kiểm tra xem có bất kỳ phần tử nào thỏa mãn điều kiện không.|	Trả về `true` cho điều kiện cần kiểm tra.|
        |`std::all_of`|	Kiểm tra xem tất cả các phần tử có thỏa mãn điều kiện không.|	Trả về `true` cho điều kiện cần kiểm tra.|
        |`std::none_of`|	Kiểm tra xem không có phần tử nào thỏa mãn điều kiện không.|	Trả về `true` cho điều kiện cần kiểm tra.|

    - Các thuật toán sắp xếp và phân hoạch:

        |Hàm|Mục đích|Lambda đóng vai trò gì|
        |---|---|---|
        |`std::sort`|Sắp xếp một dãy.|Một hàm so sánh nhận hai phần tử a và b, trả về true nếu a nên đứng trước b.|
        |`std::stable_sort`|Sắp xếp ổn định (giữ nguyên thứ tự tương đối của các phần tử bằng nhau).|Tương tự std::sort.|
        |`std::partition`|Phân hoạch một dãy thành hai nhóm: nhóm thỏa mãn điều kiện và nhóm không thỏa mãn.|Một hàm điều kiện, trả về true cho các phần tử thuộc nhóm đầu tiên.|

    - Các thuật toán chỉnh sửa và biến đổi:
        |Hàm|Mục đích|Lambda đóng vai trò gì|
        |---|---|---|
        |`std::for_each`|Thực hiện một hành động trên mỗi phần tử.|Một hàm nhận một phần tử và thực hiện một việc gì đó (ví dụ: in ra màn hình).|
        |`std::transform`|Tạo ra một dãy mới bằng cách áp dụng một phép biến đổi trên mỗi phần tử của dãy cũ.|Một hàm nhận một phần tử và trả về giá trị đã được biến đổi của nó.|
        |`std::remove_if`|"Xóa" các phần tử thỏa mãn một điều kiện (thực chất là di chuyển chúng về cuối).|Một hàm điều kiện, trả về true cho các phần tử cần xóa.|


### **Quy trình làm việc**
* Tạo thư mục day13/ và file Makefile:
    ```bash
        mkdir day13/ && touch Makefile
    ```

* Viết nội dung Makefile và chạy file kiểm nghiệm.
---
## **Day14:**
### **Kiến thức đa học**
1. **Các thuật toán sắp xếp:**
* *Sắp xếp nổi bọt (Bubble Sort)*:
    * Ý tưởng: So sánh các cặp phần tử liền kề và đổi chỗ nếu chúng sai thứ tự. Lặp lại quá trình này cho đến khi không còn lần đổi chỗ nào nữa. Phần tử lớn nhất sẽ "nổi" dần lên cuối danh sách.

* *Sắp xếp chọn (Selection Sort)*:

    * Ý tưởng: Tìm phần tử nhỏ nhất trong phần danh sách chưa được sắp xếp và đổi chỗ nó với phần tử ở đầu phần chưa sắp xếp đó.

* *Sắp xếp chèn (Insertion Sort)*:

    * Ý tưởng: Duyệt qua danh sách, và với mỗi phần tử, chèn nó vào đúng vị trí trong danh sách con đã được sắp xếp ở phía trước nó. Rất giống cách bạn sắp xếp một bộ bài trên tay.

* *Sắp xếp trộn (Merge Sort):*:

    * Ý tưởng: Dựa trên nguyên tắc "Chia để trị". Liên tục chia đôi danh sách cho đến khi mỗi phần chỉ còn một phần tử, sau đó trộn các phần đã sắp xếp lại với nhau một cách có thứ tự.

* *Sắp xếp nhanh (Quick Sort)*:

    * Ý tưởng: Cũng dựa trên "Chia để trị". Chọn một phần tử làm "chốt" (pivot), sau đó phân hoạch danh sách thành hai nửa: một nửa nhỏ hơn chốt và một nửa lớn hơn chốt. Lặp lại quá trình một cách đệ quy cho hai nửa đó.

2. **Các hàm sắp xếp trong Thư viện `<algorithm>`:**

    |Hàm (Function)|Chức năng|
    |-|-|
    |`std::sort`|Sắp xếp một dãy. Đây là hàm sắp xếp nhanh và hiệu quả nhất cho hầu hết các trường hợp.|
    |`std::stable_sort`|Sắp xếp giống sort nhưng giữ nguyên thứ tự tương đối của các phần tử bằng nhau. Rất hữu ích khi bạn sắp xếp đối tượng theo nhiều tiêu chí.|
    |`std::partial_sort`|Chỉ sắp xếp N phần tử đầu tiên của một dãy vào đúng vị trí. Phần còn lại của dãy không được sắp xếp. Hữu ích khi bạn chỉ cần tìm "Top N".|
    |`std::is_sorted`|Kiểm tra xem một dãy đã được sắp xếp hay chưa. Trả về `true` hoặc `false`.|
    |`std::nth_element`|Một dạng sắp xếp một phần rất hiệu quả. Nó không sắp xếp toàn bộ dãy, mà chỉ đặt phần tử thứ N vào đúng vị trí của nó nếu dãy được sắp xếp. Tất cả các phần tử trước nó đều nhỏ hơn hoặc bằng, và tất cả các phần tử sau nó đều lớn hơn hoặc bằng.|
### **Quy trình làm việc**
* Tạo thư mục day14/ và file Makefile:
    ```bash
        mkdir day14/ && touch Makefile
    ```

* Viết nội dung Makefile và chạy file kiểm nghiệm.
---
## **Day15:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day16:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day17:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day18:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day19:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day20:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day21:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day22:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day23:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
## **Day24:**
### **Kiến thức đa học**
### **Quy trình làm việc**
---
