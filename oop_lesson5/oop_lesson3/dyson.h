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
    // c-tor
    Dyson();
    Dyson(string model, int price);
    Dyson(string model, unsigned int price, string color, string purchaseCity, bool isWork);

    // Set
    void setModel(string);
    void setPrice(unsigned int);
    void setColor(string);
    void setPurchaseCity(string);
    void setIsWork(bool);

    // Get
    string getModel() const;
    unsigned int getPrice() const;
    string getColor() const;
    string getPurchaseCity() const;
    bool getIsWork() const;

    // Methods
    void printWork();
    void printPrice();
    void sold();
    void updatePrice(int);
    void displayInfo() const;
};


