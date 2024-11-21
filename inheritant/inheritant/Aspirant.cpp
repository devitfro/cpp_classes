#include "Aspirant.h"

// c-tor
Aspirant::Aspirant() : Student() {
    setTopicPhD("Unknown");
}

Aspirant::Aspirant(string name, unsigned int age, string city, string university, string group, double rating, bool isStuding, bool isContract, string topicPhD) : Student(name, age, city, university, group, rating, isStuding, isContract) {
    setTopicPhD(topicPhD);
}

// set
void Aspirant::setTopicPhD(string topicPhD) {
    this->topicPhD = topicPhD;
}

// get
string Aspirant::getTopicPhD() const { return topicPhD; }

// methods
void Aspirant::printAspirantInfo() {
    cout << "Aspirant info:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "City: " << city << "\n";
    cout << "University: " << university << "\n";
    cout << "Group: " << group << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Is studing: " << (isStuding ? "yes\n" : "no\n");
    cout << "Is contract: " << (isContract ? "yes\n" : "no\n");
    cout << "Topic PhD: " << topicPhD << "\n";
}

