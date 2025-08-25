CXX = g++
CXXFLAGS = -g -Wall -std=c++17 


clean:
	rm -f main_program
	rm -f *.o 
	rm -rf *.dSYM/
	@# Lệnh này tìm tất cả các file .cpp và xóa file thực thi tương ứng
	@targets=$$(ls *.cpp 2>/dev/null | sed 's/\.cpp//g'); \
	if [ ! -z "$$targets" ]; then \
		rm -f $$targets; \
	fi; \

.PHONY: all run clean 