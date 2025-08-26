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

void StudentManager::sort_students(){
    if (students.empty()) {
        cout << "The list is empty, nothing to sort." << endl;
        return;
    }

    char choice;
    cout << "\n--- Sort Students By ---" << endl;
    cout << "1. ID (Ascending)" << endl;
    cout << "2. Name (Ascending)" << endl;
    cout << "3. GPA (Descending)" << endl;
    cout << "Any other key to cancel." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case '1':
            sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
                return a.getId() < b.getId();
            });
            cout << "Students sorted by ID." << endl;
            break;
        case '2':
            sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
                return a.getName() < b.getName();
            });
            cout << "Students sorted by Name." << endl;
            break;
        case '3':
            sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
                return a.getGPA() > b.getGPA();
            });
            cout << "Students sorted by GPA." << endl;
            break;
        default:
            cout << "Sort operation cancelled." << endl;
            return; // Return without displaying
    }
    display_all_student(); // Hiển thị danh sách đã sắp xếp
}
void StudentManager::edit_student(){
    if (students.empty()) {
        cout << "The list is empty, nothing to sort." << endl;
        return;
    } 

    string id_to_edit;
    cout << "\nEnter ID of student to edit: ";
    cin >> id_to_edit;

    bool found = false;
    // Dùng tham chiếu (&) để có thể sửa đổi trực tiếp đối tượng sinh viên
    for (auto& student : students) {
        if (student.getId() == id_to_edit) {
            cout << "--- Student Found. Current info: ---" << endl;
            student.display();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Xóa bộ đệm

            string new_name;
            string new_id;
            double new_gpa;

            cout << "Enter new ID (or press Enter to keep old ID): ";
            getline(cin, new_id);
            if (!new_id.empty()) {
                student.setId(new_id);
            }

            cout << "Enter new name (or press Enter to keep old name): ";
            getline(cin, new_name);
            if (!new_name.empty()) {
                student.setName(new_name);
            }

            char c;
            do {
                cout << "Do you want to edit the student's GPA? (y/n): ";
                cin >> c;
            } while (tolower(c) != 'y' && tolower(c) != 'n');

            if(tolower(c) == 'y'){
                cout << "Enter new GPA: ";
                new_gpa = get_valid_double_input();
                student.setGPA(new_gpa);
            }
           
            
            cout << "Student information updated successfully." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID '" << id_to_edit << "' not found." << endl;
    }
}

    
string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    if (first == std::string::npos) return "";
    return str.substr(first, last - first + 1);
}

double get_valid_double_input() {
    double value;
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}