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
        cout << "4. Load data from file" <<endl;
        cout << "5. Save data" <<endl;
        cout << "6. Find student" <<endl;
        cout << "7. Delete student" <<endl;
        cout << "8. Edit student"<< endl;
        cout << "9. Sort students" << endl;
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
            case 4: {
                string filename;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Enter file name: ";
                getline(cin, filename);
                sm.load_file(filename);
                break;
            }
            case 5: {
                string filename;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Enter file name: ";
                getline(cin, filename);
                sm.save_file(filename);
                break;
            }
            case 6: 
                sm.find_student();
                break;
            case 7:
                sm.delete_a_student();
                break;
            case 8: 
                sm.edit_student();
                break;
            case 9: 
                sm.sort_students();
                break;
            default:
                is_true = false;
        }
    } while (is_true);
    cout << "Exiting program. Goodbye!" << endl;
}
