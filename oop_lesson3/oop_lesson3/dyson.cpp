#include "dyson.h"

// Set
void Dyson::setModel(string m) {
    model = m;
}

void Dyson::setPrice(unsigned int p) {
    if (p >= 0)  price = p;
    throw "You enter wrong price..\n";
}

void Dyson::setColor(string c) {
    color = c;
}

void Dyson::setPurchaseCity(string city) {
    purchaseCity = city;
}

void Dyson::setIsWork(bool flag) {
    isWork = flag;
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
