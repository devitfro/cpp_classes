#include <iostream>
#include <windows.h>
using namespace std;

class Date {
    unsigned short day;
    unsigned short month;
    int year = 2000;

public:
    // ���� ������ ������ ������ � ���� ��� Date x; �� ������ - �������� ������� �����
    Date() {
        cout << "Object with type Date has been created!\n";
        SYSTEMTIME st;
        GetSystemTime(&st);
        // ������ ������������: ����������� ������������������� ��� ���� �������� ������
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
    else throw "���� �������� �������� �������� � �������� d. ��������� ����� ����� � ��������� �� 1 �� 31 ������������.\n";
    return *this;
}
Date& Date::SetMonth(unsigned short month) {
    if (month >= 1 && month <= 12) this->month = month;
    else throw "���� �������� �������� �������� � �������� m. ��������� ����� ����� � ��������� �� 1 �� 12 ������������.\n";
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