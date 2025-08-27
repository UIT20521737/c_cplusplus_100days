# --- Phần 1: Cấu hình Project cơ bản ---

# Yêu cầu phiên bản CMake tối thiểu. Luôn nên có dòng này.
cmake_minimum_required(VERSION 3.10)

# Đặt tên cho project và yêu cầu ngôn ngữ CXX (C++).
project(MyProject CXX)

# Yêu cầu trình biên dịch phải hỗ trợ chuẩn C++17.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# --- Phần 2: Định nghĩa "Sản phẩm" (Chương trình) ---

# Lệnh này nói rằng: "Hãy tạo một file thực thi tên là 'my_app'
# từ file mã nguồn 'main.cpp'".
# Nếu có nhiều file, chỉ cần liệt kê chúng: add_executable(my_app main.cpp student.cpp)
add_executable(my_app main.cpp)

# --- Phần 3: Liên kết Thư viện (Nếu cần) ---
find_package(OpenCV REQUIRED)
target_link_libraries(my_app ${OpenCV_LIBS})
message(STATUS "Found OpenCV: ${OpenCV_LIBS}")