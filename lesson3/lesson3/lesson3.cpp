#include <iostream>
using namespace std;

int main()
{
    // task 1
    // ������ �����, � ���������� � ������ ���, ��� ���.

    cout << "Enter number -> ";
    int number;
    cin >> number;

    if (number % 10 == 0) {
        cout << "Number is even";
    }
    else {
        cout << "Number is odd";
    }

    // task 2
    // ������ ��� ����� � ����� ���������� ����� ���.

    cout << "Enter num1, num2 and num3 -> ";
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int min = num1;

    if (num2 < min) {
        min = num2;
    }
    else if (num3 < min) {
        min = num3;
    }

    cout << "Min number = " << min;

    // task 3
    // ������ ����� � ���������� ������ �� ��� 3, 5, � 7 ������������.

    cout << "Enter number -> ";
    int number;
    cin >> number;

    bool flag = false;

    if (number % 3 == 0 && number % 5 == 0 and number % 7 == 0) {
        flag = true;
    }
    cout << boolalpha;
    cout << "Multiples of 3, 5 and 7 = " << flag;

    // task 4
    // ����� ������������ �������� ����� 4 ����������, ��������� ��������� ��������.

    cout << "Enter number1 -> ";
    int number1, number2, number3, number4;
    cin >> number1 >> number2 >> number3 >> number4;

    int maxNumber = (number1 > number2 ? number1 : number2) > (number3 > number4 ? number3 : number4) ? (number1 > number2 ? number1 : number2) : (number3 > number4 ? number3 : number4);

    cout << "maxNumber -> " << maxNumber << endl;

    // task 5
    // ������ � ���������� ����������� ����� � ����������, �������� �� ��� �����������(�.�.��������� �������� � ����� ������������ - ��������, 12321 ����� �����������, � 12345 � �� ���������).

    cout << "Enter number -> ";
    int num;
    cin >> num;

    int x5 = num % 10;
    int x4 = num / 100 % 10;
    int x3 = num / 100 % 10;
    int x2 = num / 1000 % 10;
    int x1 = num / 10000;

    int reverseNumber = x1 * 10000 + x2 * 1000 + x3 * 100 + x2 * 10 + x5;
    bool isPalidrome = false;

    if (num == reverseNumber) {
        isPalidrome = true;
    }
    cout << boolalpha;
    cout << "Number is palidrome - " << isPalidrome << endl;

    // task 6
    // ����������, ����������� �� ����������� ������ ����� ��� �������, ���� ��� �������.������ ������� ����� �������.

    cout << "Enter (x1, y1), (x2, y2) -> ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    bool isParalelToX = false;
    bool isParalelToY = false;

    if (y1 == y2 and x1 != x2) {
        isParalelToX = true;
    } 
    else if (x1 == x2 and y1 != y2) {
        isParalelToY = true;
    }

    cout << boolalpha;

    if (!isParalelToX and !isParalelToY) {
        cout << "Line is not paralel to X and Y" << endl;
    }
    else if (isParalelToX) {
        cout << "Line is paralel to X - " << isParalelToX << endl;
    }
    else {
        cout << "Line is paralel to Y - " << isParalelToY << endl;
    }

    // task 7 
    // �������� ���������, ������� ���������� ������������ ������� �������� �� ������(1 � �����, 2 � ������ � ��.), � � ����� ����������, ����� ����� ����� ��������� ��������.� ������ ������ ���� ���� �� 10 ��������.
    
    setlocale(0, "");
    cout << "�������� ��������:\n1.�����\n2.������\n3.����\n4.������\n5.������\n6.����\n7.�������\n8.������\n9.���\n10.������\n";
    int num;
    cin >> num;
   
    switch (num) {
        case 1:
            cout << "���" << endl;
            break;
        case 2:
            cout << "���" << endl;
            break;
        case 3:
            cout << "�����" << endl;
            break;
        case 4:
            cout << "����" << endl;
            break;
        case 5:
            cout << "���-���" << endl;
            break;
        case 6:
            cout << "���-���" << endl;
            break;
        case 7:
            cout << "���-���" << endl;
            break;
        case 8:
            cout << "��� �����" << endl;
            break;
        case 9:
            cout << "���" << endl;
            break;
        case 10:
            cout << "����" << endl;
            break;
        default:
            cout << "������� �� 1 �� 10" << endl;
            break;
    }

    // task 8
    // ��������� �������� ���������� ���� � �����.������ ���� � ���, ������� ��������� � ���, ������� ����� �� ������� ��� ��������(��������� ��� = ���� � 110 ��� �������, � - 100 ��� ������).

    cout << "Enter your gender: 1.Male 2.Female, height and weight: ";
    int gender, height, weight;
    cin >> gender >> height >> weight;

    int idealResultMale;;
    int idealResultFemale;

    switch (gender) {
        case 1:
            idealResultMale = height - 100;
            if (weight > idealResultMale) {
                cout << "You should lose for ideal weight - " << weight - idealResultMale << endl;
            }
            else if (weight < idealResultMale) {
                cout << "You should gain for ideal weight - " << idealResultMale - weight << endl;
            }
            else {
                cout << "You have ideal weight!"<< endl;
            }
            break;
        case 2:
            idealResultFemale = height - 110;
            if (weight > idealResultFemale) {
                cout << "You should lose for ideal weight - " << weight - idealResultFemale << endl;
            }
            else if (weight < idealResultFemale) {
                cout << "You should gain for ideal weight - " << idealResultFemale - weight << endl;
            }
            else {
                cout << "You have ideal weight!" << endl;
            }
            break;
        default:
            cout << "Enter 1 or 2" << endl;
            break;
    }

    // task 9
    // ������ � ���������� ����� � ���������, ����������� �� ��� ����� ��������� �� ��(������������).

    cout << "Enter number -> ";
    int number;
    cin >> number;

    int rangeStart = 10;
    int rangeEnd = 100;

    if (number >= 10 && number <= 100) {
        cout << "Your number is in range from 10 to 100" << endl;
    }
    else {
        cout << "Your number is not in range from 10 to 100" << endl;
    }

    // task 10
    // ������ � ���������� ������������ ����� �����������(��������������) ������, � ���������� �������� �� �� ����������(��������� ����� ��� ������ � ��� ��������� ���� ������).
    cout << "Enter ticket number -> ";
    int number;
    cin >> number;

    int x6 = number % 10;
    int x5 = number / 10 % 10;
    int x4 = number / 100 % 10;
    int x3 = number / 1000 % 10;
    int x2 = number / 10000 % 10;
    int x1 = number / 100000;

    int sumFirstPart = x1 + x2 + x3;
    int sumSecondPart = x4 + x5 + x6;

    bool isHappyTicket = false;

    if (sumFirstPart == sumSecondPart) {
        isHappyTicket = true;
    }
    cout << boolalpha;
    cout << "Your ticket is happy - " << isHappyTicket << endl;

    return 0;
}


