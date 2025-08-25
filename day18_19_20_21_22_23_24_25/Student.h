#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Student {
    private:
        string id;
        string name;
        double gpa;
    public:
        Student(string id="", string name="", double gpa=0.0);
        void setId(string id);
        void setName(string name);
        void setGPA(double gpa);
        void display();
        string getId();
        string getName();
        double getGPA();
};
#endif