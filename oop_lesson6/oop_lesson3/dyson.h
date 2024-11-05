#pragma once

#include <iostream>
using namespace std;

class Dyson {
    char* model = nullptr;
    unsigned int price;
    string color;
    string purchaseCity;
    bool isWork;

public:
    // c-tor
    Dyson();
    Dyson(const char*, unsigned int, string, string, bool);
    Dyson(const string&);

    // Set
    void setModel(const char*);
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

    // destructor
    ~Dyson() {
        if (model != nullptr) {
            delete[] model;
            model = nullptr;
        }
    }
};


