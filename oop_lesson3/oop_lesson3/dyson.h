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
    void setModel(string m);
    void setPrice(unsigned int p);
    void setColor(string c);
    void setPurchaseCity(string city);
    void setIsWork(bool flag);

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
    void updatePrice(int newPrice);
    void displayInfo();
};


