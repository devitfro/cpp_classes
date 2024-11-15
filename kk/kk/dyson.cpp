#include "dyson.h"

// c-tor
Dyson::Dyson() {
    setModel("Unknown");
    setColor("Unknown");
    setPrice(0);
    setPurchaseCity("Unknown");
    setIsWork(true);
}

Dyson::Dyson(const char* model, unsigned int price, string color, string purchaseCity, bool isWork) {
    setModel(model);
    setColor(color);
    setPrice(price);
    setPurchaseCity(purchaseCity);
    setIsWork(isWork);
}

// c-tor preobr
Dyson::Dyson(const string& model) {
    setModel(model.c_str());
    setColor(color);
    setPrice(price);
    setPurchaseCity(purchaseCity);
    setIsWork(isWork);
}

// copy c-tor
Dyson::Dyson(Dyson& original) {
    cout << "Copy c-tor!\n";
    setModel(original.model);
    setColor(original.color);
    setPrice(original.price);
    setPurchaseCity(original.purchaseCity);
    setIsWork(original.isWork);
}

// Set
void Dyson::setModel(const char* model) {
    if (this->model != nullptr) {
        delete this->model;
    }
    int length = strlen(model) + 1;
    this->model = new char[length];
    strcpy_s(this->model, length, model);
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
string Dyson::getModel() const { return string(model); }

unsigned int Dyson::getPrice() const { return price; }

string Dyson::getColor() const { return color; }

string Dyson::getPurchaseCity() const { return purchaseCity; }

bool Dyson::getIsWork() const { return isWork; }

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

void Dyson::displayInfo() const {
    cout << "Dyson Information:" << endl;
    cout << "Model: " << model << endl;
    cout << "Price: " << price << "$" << endl;
    cout << "Color: " << color << endl;
    cout << "Purchased in: " << purchaseCity << endl;
    cout << "Is working: " << (isWork ? "Yes" : "No") << "\n\n";
}

