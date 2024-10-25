#include "cat.h"

// Set
void Cat::setName(string n) {
    name = n;
}

void Cat::setAge(unsigned int a) {
    if (a >= 0 && a <= 100) {
        age = a;
    }
    else {
        throw "You enter wrong age..\n";
    }
}

void Cat::setColor(string c) {
    color = c;
}

void Cat::setBreed(string b) {
    breed = b;
}

void Cat::setIsPretty(bool flag) {
    isPretty = flag;
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
    cout << "Cat is playing...\n";
}

void Cat::drinkWater() {
    cout << "Cat is drinking .. water...\n";
}

void Cat::printPretty() {
    cout << "Cat is so pretty\n";
}

void Cat::displayInfo() {
    cout << "Cat Information:" << endl;
    cout << "Cat Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Color: " << color << endl;
    cout << "Breed: " << breed << endl;
    cout << "Is Pretty: " << (isPretty ? "Yes" : "No") << endl;
}

