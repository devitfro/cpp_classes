#include "laptop.h"

// c-tor
Laptop::Laptop() {
    setModel("Unknown");
    setColor("Unknown");
    setPrice(0);
    setYearRelease(0);
    setIsWork(true);
}

Laptop::Laptop(const char* model, string color, int price, int yearRelease, bool isWork) {
    setModel(model);
    setColor(color);
    setPrice(price);
    setYearRelease(yearRelease);
    setIsWork(isWork);
}

// c-tor preobr
Laptop::Laptop(const string& model) {
    setModel(model.c_str());
    setColor("Unknown");
    setPrice(0);
    setYearRelease(0);
    setIsWork(true);
}

// Set
void Laptop::setModel(const char* model) {
    if (this->model != nullptr) {
        delete this->model;
    }
    int length = strlen(model) + 1;
    this->model = new char[length];
    strcpy_s(this->model, length, model);
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
string Laptop::getModel() const { return string(model); }

string Laptop::getColor() const { return color; }

unsigned int Laptop::getPrice() const { return price; }

unsigned int Laptop::getRating() const { return yearRelease; }

bool Laptop::getIsWork() const { return isWork; }

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

void Laptop::displayInfo() const {
    cout << "Laptop Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << "\n\n";
}

