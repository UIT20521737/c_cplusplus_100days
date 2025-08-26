#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>
#include "Student.h"
using namespace std;
string trim(const std::string& str);
class StudentManager{
    private:
        vector <Student> students;
    public:
        void add_student();
        void delete_all_students();
        void load_file(const string& filename);
        void save_file(const string& filename) const;
        void find_student() const;
        void delete_a_student();
        void display_all_student() const;
        void sort_students();
        void edit_student();
};
#endif