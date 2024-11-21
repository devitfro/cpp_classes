#pragma once
#include "Student.h"

// c-tor
Student::Student() : Person() {
    setUniversity("Unknown");
    setGroup("0");
    setRating(0);
    setIsStuding(false);
    setIsContract(true);
}

Student::Student(string name, unsigned int age, string city, string university, string group, double rating, bool isStuding, bool isContract) : Person(name, age, city) {
    setUniversity(university);
    setGroup(group);
    setRating(rating);
    setIsStuding(isStuding);
    setIsContract(isContract);
}

// set
void Student::setUniversity(string university) {
    this->university = university;
}

void Student::setGroup(string group) {
    this->group = group;
}

void Student::setRating(double rating) {
    this->rating = rating;
}

void Student::setIsStuding(bool isStuding) {
    this->isStuding = isStuding;
}

void Student::setIsContract(bool isContract) {
    this->isContract = isContract;
}

// get
string Student::getUniversity() const { return university; }
string Student::getGroup() const { return group; }
double Student::getRating() const { return rating; }
bool Student::getIsStuding() const { return isStuding; }
bool Student::getIsContract() const { return isContract; }

// methods
void Student::printStudentInfo() {
    cout << "Student info:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
    cout << "University: " << university << "\n";
    cout << "Group: " << group << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Is studing: " << (isStuding ? "yes\n" : "no\n");
    cout << "Is contract: " << (isContract ? "yes\n" : "no\n");
}
