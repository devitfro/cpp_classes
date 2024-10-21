#include "header.h"

Cat getCatInfo() {
    Cat cat;
    cat.name = "Lelik";
    cat.age = 2;
    cat.breed = "SCOTLAND";
    cat.color = "Gray";
    cat.isPretty = true;

    return cat;
}

Dyson getDysonInfo() {
    Dyson user_dyson;
    user_dyson.model = "Airstrait";
    user_dyson.price = 500;
    user_dyson.color = "Pink";
    user_dyson.purchaseCity = "Kyiv";
    user_dyson.isWork = true;

    return user_dyson;
}

Serial getSerialInfo() {
    Serial serial;
    serial.name = "How I meet your mother";
    serial.country = "USA";
    serial.seasons = 9;
    serial.rating = 9.0;
    serial.isWatched = true;

    return serial;
}

Phone getPhoneInfo() {
    Phone phone;
    phone.model = "iPhone 15 pro";
    phone.color = "White";
    phone.isWork = true;
    phone.price = 500;
    phone.yearRelease = 2023;

    return phone;
}

Laptop getLaptopInfo() {
    Laptop laptop;
    laptop.model = "Macbook air 2023";
    laptop.color = "Gray";
    laptop.isWork = true;
    laptop.price = 800;
    laptop.yearRelease = 2023;

    return laptop;
}