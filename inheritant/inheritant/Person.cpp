#include "Person.h"

// c-tor
Person::Person(string name, unsigned int age, string city) {
    setName(name);
    setAge(age);
    setCity(city);
}

Person::Person() {
        cout << "c-tor base\n";
        setName("Unknown");
        setAge(1);
        setCity("Unknown");
}

// set
void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(unsigned int age) {
    if (age > 150) {
        cout << "Not correct age...\n";
    }
    this->age = age;
}

void Person::setCity(string city) {
    this->city = city;
}

// get
string Person::getName() const { return name; }
unsigned int Person::getAge() const { return age; }
string Person::getCity() const { return city; }

// methods
void Person::printPersonInfo() {
    cout << "Person info:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
}

