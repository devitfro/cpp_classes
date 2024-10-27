#include "dyson.h"

// Set
void Dyson::setModel(string model) {
    this->model = model;
}

void Dyson::setPrice(unsigned int price) {
    if (price >= 0)  this->price = price;
    else throw "You enter wrong price..\n";
}

void Dyson::setColor(string color) {
    this->color = color;
}

void Dyson::setPurchaseCity(string purchaseCity) {
    this->purchaseCity = purchaseCity;
}

void Dyson::setIsWork(bool isWork) {
    this->isWork = isWork;
}

// Get
string Dyson::getModel() { return model; }

unsigned int Dyson::getPrice() { return price; }

string Dyson::getColor() { return color; }

string Dyson::getPurchaseCity() { return purchaseCity; }

bool Dyson::getIsWork() { return isWork; }

// Methods
void Dyson::printWork() {
    if (isWork) {
        cout << "Dyson is working!\n";
    }
    else {
        cout << "Dyson is not working!\n";
    }
}

void Dyson::printPrice() {
    cout << "Price = " << price << endl;
}

void Dyson::sold() {
    cout << "Dyson is sold!\n";
}

void Dyson::updatePrice(int newPrice) {
    price = newPrice;
    cout << "The price of the Dyson has been updated to: $" << price << endl;
}

void Dyson::displayInfo() {
    cout << "Dyson Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "Color: " << color << endl;
    cout << "Purchased in: " << purchaseCity << endl;
    cout << "Is working: " << (isWork ? "Yes" : "No") << endl;
}
