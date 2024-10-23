#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

class Cat {
    string name;
    unsigned int age;
    string color;
    string breed;
    bool isPretty;

public:
    // Set
    void setName(string n) {
        name = n;
    }

    void setAge(unsigned int a) {
        if (a >= 0 && a <= 100) age = a;
        throw "You enter wrong age..\n";   
    }

    void setColor(string c) {
        color = c;
    }

    void setBreed(string b) {
        breed = b;
    }

    void setIsPretty(bool flag) {
        isPretty = flag;
    }

    // Get
    string getName() { return name; }

    unsigned int getAge() { return age; }

    string getColor() { return color; }

    string getBreed() { return breed; }

    bool getIsPretty() { return isPretty; }

    // Methods 
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
    string model;
    unsigned int price;
    string color;
    string purchaseCity;
    bool isWork;

public:
    // Set
    void setModel(string m) {
        model = m;
    }

    void setPrice(unsigned int p) {
        if (p >= 0)  price = p;
        throw "You enter wrong price..\n";
    }

    void setColor(string c) {
        color = c;
    }

    void setPurchaseCity(string city) {
        purchaseCity = city;
    }

    void setIsWork(bool flag) {
        isWork = flag;
    }

    // Get
    string getModel() { return model; }

    unsigned int getPrice() { return price; }

    string getColor() { return color; }

    string getPurchaseCity() { return purchaseCity; }

    bool getIsWork() { return isWork; }

    // Methods
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
    string name;
    string country;
    int seasons;
    double rating;
    bool isWatched;

public:
    // Set
    void setName(string n) {
        name = n;
    }

    void setCountry(string c) {
        country = c;
    }

    void setSeasons(unsigned int s) {
        if (s >= 0) seasons = s;
        throw "You enter wrong season..\n";   
    }

    void setRating(double r) {
        if (r >= 0) rating = r;
        throw "You enter wrong rating..\n";
    }

    void setIsWatched(bool flag) {
        isWatched = flag;
    }

    // Get
    string getName() { return name; }

    string getCountry() { return country; }

    unsigned int getSeasons() { return seasons; }

    double getRating() { return rating; }

    bool getIsWatched() { return isWatched; }

    // Methods
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
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;
public:
    // Set
    void setModel(string m) {
        model = m;
    }

    void setColor(string c) {
        color = c;
    }

    void setPrice(unsigned int p) {
        if (p > 0) price = p;
        throw "You enter wrong rating..\n";
    }

    void setYearRelease(unsigned int y) {
        if (y > 1800) yearRelease = y;
        throw "You enter wrong year..\n";
    }

    void setIsWork(bool flag) {
        isWork = flag;
    }

    // Get
    string getModel() { return model; }

    string getColor() { return color; }

    unsigned int getPrice() { return price; }

    unsigned int getRating() { return yearRelease; }

    bool getIsWork() { return isWork; }

    // Methods

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
    string model;
    string color;
    int price;
    int yearRelease;
    bool isWork;

public:
    // Set
    void setModel(string m) {
        model = m;
    }

    void setColor(string c) {
        color = c;
    }

    void setPrice(unsigned int p) {
        if (p > 0) price = p;
        throw "You enter wrong rating..\n";
    }

    void setYearRelease(unsigned int y) {
        if (y > 1800) yearRelease = y;
        throw "You enter wrong year..\n";
    }

    void setIsWork(bool flag) {
        isWork = flag;
    }

    // Get
    string getModel() { return model; }

    string getColor() { return color; }

    unsigned int getPrice() { return price; }

    unsigned int getRating() { return yearRelease; }

    bool getIsWork() { return isWork; }

    // Methods
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


#endif


