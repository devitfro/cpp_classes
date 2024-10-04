#include "header.h"

int main()
{
    Dyson user_dyson = get_dyson_info();
    Cat cat = get_cat_info();
    Serial serial = get_serial_info();

    print_about_dyson(user_dyson);
    cout << endl;

    print_about_cat(cat);
    cout << endl;

    print_about_serial(serial);
    cout << endl;
   
    return 0;

}

