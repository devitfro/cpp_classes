#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int happyness = 90;
};

class Cat {
public:
    string name;
    int energy = 100;

    void Play(Person& person) {
        if (energy < 10) return;
        person.happyness++;
        energy--;
        cout << "Cat is playing with " << person.name << "\n";
    }
};

int main()
{
    Person person;
    person.name = "Alex";
    Cat cat;
    cat.Play(person);
    cout << cat.energy;
}

