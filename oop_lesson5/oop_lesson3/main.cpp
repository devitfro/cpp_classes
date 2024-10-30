#include "cat.h"
#include "dyson.h"
#include "serial.h"
#include "phone.h"
#include "laptop.h"

int main()
{
    Cat cat01;
    Cat cat02("Bublik", 5, "white", "no", true);

    cat01.displayInfo();
    cat02.displayInfo();

    cout << endl;

    Laptop laptop01;
    Laptop laptop02("sumsung", 600);

    laptop01.displayInfo();
    laptop02.displayInfo();

    cout << endl;
    Phone phone01;
    Phone phone02("sumsung", 600);

    phone01.displayInfo();
    phone02.displayInfo();

    cout << endl;
    Dyson dyson01;
    Dyson dyson02("airwrap", 700);

    dyson01.displayInfo();
    dyson02.displayInfo();

    cout << endl;
    Serial serial01;
    Serial serial02("A Game Of Thrones", 8);

    serial01.displayInfo();
    serial02.displayInfo();


    return 0;
}



