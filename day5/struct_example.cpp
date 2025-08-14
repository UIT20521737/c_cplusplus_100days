#include <iostream>
#include <string>
using namespace std;

// Define a new data type called 'Student'
struct Student {
    string name;
    string student_id;
    int age;
};

int main() {
    // Create a variable (an instance) of the Student type
    Student s1;

    // Access and assign values using the dot (.) operator
    s1.name = "John Doe";
    s1.student_id = "UIT20521737";
    s1.age = 20;

    cout << "Student Name: " << s1.name << endl;
    cout << "ID: " << s1.student_id << endl;
    cout << "Age: " << s1.age << endl;

    return 0;
}