#include <iostream>
using namespace std;


class A {
    string name = "Alina";
    friend class B;
    //friend void B::SayHello();
    //friend int main();

};

class B {
    string name = "Misha";
public:
    void SayHello() {
        A a;
        cout << "Hello " << a.name << "\n";
    }

};

int main()
{
    B b;
    b.SayHello();
  
}

