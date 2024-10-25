#include "serial.h"

// Set
void Serial::setName(string n) {
    name = n;
}

void Serial::setCountry(string c) {
    country = c;
}

void Serial::setSeasons(unsigned int s) {
    if (s >= 0) seasons = s;
    throw "You enter wrong season..\n";
}

void Serial::setRating(double r) {
    if (r >= 0) rating = r;
    throw "You enter wrong rating..\n";
}

void Serial::setIsWatched(bool flag) {
    isWatched = flag;
}

// Get
string Serial::getName() { return name; }

string Serial::getCountry() { return country; }

unsigned int Serial::getSeasons() { return seasons; }

double Serial::getRating() { return rating; }

bool Serial::getIsWatched() { return isWatched; }

// Methods
void Serial::watchSerial() {
    cout << "Watching the serial .." << endl;
}

void Serial::pauseSerial() {
    cout << "Serial on pause" << endl;
}

void Serial::printRecommend() {
    cout << "Recommend to watch -> " << name << "!!!" << endl;
}

void Serial::updateRating(double newRating) {
    rating = newRating;
    cout << "The rating of " << name << " has been updated to: " << rating << endl;
}

void Serial::displayInfo() {
    cout << "Serial Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Country: " << country << endl;
    cout << "Seasons: " << seasons << endl;
    cout << "Rating: " << rating << endl;
    cout << "Is Watched: " << (isWatched ? "Yes" : "No") << endl;
}

