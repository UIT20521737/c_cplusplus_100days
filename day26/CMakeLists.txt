# --- Phần 1: Cấu hình Project cơ bản ---

# Yêu cầu phiên bản CMake tối thiểu. Luôn nên có dòng này.
cmake_minimum_required(VERSION 3.10)

# Đặt tên cho project của bạn.
project(MyOpenCVProject)

# Yêu cầu trình biên dịch phải hỗ trợ chuẩn C++17.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# --- Phần 2: Tìm và Cấu hình Thư viện Ngoài ---

# Đây là "phép màu" của CMake.
# Lệnh này sẽ tự động tìm kiếm thư viện OpenCV đã được cài đặt trên máy của bạn.
# 'REQUIRED' có nghĩa là CMake sẽ báo lỗi nếu không tìm thấy.
find_package(OpenCV REQUIRED)

# In ra đường dẫn của thư viện OpenCV đã tìm thấy để kiểm tra.
message(STATUS "Found OpenCV: ${OpenCV_LIBS}")


# --- Phần 3: Định nghĩa "Sản phẩm" ---

# Lệnh này định nghĩa "sản phẩm" cuối cùng của bạn.
# Nó nói rằng: "Hãy tạo một file thực thi tên là 'hello_opencv'
# từ file mã nguồn 'main.cpp'".
add_executable(video video.cpp)

# Lệnh này nói rằng: "Để build 'video', hãy liên kết nó
# với các thư viện OpenCV cần thiết" (mà CMake đã tự tìm ở trên).
target_link_libraries(video ${OpenCV_LIBS})