#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "--- The std::string Class ---" << endl;
    string my_str = "Hello World";
    cout << "my_str: " << my_str << endl;

    cout << "String methods: " << endl;
    // Note: std::string is a class with many useful member functions (methods).
    // .length() or .size() : Returns the number of characters.
    // .find("text")        : Finds the starting position of a substring. Returns string::npos if not found.
    // .empty()             : Returns true if the string is empty (has a length of 0). 
    // .substr(start, len)  : Extracts a new string from the original.
    // .append(" more")     : Adds text to the end of the string.
    // .c_str()             : Returns a C-style character array version for compatibility.
    
    cout << "Size: " << my_str.size() << ",Length: " << my_str.length() << endl;

    cout << (my_str.empty() ? "my_str is empty" : "my_str is not empty") << endl;

    string my_sub_str = "lo";
    size_t pos =  my_str.find(my_sub_str);
    if (pos != string::npos) {
        cout << "\"" << my_sub_str << "\"" << " is in \""<< my_str << "\"" << endl;
    } else {
        cout << "\"" << my_sub_str << "\"" << " is not in \""<< my_str << "\"" << endl;
    }

    cout << "Substring starting at index 3 with length 5: " << my_str.substr(3, 5) << endl;

    cout << my_str.append(" with C++") << endl;
    printf("Legacy C function prints: %s\n", my_str.c_str());


    cout << "\n========================================\n";
    cout << "## Advanced std::string Methods ##\n" << endl;

   
    cout << "--- Initialization & Size ---" << endl;
    string s1 = "Hello";
    string s2("World");
    cout << "--------------------------------\n" << endl;


    // --- Modification: Insert, Erase, Clear ---
   
    string text = "I love programming!";
    cout << "Original text:           '" << text << "'" << endl;

    // .insert(position, "text") inserts a string at a specific index.
    text.insert(7, " C++"); // Inserts " C++" at index 7
    cout << "After .insert(7, \" C++\"): '" << text << "'" << endl;

    // .erase(position, count) removes 'count' characters starting from 'position'.
    text.erase(2, 4); // Removes "love" (4 characters starting at index 2)
    cout << "After .erase(2, 4):      '" << text << "'" << endl;

    // .clear() removes all content from the string.
    text.clear();
    cout << "After .clear(), is the text empty? " << boolalpha << text.empty() << endl;

    // --- Accessing Characters: Safe vs. Unsafe ---
    cout << "--- Accessing Characters ---" << endl;
    string data = "Data";
    // Using [] operator: fast, but unsafe if index is out of bounds.
    cout << "Character at index 1 using []: " << data[1] << endl;
    // Accessing an out-of-bounds index with [] results in undefined behavior.
    // It might read a garbage value from memory, or it might crash the program
    cout << "Data at 10: " << data[10] << ", 'M' is a garbage value." << endl;
    // Using .at() method: slower, but safe. It throws an exception if index is out of bounds.
    try {
        cout << "Character at index 2 using .at(): " << data.at(2) << endl;
        cout << "Trying to access index 10 using .at()..." << endl;
        data.at(10); // This will cause an error
    } catch (const out_of_range& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    cout << "--------------------------------\n" << endl;


    return 0;
}