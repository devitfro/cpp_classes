#include "phone.h"

// Set
void Phone::setModel(string m) {
    model = m;
}

void Phone::setColor(string c) {
    color = c;
}

void Phone::setPrice(unsigned int p) {
    if (p > 0) price = p;
    throw "You enter wrong rating..\n";
}

void Phone::setYearRelease(unsigned int y) {
    if (y > 1800) yearRelease = y;
    throw "You enter wrong year..\n";
}

void Phone::setIsWork(bool flag) {
    isWork = flag;
}

// Get
string Phone::getModel() { return model; }

string Phone::getColor() { return color; }

unsigned int Phone::getPrice() { return price; }

unsigned int Phone::getRating() { return yearRelease; }

bool Phone::getIsWork() { return isWork; }

// Methods

void Phone::call() {
    cout << "Calling ..." << endl;
}

void Phone::playGame() {
    cout << "Playing game on phone!" << endl;
}

void Phone::checkMessage() {
    cout << "Checking message on phone!" << endl;
}

void Phone::takePhoto() {
    cout << "Taking photo!" << endl;
}

void Phone::displayInfo() {
    cout << "Phone Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
}

