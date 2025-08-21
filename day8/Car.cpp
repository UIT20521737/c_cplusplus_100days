#include "Car.h"
#include <iostream>
Car::Car(){
    cout << "creare a car\n";
    brand = "unknown";
    year = 0;
}
Car::Car(int year, string brand){
    cout << "creare a car\n";
    this -> brand = brand;
    this -> year = year;
}

Car::Car(string brand, int year){
    cout << "creare a car\n";
    this -> brand = brand;
    this -> year = year;
}

Car::~Car(){
    cout << "delete a car\n";
}

void Car::displayInfo() {
    cout << "Brand: " << brand << ", Year: " << year << endl;
}