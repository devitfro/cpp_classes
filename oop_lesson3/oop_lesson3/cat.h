#pragma once

#include <iostream>
using namespace std;

class Cat {
    string name;
    unsigned int age;
    string color;
    string breed;
    bool isPretty;

public:
    // Set
    void setName(string n);
    void setAge(unsigned int a);
    void setColor(string c);
    void setBreed(string b);
    void setIsPretty(bool flag);

    // Get
    string getName();
    unsigned int getAge();
    string getColor();
    string getBreed();
    bool getIsPretty();

    // Methods 
    void sayMeow();
    void playGame();
    void drinkWater();
    void printPretty();
    void displayInfo();
};


