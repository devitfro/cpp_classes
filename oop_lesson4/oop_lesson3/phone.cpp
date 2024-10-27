#include "phone.h"

// Set
void Phone::setModel(string model) {
    this->model = model;
}

void Phone::setColor(string color) {
    this->color = color;
}

void Phone::setPrice(unsigned int price) {
    if (price > 0) this->price = price;
    else throw "You enter wrong rating..\n";
}

void Phone::setYearRelease(unsigned int yearRelease) {
    if (yearRelease > 1800) this->yearRelease = yearRelease;
    else throw "You enter wrong year..\n";
}

void Phone::setIsWork(bool isWork) {
    this->isWork = isWork;
}

// Get
string Phone::getModel() { return model; }

string Phone::getColor() { return color; }

unsigned int Phone::getPrice() { return price; }

unsigned int Phone::getRating() { return yearRelease; }

bool Phone::getIsWork() { return isWork; }

// Methods

void Phone::call() {
    if (isWork) {
        cout << "Calling ..." << endl;
    }
}

void Phone::playGame() {
    if (isWork) {
        cout << "Playing game on phone!" << endl;
    }
}

void Phone::checkMessage() {
    if (isWork) {
        cout << "Checking message on phone!" << endl;
    }
}

void Phone::takePhoto() {
    if (isWork) {
        cout << "Taking photo!" << endl;
    }
}

void Phone::displayInfo() {
    cout << "Phone Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
}

