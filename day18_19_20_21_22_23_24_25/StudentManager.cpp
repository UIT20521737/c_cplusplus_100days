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

// Display all student in student list;
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

void StudentManager::save_file(const string& filename) const{
    if (students.empty()){
        cout << "The list is empty!" << endl;
        return;
    }
    try{
        ofstream file(filename);
        if(file.is_open()){
            for(const auto& student : students){
                file << student.getId()<<", "<<student.getName()<<", "<<student.getGPA()<<endl;
            }
            file.close();
            cout << "Data successfully saved to " << filename << endl;
        }
    }
    catch (const exception& e){
        cerr << "ERROR CAUGHT: " << e.what() << endl;
    }
}


void StudentManager::load_file(const string& filename){
    try{
        ifstream file(filename);
        if(!file.is_open()){
            cout << "Info: Could not find " << filename << ". A new file will be created upon saving." << endl;
            return;
        } else {
            string line;
            while(getline(file, line)){
                size_t pos1 = line.find(',');
                size_t pos2 = line.find(',', pos1 + 1);

                if (pos1 == string::npos || pos2 == string::npos) {
                    cerr << "Invalid CSV format in line: " << line << endl;
                    continue;
                }

                string id = line.substr(0, pos1);
                string name = trim(line.substr(pos1 + 1, pos2 - pos1 - 1));
                double gpa = stod(trim(line.substr(pos2 + 1)));
                students.push_back(Student(id, name, gpa));
            }
            cout << "Data has been loaded!"<< endl;
        }
    }
    catch (const exception& e){
        cerr << "ERROR CAUGHT: " << e.what() << endl;
    }
}

void StudentManager::delete_a_student(){
    if(students.empty()) {
        cout << "The list is empty!" << endl;
        return;
    }
    else{
        string id_to_delete;
        cout << "\nEnter ID of student to delete: ";
        cin >> id_to_delete;
        id_to_delete = trim(id_to_delete);
        bool found = false;
        for (auto it = students.begin(); it != students.end(); it++){
            if(it->getId() == id_to_delete){
                it = students.erase(it);
                cout << "Student with ID '" << id_to_delete << "' has been deleted." << endl;
                found = true;
                break; 
            }
        }
        if (!found) {
            cout << "Student with ID '" << id_to_delete << "' not found." << endl;
        } 
    }
}

void StudentManager::find_student() const{
    if(students.empty()) {
        cout << "The list is empty!" << endl;
        return;
    }
    else{
        string id_to_find;
        cout << "\nEnter ID of student to find: ";
        cin >> id_to_find;
        id_to_find = trim(id_to_find);
        bool found = false;
        for (const auto& student: students){
            if(student.getId() == id_to_find){
                cout << "--- Student Found ---" << endl;
                student.display();
                found = true;
                break; 
            }
        }
        if (!found) {
            cout << "Student with ID '" << id_to_find << "' not found." << endl;
        }
    }
    
}


string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    if (first == std::string::npos) return "";
    return str.substr(first, last - first + 1);
}

