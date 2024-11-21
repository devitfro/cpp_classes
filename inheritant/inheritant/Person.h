#pragma once
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    unsigned int age;
    string city;

public:
    // c-tor
    Person(string, unsigned int, string);
    Person();

    // set
    void setName(string);
    void setAge(unsigned int);
    void setCity(string);

    // get
    string getName() const;
    unsigned int getAge() const;
    string getCity() const;

    // methods
    void printPersonInfo();
};
