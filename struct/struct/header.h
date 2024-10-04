#pragma once

#include <iostream>
using namespace std;

enum class Poroda { SCOTLAND, BRITISH, PERSIAN, MAINE_COON, DEVON_REKS };
enum class Colors { WHITE, BLUE, GRAY, PINK, BLACK, ORANGE, BROWN };
string breedToString(Poroda breed);
string colorsToString(Colors color);


struct Date {
    int year;
    int month;
    int day;
};

struct Cat {
    string name;
    int age;
    Date birthday;
    Colors color;
    Poroda cat_breed;
    bool is_pretty;
};

struct Dyson {
    string model;
    int price;
    Colors color;
    Date production_date;
    string purchase_city;
    bool is_work;
};

struct Serial {
    string name;
    string country;
    Date production_date;
    int seasons;
    bool is_watched;
};

Dyson get_dyson_info();
Cat get_cat_info();
Serial get_serial_info();

void print_about_dyson(const Dyson& dyson);
void print_about_cat(const Cat& cat);
void print_about_serial(const Serial& serial);


