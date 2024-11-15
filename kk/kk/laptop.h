#pragma once

#include <iostream>
using namespace std;

class Laptop {
    char* model = nullptr;
    string color;
    int price;
    int yearRelease;
    bool isWork;

public:
    // c-tor
    Laptop();
    Laptop(const char*, string, int, int, bool);
    Laptop(const string&);

    // copy c-tor
    Laptop(Laptop&);

    // Set
    void setModel(const char*);
    void setColor(string);
    void setPrice(unsigned int);
    void setYearRelease(unsigned int);
    void setIsWork(bool);

    // Get
    string getModel() const;
    string getColor()const;
    unsigned int getPrice() const;
    unsigned int getRating() const;
    bool getIsWork() const;

    // Methods
    void work();
    void playGame();
    void checkMessage();
    void programming();
    void displayInfo() const;

    // destructor
    ~Laptop() {
        if (model != nullptr) {
            delete[] model;
            model = nullptr;
        }
    }
};

