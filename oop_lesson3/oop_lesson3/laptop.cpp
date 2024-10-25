#include "laptop.h"

// Set
void Laptop::setModel(string m) {
    model = m;
}

void Laptop::setColor(string c) {
    color = c;
}

void Laptop::setPrice(unsigned int p) {
    if (p > 0) price = p;
    throw "You enter wrong rating..\n";
}

void Laptop::setYearRelease(unsigned int y) {
    if (y > 1800) yearRelease = y;
    else  throw "You enter wrong year..\n";
   
}

void Laptop::setIsWork(bool flag) {
    isWork = flag;
}

// Get
string Laptop::getModel() { return model; }

string Laptop::getColor() { return color; }

unsigned int Laptop::getPrice() { return price; }

unsigned int Laptop::getRating() { return yearRelease; }

bool Laptop::getIsWork() { return isWork; }

// Methods
void Laptop::work() {
    cout << "Working ..." << endl;
}

void Laptop::playGame() {
    cout << "Playing game on laptop!" << endl;
}

void Laptop::checkMessage() {
    cout << "Checking message on laptop!" << endl;
}

void Laptop::programming() {
    cout << "Programming on c++!" << endl;
}

void Laptop::displayInfo() {
    cout << "Laptop Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
}

