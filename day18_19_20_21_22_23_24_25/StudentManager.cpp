#include "StudentManager.h"

void StudentManager::add_student(){
    string id, name;
    double gpa;

    cout << "\n--- Add New Student ---" << endl;
    cout << "Enter ID: ";
    cin >> id;

    // Important: Clear the input buffer after reading a number/word and before reading a line
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "Enter full name: ";
    getline(cin, name); // Use getline to read names with spaces

    cout << "Enter GPA: ";
    cin >> gpa;

    // Create a new Student object and add it to the vector
    students.push_back(Student(id, name, gpa));

    cout << "Student added successfully!" << endl;
}

void StudentManager::display_all_student() const{
    cout << "\n--- List of All Students ---" << endl;
    if (students.empty()) {
        cout << "The list is empty!" << endl;
        return;
    }
    for(const auto& student : students){
        student.display();
    }
}

void StudentManager::delete_all_students(){
    if(students.empty()) {
        cout << "The list is empty!" << endl;
        return;
    }
    students.clear();
    cout << "List cleared successfully!" << endl;
}
