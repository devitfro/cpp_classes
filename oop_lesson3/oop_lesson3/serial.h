#pragma once

#include <iostream>
using namespace std;

class Serial {
    string name;
    string country;
    int seasons;
    double rating;
    bool isWatched;

public:
    // Set
    void setName(string n);
    void setCountry(string c);
    void setSeasons(unsigned int s);
    void setRating(double r);
    void setIsWatched(bool flag);

    // Get
    string getName();
    string getCountry();
    unsigned int getSeasons();
    double getRating();
    bool getIsWatched();

    // Methods
    void watchSerial();
    void pauseSerial();
    void printRecommend();
    void updateRating(double newRating);
    void displayInfo();
};

