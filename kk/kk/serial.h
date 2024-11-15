#pragma once

#include <iostream>
using namespace std;

class Serial {
    static int serialsCount;
    char* name = nullptr;
    string country;
    int seasons;
    double rating;
    bool isWatched;

public:
    // c-tor
    Serial();
    Serial(const char*, string, int, double, bool);
    Serial(const string&);

    // copy c-tor
    Serial(Serial&);

    // Set
    void setName(const char*);
    void setCountry(string);
    void setSeasons(unsigned int);
    void setRating(double);
    void setIsWatched(bool);

    // Get
    static int getSerialsCount();
    string getName() const;
    string getCountry() const;
    unsigned int getSeasons() const;
    double getRating() const;
    bool getIsWatched() const;

    // Methods
    void watchSerial();
    void pauseSerial();
    void printRecommend();
    void updateRating(double);
    void displayInfo() const;

    // destructor
    ~Serial() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
        serialsCount--;
    }
};

