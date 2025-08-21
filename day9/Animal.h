#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal{
    protected:
        // 'protected' is like 'private', but it allows derived classes to access these members.
        string name;

public:
    Animal(string name);
    void eat();
    void sleep();
};
#endif