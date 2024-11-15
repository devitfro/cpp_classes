#pragma once

#include <iostream>
using namespace std;

class Cat {
    static int catsCount;

    char* name = nullptr;
    unsigned int age;
    string color;
    string breed;
    bool isPretty;
    int energy = 100;
    int happiness = 90;

public:
    // c-tor
    Cat();
    Cat(const char*, unsigned int, string, string, bool);
    Cat(const string&);

    // copy c-tor
    Cat(Cat&);

    // Set
    void setName(const char* name);
    void setAge(unsigned int);
    void setColor(string);
    void setBreed(string);
    void setIsPretty(bool);

    // Get
    static int getCatsCount();
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

    // destructor
    ~Cat() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
        catsCount--;
    }
};



