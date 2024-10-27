#pragma once

#include <iostream>
using namespace std;

class Dyson {
    string model;
    unsigned int price;
    string color;
    string purchaseCity;
    bool isWork;

public:
    // Set
    void setModel(string);
    void setPrice(unsigned int);
    void setColor(string);
    void setPurchaseCity(string);
    void setIsWork(bool);

    // Get
    string getModel();
    unsigned int getPrice();
    string getColor();
    string getPurchaseCity();
    bool getIsWork();

    // Methods
    void printWork();
    void printPrice();
    void sold();
    void updatePrice(int);
    void displayInfo();
};


