#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
protected:
    string university;
    string group;
    double rating;
    bool isStuding;
    bool isContract;

public:
    // c-tor
    Student();
    Student(string, unsigned int, string, string, string, double, bool, bool);

    // set
    void setUniversity(string);
    void setGroup(string);
    void setRating(double);
    void setIsStuding(bool);
    void setIsContract(bool);

    // get
    string getUniversity() const;
    string getGroup() const;
    double getRating() const;
    bool getIsStuding() const;
    bool getIsContract() const;

    // methods
    void printStudentInfo();
};