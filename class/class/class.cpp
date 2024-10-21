#include "header.h"

int main()
{
    Cat cat = getCatInfo();
    cat.drinkWater();
    cat.displayInfo();
    cout << endl;

    Dyson dyson = getDysonInfo();
    dyson.updatePrice(300);
    dyson.printPrice();
    dyson.displayInfo();
    cout << endl;
   
    Serial serial = getSerialInfo();
    serial.displayInfo();
    cout << endl;

    Phone phone = getPhoneInfo();
    phone.displayInfo();
    cout << endl;

    Laptop laptop = getLaptopInfo();
    laptop.displayInfo();
    cout << endl;

    return 0;

}







