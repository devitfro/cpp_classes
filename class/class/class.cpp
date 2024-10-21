#include "header.h"

int main()
{
    Cat cat = get_cat_info();
    cat.drinkWater();
    cat.displayInfo();
    cout << endl;

    Dyson dyson = get_dyson_info();
    dyson.updatePrice(300);
    dyson.printPrice();
    dyson.displayInfo();
    cout << endl;
   
    Serial serial = get_serial_info();
    serial.displayInfo();
    cout << endl;

    Phone phone = get_phone_info();
    phone.displayInfo();
    cout << endl;

    Laptop laptop = get_laptop_info();
    laptop.displayInfo();
    cout << endl;

    return 0;

}







