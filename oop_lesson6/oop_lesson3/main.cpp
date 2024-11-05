#include "string"
#include "cat.h"
#include "dyson.h"
#include "serial.h"
#include "phone.h"
#include "laptop.h"

int main()
{
    cout << "Enter cat's name -> ";
    string name;
    cin >> name;

    Cat cat_01;
    cat_01.setName(name.c_str());
    cat_01.displayInfo();

    string name02 = "Bublichek";
    Cat cat_02(name02);
    cat_02.displayInfo();

    cout << endl;
    cin.ignore();

    cout << "Enter serial -> ";
    string serial;
    getline(cin, serial);

    Serial s;
    s.setName(serial.c_str());
    s.displayInfo();



    return 0;
}



