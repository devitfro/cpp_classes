#include "cat.h"

// c-tor
Cat::Cat() {
    name = "Bulochka";
    age = 1;
    color = "white and gray";
    breed = "british";
    isPretty = true;
}

// delegirovanie
Cat::Cat(string name) : Cat(name, 3) {}

Cat::Cat(string name, unsigned int age) : Cat(name, age, "gray", "scotish", true) {}

Cat::Cat(string name, unsigned int age, string color, string breed, bool isPretty) {
    setName(name);
    setAge(age);
    setColor(color);
    setBreed(breed);
    setIsPretty(isPretty);
}

// Set
void Cat::setName(string name) {
    this->name = name;
}

void Cat::setAge(unsigned int a) {
    if (a >= 0 && a <= 100) {
        age = a;
    }
    else {
        throw "You enter wrong age..\n";
    }
}

void Cat::setColor(string color) {
    this->color = color;
}

void Cat::setBreed(string breed) {
    this->breed = breed;
}

void Cat::setIsPretty(bool isPretty) {
    this->isPretty = isPretty;
}

// Get
string Cat::getName() const { return name; }

unsigned int Cat::getAge() const { return age; }

string Cat::getColor() const { return color; }

string Cat::getBreed() const { return breed; }

bool Cat::getIsPretty() const { return isPretty; }

// Methods 
void Cat::sayMeow() const {
    cout << "Meow!\n";
}

void Cat::playGame() {
    if (energy < 20) return;
    cout << "Cat is playing...\n";
    happiness++;
    energy--;
}

void Cat::drinkWater() {
    energy++;
    happiness++;
    cout << "Cat is drinking .. water...\n";
}

void Cat::printPretty() {
    if (happiness < 70) {
        isPretty = false;
    }
    else {
        cout << "Cat is so pretty\n";
    } 
}

void Cat::displayInfo() const {
    cout << "Cat Information:" << endl;
    cout << "Cat Name: " << this->name << endl;
    cout << "Age: " << this->age << " years" << endl;
    cout << "Color: " << this->color << endl;
    cout << "Breed: " << this->breed << endl;
    cout << "Is Pretty: " << (this->isPretty ? "Yes" : "No") << endl;
    cout << "Energy: " << this->energy << endl;
    cout << "Happiness: " << this->happiness << "\n\n";
}

