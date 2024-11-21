//#include <iostream>
#include "string"
#include "Person.h"
#include "Student.h"
#include "Aspirant.h"

int main()
{
    string name, userAnswer;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "You are student or aspirant? \n";
    getline(cin, userAnswer);

    if (userAnswer == "student") {
        Student s(name, 25, "Kharkiv", "KhPI", "KN100", 90, true, false);
        s.printStudentInfo();
    }
    else if (userAnswer == "aspirant") {
        cout << "Enter PhD topic: \n";
       
        string topic;
        getline(cin, topic);
       
        Aspirant a(name, 27, "Kyiv", "KNU", "PhD100", 95, true, true, topic);
        a.printAspirantInfo();
    }
    else {
        cout << "Not correct answer...\n";
    }

    return 0;
}





