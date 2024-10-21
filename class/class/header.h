#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

class Cat {
public:
    string name;
    int age;
    string color;
    string breed;
    bool isPretty;

    void sayMeow() {
        cout << "Meow!\n";
    }

    void playGame() {
        cout << "Cat is playing...\n";
    }

    void drinkWater() {
        cout << "Cat is drinking .. water...\n";
    }

    void printPretty() {
        cout << "Cat is so pretty\n";
    }

    void displayInfo() {
        cout << "Cat Information:" << endl;
        cout << "Cat Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Color: " << color << endl;
        cout << "Breed: " << breed << endl;
        cout << "Is Pretty: " << (isPretty ? "Yes" : "No") << endl;
    }
};

class Dyson {
public:
    string model;
    int price;
    string color;
    string purchaseCity;
    bool isWork;

    void printWork() {
        if (isWork) {
            cout << "Dyson is working!\n";
        }
        else {
            cout << "Dyson is not working!\n";
        }
    }

    void printPrice() {
        cout << "Price = " << price << endl;
    }

    void sold() {
        cout << "Dyson is sold!\n";
    }

    void updatePrice(int newPrice) {
        price = newPrice;
        cout << "The price of the Dyson has been updated to: $" << price << endl;
    }

    void displayInfo() {
        cout << "Dyson Information:" << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << "$" << endl;
        cout << "Color: " << color << endl;
        cout << "Purchased in: " << purchaseCity << endl;
        cout << "Is working: " << (isWork ? "Yes" : "No") << endl;
    }
};

class Serial {
public:
    string name;
    string country;
    int seasons;
    double rating;
    bool isWatched;

    void watchSerial() {
        cout << "Watching the serial .." << endl;
    }

    void pauseSerial() {
        cout << "Serial on pause" << endl;
    }

    void printRecommend() {
        cout << "Recommend to watch -> " << name << "!!!" << endl;
    }

    void updateRating(double newRating) {
        rating = newRating;
        cout << "The rating of " << name << " has been updated to: " << rating << endl;
    }

    void displayInfo() {
        cout << "Serial Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Seasons: " << seasons << endl;
        cout << "Rating: " << rating << endl;
        cout << "Is Watched: " << (isWatched ? "Yes" : "No") << endl;
    }
};

class Phone {
public:
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;

    void call() {
        cout << "Calling ..." << endl;
    }

    void playGame() {
        cout << "Playing game on phone!" << endl;
    }

    void checkMessage() {
        cout << "Checking message on phone!" << endl;
    }

    void takePhoto() {
        cout << "Taking photo!" << endl;
    }

    void displayInfo() {
        cout << "Phone Information:" << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << " $" << endl;
        cout << "Year of release: " << yearRelease << endl;
        cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
    }
};

class Laptop {
public:
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;

    void work() {
        cout << "Working ..." << endl;
    }

    void playGame() {
        cout << "Playing game on laptop!" << endl;
    }

    void checkMessage() {
        cout << "Checking message on laptop!" << endl;
    }

    void programming() {
        cout << "Programming on c++!" << endl;
    }

    void displayInfo() {
        cout << "Laptop Information:" << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << price << " $" << endl;
        cout << "Year of release: " << yearRelease << endl;
        cout << "Is work: " << (isWork ? "Yes" : "No") << endl;
    }
};

Cat getCatInfo();
Dyson getDysonInfo();
Serial getSerialInfo();
Phone getPhoneInfo();
Laptop getLaptopInfo();

#endif

