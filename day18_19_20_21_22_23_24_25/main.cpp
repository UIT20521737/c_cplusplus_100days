#include <iostream>
#include "StudentManager.h"
using namespace std;
void menu();
int main(){
    menu();
    return 0;
}

void menu(){
    bool is_true = true;
    int choice;
    StudentManager sm;
    do {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add a student" <<endl;
        cout << "2. Display all students" <<endl;
        cout << "3. Delete all students" <<endl;
        cout << "Press any other key to exit!" << endl;
        cout << "Enter your choice: "; 
        cin >> choice;
        switch(choice){
            case 1: 
                sm.add_student();
                break;
            case 2:
                sm.display_all_student();
                break;
            case 3:
                sm.delete_all_students();
                break;
            default:
                is_true = false;
        }
    } while (is_true);
    cout << "Exiting program. Goodbye!" << endl;
}