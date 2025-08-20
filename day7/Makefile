# Makefile for multi-file projects
CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

# Automatically find all .cpp files
SOURCES = main.cpp Student.cpp
# Create corresponding object file names (.o)
OBJECTS = $(SOURCES:.cpp=.o)

# Name of the final executable program
TARGET = main_program

# Default rule: build the target
all: $(TARGET)

# Rule to link all object files into the final executable
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Rule to compile a .cpp source file into a .o object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up all build files
clean:
	rm -f *.o $(TARGET) *.txt
	rm -rf *.dSYM/ 
	@targets=$$(ls *.cpp 2>/dev/null | sed 's/\.cpp//'); \
	if [ ! -z "$$targets" ]; then \
		echo "Cleaning: $$targets"; \
		rm -f $$targets; \
	fi; \

.PHONY: all clean