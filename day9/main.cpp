#include "Dog.h"
int main() {
    cout << "--- Creating a generic Animal ---" << endl;
    Animal generic_animal("Leo");
    generic_animal.eat();
    generic_animal.sleep();

    cout << "\n--- Creating a Dog ---" << endl;
    Dog my_dog("Buddy", "Golden Retriever");
    my_dog.eat();    // <-- Inherited from Animal
    my_dog.sleep();  // <-- Inherited from Animal
    my_dog.bark();   // <-- Specific to Dog

    return 0;
}