#pragma once

#include <iostream>
using namespace std;

class Laptop {
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;

public:
    // c-tor
    Laptop();
    Laptop(string model, int price);
    Laptop(string model, string color, int price, int yearRelease, bool isWork);

    // Set
    void setModel(string);
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
};

