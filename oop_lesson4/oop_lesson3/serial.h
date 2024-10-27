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
    void setName(string);
    void setCountry(string);
    void setSeasons(unsigned int);
    void setRating(double);
    void setIsWatched(bool);

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
    void updateRating(double);
    void displayInfo();
};

