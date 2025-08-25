CXX = g++

CXXFLAGS = -g -Wall -std=c++17

OBJECTS = $($%.cpp=.o)
ARGS =

all: 
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o
	$(CXX) $(CXXFLAGS) -o my_program main.o
# 	rm -f main.o



%: %.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@.o

build:
	$(CXX) $(CXXFLAGS) -o my_program $(wildcard *.o)
	@rm -f *.o 




run: 
	./my_program $(ARGS)

clean:
	rm -f my_program
	rm -f *.o 
	rm -rf *.dSYM/
	@# Lệnh này tìm tất cả các file .cpp và xóa file thực thi tương ứng
	@targets=$$(ls *.cpp 2>/dev/null | sed 's/\.cpp//g'); \
	if [ ! -z "$$targets" ]; then \
		rm -f $$targets; \
	fi; \

.PHONY: clean run all build