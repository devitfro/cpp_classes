#pragma once

#include <iostream>
using namespace std;

enum class Poroda { SCOTLAND, BRITISH, PERSIAN, MAINE_COON, DEVON_REKS };
enum class Colors { WHITE, BLUE, GRAY, PINK, BLACK, ORANGE, BROWN };
string breedToString(Poroda breed);
string colorsToString(Colors color);


class Cat {
public:
    string name;
    int age;
    Colors color;
    Poroda cat_breed;
    bool is_pretty;

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
 /*       cout << "Color: " << colorsToString(color) << endl;
        cout << "Breed: " << breedToString(cat_breed) << endl;*/
        cout << "Is Pretty: " << (is_pretty ? "Yes" : "No") << endl;
    }
};

class Dyson {
public:
    string model;
    int price;
    Colors color;
    string purchase_city;
    bool is_work;

    void printWork() {
        if (is_work) {
            cout << "Dyson is working!\n";
        }
        else {
            cout << "Dyson is not working!\n";
        }
    }

    void printPrice() {
        cout << "Price = " << price << endl;
    }

    void Sold() {
        cout << "Dyson is sold!\n";
    }
 
    void updatePrice(int new_price) {
        price = new_price;
        cout << "The price of the Dyson has been updated to: $" << price << endl;
    }

    void displayInfo() {
        cout << "Dyson Information:" << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        //cout << "Color: " << colorToString(color) << endl;
        cout << "Purchased in: " << purchase_city << endl;
        cout << "Is working: " << (is_work ? "Yes" : "No") << endl;
    }

};

class Serial {
public:
    string name;
    string country;
    int seasons;
    double rating;
    bool is_watched;

    void watchSerial() {
         cout << "Watching the serial .." << endl;
    }

    void pauseSerial() {
        cout << "Serial on pause" << endl;
    }

    void printRecommend() {
        cout << "Recommend to watch -> " << name << "!!!" << endl;
    }

    void updateRating(double new_rating) {
        rating = new_rating;
        cout << "The rating of " << name << " has been updated to: " << rating << endl;
    }

    void displayInfo() {
        cout << "Serial Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Country: " << country << endl;
        cout << "Seasons: " << seasons << endl;
        cout << "Rating: " << rating << endl;
        cout << "Is Watched: " << (is_watched ? "Yes" : "No") << endl;
    }
};



Dyson get_dyson_info();
Cat get_cat_info();
Serial get_serial_info();

void print_about_dyson(const Dyson& dyson);
void print_about_cat(const Cat& cat);
void print_about_serial(const Serial& serial);


