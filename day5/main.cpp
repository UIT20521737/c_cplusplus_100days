// main.cpp

#include <iostream>
#include "Student.h" // Include our custom Student class definition

int main() {
    Student s1;
    s1.setName("Alice");
    s1.setAge(25);

    s1.introduce();

    return 0;
}