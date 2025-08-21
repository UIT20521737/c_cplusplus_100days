#include "Animal.h"
// Constructor for the base class
Animal::Animal(string n) : name(n) {
    cout << "An Animal named " << name << " was created." << endl;
}

void Animal::eat() {
    cout << name << " is eating." << endl;
}

void Animal::sleep() {
    cout << name << " is sleeping." << endl;
}