#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H
#include <iostream>
#include <vector>

#include "Student.h"
using namespace std;
class StudentManager{
    private:
        vector <Student> students;
    public:
        void add_student();
        void delete_all_students();
        void display_all_student() const;
};
#endif