// Student.h

// This is an "include guard". It prevents problems if this header
// is accidentally included multiple times in the same file.
#pragma once

#include <iostream>
#include <string>

class Student {
private:
    // Attributes
    std::string name;
    int age;

public:
    // Method declarations (prototypes)
    void setName(std::string new_name);
    void setAge(int new_age);
    void introduce();
};