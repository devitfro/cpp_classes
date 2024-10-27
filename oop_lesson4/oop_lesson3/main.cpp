#include "cat.h"
#include "dyson.h"
#include "serial.h"
#include "phone.h"
#include "laptop.h"

int main()
{
    Cat cat;
    string color = "white";
    cat.setColor(color);
    cat.setAge(50);
    cat.playGame();
    cout << cat.getAge() << endl;
    cat.sayMeow();
    cat.displayInfo();

    Dyson d;
    d.printWork();

    Serial s;
    bool flag = true;
    s.setIsWatched(flag);
    cout << s.getIsWatched();

    Phone p;
    p.playGame();

    Laptop l;
    l.programming();

    return 0;
}



