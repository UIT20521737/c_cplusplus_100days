#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <limits>
#include "Student.h"
#include "utils.h"
using namespace std;

class StudentManager{
    private:
        vector <Student> students;
        Student* find_student_by_id(const string& id);
        const Student* find_student_by_id(const std::string& id) const;

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