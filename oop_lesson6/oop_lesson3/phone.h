#pragma once

#include <iostream>
using namespace std;

class Phone {
    char* model = nullptr;
    string color;
    int price;
    int yearRelease;
    bool isWork;

public:
    // c-tor
    Phone();
    Phone(const char*, string, int, int, bool);
    Phone(const string&);

    // Set
    void setModel(const char*);
    void setColor(string);
    void setPrice(unsigned int);
    void setYearRelease(unsigned int);
    void setIsWork(bool);

    // Get
    string getModel() const;
    string getColor() const;
    unsigned int getPrice() const;
    unsigned int getRating() const;
    bool getIsWork() const;

    // Methods
    void call();
    void playGame();
    void checkMessage();
    void takePhoto();
    void displayInfo() const;

    // destructor
    ~Phone() {
        if (model != nullptr) {
            delete[] model;
            model = nullptr;
        }
    }
};
