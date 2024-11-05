#pragma once

#include <iostream>
using namespace std;

class Cat {
    string name;
    unsigned int age;
    string color;
    string breed;
    bool isPretty;
    int energy = 100;
    int happiness = 90;

public:
    // Set
    void setName(string);
    void setAge(unsigned int);
    void setColor(string);
    void setBreed(string);
    void setIsPretty(bool);

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


