#include "phone.h"

// c-tor
Phone::Phone() {
    setModel("Unknown");
    setColor("Unknown");
    setPrice(0);
    setYearRelease(0);
    setIsWork(true);
}

Phone::Phone(const char* model, string color, int price, int yearRelease, bool isWork) {
    setModel(model);
    setColor(color);
    setPrice(price);
    setYearRelease(yearRelease);
    setIsWork(isWork);
}

// c-tor preobr
Phone::Phone(const string& model) {
    setModel(model.c_str());
    setColor("Unknown");
    setPrice(0);
    setYearRelease(0);
    setIsWork(true);
}

// copy c-tor
Phone::Phone(Phone& original) {
    cout << "Copy c-tor!\n";
    setModel(original.model);
    setColor(original.color);
    setPrice(original.price);
    setYearRelease(original.yearRelease);
    setIsWork(original.isWork);
}

// Set
void Phone::setModel(const char* model) {
    if (this->model != nullptr) {
        delete this->model;
    }
    int length = strlen(model) + 1;
    this->model = new char[length];
    strcpy_s(this->model, length, model);
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
string Phone::getModel() const { return string(model); }

string Phone::getColor() const { return color; }

unsigned int Phone::getPrice() const { return price; }

unsigned int Phone::getRating() const { return yearRelease; }

bool Phone::getIsWork() const { return isWork; }

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

void Phone::displayInfo() const {
    cout << "Phone Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Price: " << price << " $" << endl;
    cout << "Year of release: " << yearRelease << endl;
    cout << "Is work: " << (isWork ? "Yes" : "No") << "\n\n";
}

