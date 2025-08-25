#include "Student.h"

Student::Student(string id, string name, double gpa){
    this->id = id;
    this->name = name;
    this->gpa = gpa;
}

void Student::display() const{
    cout << "Id: " << id << " - Name: " << name << " - GPA: " << fixed << setprecision(2) << gpa << endl;
}

void Student::setId(string id){
    this->id = id;
}

void Student::setName(string name){
    this->name = name;
}

void Student::setGPA(double gpa){
    this->gpa = gpa;
}

string Student::getId(){
    return this->id;
}

string Student::getName(){
    return this->name;
}

double Student::getGPA(){
    return this->gpa;
}