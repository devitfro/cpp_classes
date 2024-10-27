#include <iostream>
#include <windows.h>
using namespace std;

class Date {
    unsigned short day;
    unsigned short month;
    int year = 2000;

public:
    // если клиент создаёт объект в коде как Date x; то логика - записать текущее число
    Date() {
        cout << "Object with type Date has been created!\n";
        SYSTEMTIME st;
        GetSystemTime(&st);
        // задача конструктора: обязательно проинициализировать ВСЕ поля текущего класса
        day = st.wDay;
        month = st.wMonth;
        year = st.wYear;
    }

    Date& SetDay(unsigned short);
    Date& SetMonth(unsigned short);
    Date& SetYear(int);

    unsigned short GetDay() const;
    unsigned short GetMonth() const;
    int GetYear() const;

    void Print() const;
};

Date& Date::SetDay(unsigned short day) {
    if (day >= 1 && day <= 31)
        this->day = day;
    else throw "Было передано неверное значение в параметр d. Ожидается целое число в диапазоне от 1 до 31 включительно.\n";
    return *this;
}
Date& Date::SetMonth(unsigned short month) {
    if (month >= 1 && month <= 12) this->month = month;
    else throw "Было передано неверное значение в параметр m. Ожидается целое число в диапазоне от 1 до 12 включительно.\n";
    return *this;
}
Date& Date::SetYear(int year) {
    this->year = year;
    return *this;
}
unsigned short Date::GetDay() const {
    return this->day;
}
unsigned short Date::GetMonth() const {
    return this->month;
}
int Date::GetYear() const {
    return this->year;
}
void Date::Print() const {
    cout << this->day << "-" << this->month << "-" << this->year << "\n";
}

int main() {
    Date a;
    a.Print();
}