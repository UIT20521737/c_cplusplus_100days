#ifndef DOG_H
#define DOG_H
#include "Animal.h"
class Dog: public Animal{
    private:
        string breed;
    public:
        Dog(string name, string breed);
        void bark();
};
#endif