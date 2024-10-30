#include "cat.h"

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
string Cat::getName() { return name; }

unsigned int Cat::getAge() { return age; }

string Cat::getColor() { return color; }

string Cat::getBreed() { return breed; }

bool Cat::getIsPretty() { return isPretty; }

// Methods 
void Cat::sayMeow() {
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

void Cat::displayInfo() {
    cout << "Cat Information:" << endl;
    cout << "Cat Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Color: " << color << endl;
    cout << "Breed: " << breed << endl;
    cout << "Is Pretty: " << (isPretty ? "Yes" : "No") << endl;
}

