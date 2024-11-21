#pragma once
#include <iostream>
#include "Student.h"

using namespace std;

class Aspirant : public Student {
    string topicPhD;
public:
    // c-tor
    Aspirant();

    Aspirant(string, unsigned int, string, string, string, double, bool, bool, string);

    // set
    void setTopicPhD(string);

    // get
    string getTopicPhD() const;

    // methods
    void printAspirantInfo();
};
