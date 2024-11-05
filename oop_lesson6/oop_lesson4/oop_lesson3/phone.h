#pragma once

#include <iostream>
using namespace std;

class Phone {
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;

public:
    // Set
    void setModel(string);
    void setColor(string);
    void setPrice(unsigned int);
    void setYearRelease(unsigned int);
    void setIsWork(bool);

    // Get
    string getModel();
    string getColor();
    unsigned int getPrice();
    unsigned int getRating();
    bool getIsWork();

    // Methods
    void call();
    void playGame();
    void checkMessage();
    void takePhoto();
    void displayInfo();
};
