#include "Student.h"

Student::Student(string id, string name, double gpa){
    this->id = id;
    this->name = name;
    this->gpa = gpa;
}

void Student::display() const {
    cout << "Id: " << id << " - Name: " << name << " - GPA: " << fixed << setprecision(2) << gpa << endl;
}

void Student::setId(const string& id){
    this->id = id;
}

void Student::setName(const string& name){
    this->name = name;
}

void Student::setGPA(double gpa){
    this->gpa = gpa;
}

string Student::getId() const{
    return this->id;
}

string Student::getName() const{
    return this->name;
}

double Student::getGPA() const{ 
    return this->gpa;
}