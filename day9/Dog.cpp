#include "Dog.h"
// The derived class constructor must call the base class constructor.
Dog::Dog(string name, string breed):Animal(name), breed(breed){
    cout << "A Dog of breed " << breed << " was created." << endl;
}
// A method specific to the Dog class
void Dog::bark() {
    // The 'name' attribute is accessible here because it is 'protected' in the Animal class.
    cout << name << " says: Woof! Woof!" << endl;
}
