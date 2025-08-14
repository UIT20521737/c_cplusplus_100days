#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Attributes (data) are now private.
    // They cannot be accessed directly from outside the class.
    string name;
    int age;

public:
    // Methods (functions) are public.
    // This is the public interface to interact with the object's data.
    
    // A "setter" method to modify the private 'name' attribute.
    void setName(string new_name) {
        name = new_name;
    }

    // A "setter" for age, with validation logic.
    void setAge(int new_age) {
        if (new_age > 0 && new_age < 150) { // Protect data with validation
            age = new_age;
        }
    }

    // A method to perform an action.
    void introduce() {
        cout << "Hi, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    // Create an object (an instance) of the Student class
    Student s1;

    // Use the public methods to set the object's data
    s1.setName("Jane Doe");
    s1.setAge(21);
    
    // The line below would now cause a COMPILE ERROR because 'name' is private!
    // s1.name = "Test"; 

    // Call a public method to perform an action
    s1.introduce();
    
    return 0;
}