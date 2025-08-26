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
        void setId(const string& id);
        void setName(const string& name);
        void setGPA(double gpa);
        void display() const;
        string getId() const;
        string getName() const;
        double getGPA() const;
};
#endif