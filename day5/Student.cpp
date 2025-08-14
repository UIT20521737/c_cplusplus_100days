// Student.cpp

#include "Student.h" // Include the corresponding header file
using namespace std;

// Use the scope resolution operator '::' to specify that these
// methods belong to the Student class.
void Student::setName(string new_name) {
    name = new_name;
}

void Student::setAge(int new_age) {
    if (new_age > 0 && new_age < 150) {
        age = new_age;
    }
}

void Student::introduce() {
    cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
}