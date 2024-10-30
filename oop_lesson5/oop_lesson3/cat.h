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
    // c-tor
    Cat(); // c-tor without param
    Cat(string name);
    Cat(string name, unsigned int age);
    Cat(string name, unsigned int age, string color, string breed, bool isPretty);

    // Set
    void setName(string);
    void setAge(unsigned int);
    void setColor(string);
    void setBreed(string);
    void setIsPretty(bool);

    // Get
    string getName() const;
    unsigned int getAge() const;
    string getColor() const;
    string getBreed() const;
    bool getIsPretty() const;

    // Methods 
    void sayMeow() const;
    void playGame();
    void drinkWater();
    void printPretty();
    void displayInfo() const;
};


