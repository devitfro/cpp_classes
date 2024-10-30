#include "laptop.h"

// Set
void Laptop::setModel(string model) {
    this->model = model;
}

void Laptop::setColor(string color) {
    this->color = color;
}

void Laptop::setPrice(unsigned int price) {
    if (price > 0) this->price = price;
    else throw "You enter wrong rating..\n";
}

void Laptop::setYearRelease(unsigned int yearRelease) {
    if (yearRelease > 1800) this->yearRelease = yearRelease;
    else throw "You enter wrong year..\n";
   
}

void Laptop::setIsWork(bool isWork) {
    this->isWork = isWork;
}

// Get
string Laptop::getModel() { return model; }

string Laptop::getColor() { return color; }

unsigned int Laptop::getPrice() { return price; }

unsigned int Laptop::getRating() { return yearRelease; }

bool Laptop::getIsWork() { return isWork; }

// Methods
void Laptop::work() {
    if (isWork) {
        cout << "Working ..." << endl;
    }
}

void Laptop::playGame() {
    if (isWork) {
        cout << "Playing game on laptop!" << endl;
    }
}

void Laptop::checkMessage() {
    if (isWork) {
        cout << "Checking message on laptop!" << endl;
    }
}

void Laptop::programming() {
    if (isWork) {
        cout << "Programming on c++!" << endl;
    }
}

void Laptop::displayInfo() {
    cout << "Laptop Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
}

