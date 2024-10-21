#include "header.h"

string breedToString(Poroda breed) {
    switch (breed) {
    case Poroda::SCOTLAND:
        return "Scotland";
    case Poroda::BRITISH:
        return "British";
    case Poroda::PERSIAN:
        return "Persian";
    case Poroda::MAINE_COON:
        return "Maine Coon";
    case Poroda::DEVON_REKS:
        return "Devon Reks";
    default:
        return "Unknown";
    }
}

string colorsToString(Colors color) {
    switch (color) {
    case Colors::WHITE:
        return "White";
    case Colors::BLUE:
        return "Blue";
    case Colors::GRAY:
        return "Gray";
    case Colors::PINK:
        return "Pink";
    case Colors::BLACK:
        return "Black";
    case Colors::ORANGE:
        return "Orange";
    case Colors::BROWN:
        return "Brown";
    default:
        return "Unknown";
    }
}


Dyson get_dyson_info() {
    Dyson user_dyson;
    user_dyson.model = "Airstrait";
    user_dyson.price = 500;
    user_dyson.color = Colors::PINK;
    user_dyson.purchase_city = "Kyiv";
    user_dyson.is_work = true;

    return user_dyson;
}

Cat get_cat_info() {
    Cat cat;
    cat.name = "Lelik";
    cat.age = 2;
    cat.cat_breed = Poroda::SCOTLAND;
    cat.color = Colors::GRAY;
    cat.is_pretty = true;

    return cat;
}

Serial get_serial_info() {
    Serial serial;
    serial.name = "How I meet your mother";
    serial.country = "USA";
    serial.seasons = 9;
    serial.is_watched = true;

    return serial;
}

void print_about_dyson(const Dyson& dyson) {
    cout << "Dyson Information:" << endl;
    cout << "Dyson Model: " << dyson.model << endl;
    cout << "Price: $" << dyson.price << endl;
    cout << "Color: " << colorsToString(dyson.color) << endl;
    cout << "Purchase City: " << dyson.purchase_city << endl;
    cout << "Is Working: " << (dyson.is_work ? "Yes" : "No") << endl;
}

//void print_about_cat(const Cat& cat) {
//    cout << "Cat Information:" << endl;
//    cout << "Cat Name: " << cat.name << endl;
//    cout << "Age: " << cat.age << " years" << endl;
//    cout << "Color: " << colorsToString(cat.color) << endl;
//    cout << "Breed: " << breedToString(cat.cat_breed) << endl;
//    cout << "Is Pretty: " << (cat.is_pretty ? "Yes" : "No") << endl;
//}

void print_about_serial(const Serial& serial) {
    cout << "Serial Information:" << endl;
    cout << "Serial Name: " << serial.name << endl;
    cout << "Country: " << serial.country << endl;
    cout << "Seasons: " << serial.seasons << endl;
    cout << "Is Watched: " << (serial.is_watched ? "Yes" : "No") << endl;
}


