CXX = g++
CXXFLAGS = -g -Wall -std=c++17
SOURCES ?= main.cpp Student.cpp
OBJECTS =  $(SOURCES:.cpp=.o)
TARGET = my_program
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@echo "Linking object files to create -> $(TARGET)"
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
	@echo "Building successful!"
	@rm -f *.o

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:
	@echo "Running program........."
	./$(TARGET)

clean:
	@echo "Cleaning up build files"
	rm -f my_program

.PHONY: all clean

