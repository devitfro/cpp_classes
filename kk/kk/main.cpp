#include "string"
#include "cat.h"
#include "dyson.h"
#include "serial.h"
#include "phone.h"
#include "laptop.h"

int main()
{
    cout << Cat::getCatsCount() << "\n";
    Cat cat;
    cat.displayInfo(); 
    cout << Cat::getCatsCount() << "\n\n";

    Cat cat_copy = cat;
    cat_copy.displayInfo();
    cout << Cat::getCatsCount() << "\n\n";

    Cat cat_another;
    cout << Cat::getCatsCount() << "\n\n";

    cout << "======== Serials ========\n";
    cout << Serial::getSerialsCount() << "\n";
    Serial s;
    s.displayInfo();
    cout << Serial::getSerialsCount() << "\n";

    cout << "========\n";

    Serial s_copy = s;
    s_copy.displayInfo();
    cout << Serial::getSerialsCount() << "\n";

    return 0;
}

