#include "serial.h"

// Set
void Serial::setName(string name) {
    this->name = name;
}

void Serial::setCountry(string country) {
    this->country = country;
}

void Serial::setSeasons(unsigned int seasons) {
    if (seasons >= 0) this->seasons = seasons;
    else throw "You enter wrong season..\n";
}

void Serial::setRating(double rating) {
    if (rating >= 0) this->rating = rating;
    else throw "You enter wrong rating..\n";
}

void Serial::setIsWatched(bool isWatched) {
    this->isWatched = isWatched;
}

// Get
string Serial::getName() { return name; }

string Serial::getCountry() { return country; }

unsigned int Serial::getSeasons() { return seasons; }

double Serial::getRating() { return rating; }

bool Serial::getIsWatched() { return isWatched; }

// Methods
void Serial::watchSerial() {
    if (!isWatched) {
        isWatched = true;
        cout << "Watching the serial .." << endl;
    }
}

void Serial::pauseSerial() {
    cout << "Serial on pause" << endl;
}

void Serial::printRecommend() {
    if (rating > 8 && isWatched) {
        cout << "Recommend to watch -> " << name << "!!!" << endl;
    }
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

