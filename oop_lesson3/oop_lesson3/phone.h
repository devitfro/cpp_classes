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
    void setModel(string m);
    void setColor(string c);
    void setPrice(unsigned int p);
    void setYearRelease(unsigned int y);
    void setIsWork(bool flag);

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
