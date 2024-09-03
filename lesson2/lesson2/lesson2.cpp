#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// task 1
	// Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.

	float num1 = 10.5;
	float num2 = 12.6;
	float num3 = 13.9;

	float avg = (num1 + num2 + num3) / 3;
	cout << "Avg = " << avg;

	// task 2
	// Написать программу, которая предлагает пользователю ввести радиус окружности, а затем считает площадь и длину этой окружности.Число задать в программе как вещественную константу.

	const float pi = 3.14;

	cout << "Enter radius -> ";
	int r;
	cin >> r;

	float square = pi * r * r;
	float l = 2 * pi * r;

	cout << "Square = " << square << "\n";
	cout << "L = " << l << "\n";

	// task 3
	// Написать программу, которая предоставляет пользователю возможность ввести с клавиатуры количество гривен, и переводит это количество в доллары, евро и биткоины.

	cout << "Enter count UAH -> ";
	int uah;
	cin >> uah;

	float dol = 41.5;
	float euro = 45.6;
	float btc = 0.0022;

	float toDol = uah / dol;
	float toEuro = uah / euro;
	float toBTC = uah * btc;

	cout << "To dol -> " << toDol << "\n";
	cout << "To euro -> " << toEuro << "\n";
	cout << "To BTC -> " << toBTC << "\n";

	// task 4
	// Поменять местами значения переменных и, сначала с использованием дополнительной третьей переменной, а затем – без.
	// variant 1

	int a = 10;
	int b = 5;
	int temp = a;

	a = b;
	b = temp;

	cout << "a -> " << a << "\n";
	cout << "b -> " << b << "\n";

	// variant 2
	int a = 10;
	int b = 5;

	a = a + b; // a = 15
	b = a - b; // b = 10
	a = a - b;
	cout << "a -> " << a << "\n";
	cout << "b -> " << b << "\n";

	// task 5
	// Пользователь вводит с клавиатуры сумму в гривнах(дробное число).Вывести по отдельности количество гривен и количество копеек(например, ввести 45.67 гривен - получить и вывести 45 гривен 67 копеек)

	cout << "Enter sum -> ";
	float sum;
	cin >> sum;

	int g = int(sum);

	int k = (int)round((sum - g) * 100);
	cout << "g = " << g << "\n";
	cout << "k = " << k << "\n";

	// task 6
	// Ввести 4 - значное число и подсчитать сумму первой и третьей цифры и разность второй и четвертой цифры.

	cout << "Enter number -> ";
	int number;
	cin >> number;

	int x4 = number % 10;
	int x3 = number / 10 % 10;
	int x2 = number / 100 % 10;
	int x1 = number / 1000;

	int sum = x1 + x3;
	cout << "x1 + x3 = " << sum << "\n";

	int dif = x2 - x4;
	cout << "x2 - x4 = " << dif << "\n";

	// task 7
	//Ввести с клавиатуры 3 - значное число и «перевернуть» его(например, ввести 357 – получить и вывести 753).

	cout << "Enter number -> ";
	int number;
	cin >> number;

	int x3 = number % 10;
	int x2 = number / 10 % 10;
	int x1 = number / 100;

	int newNumber = x3 * 100 + x2 * 10 + x1;
	cout << "Reversed number = " << newNumber << "\n";

	// task 8
	// Ввести с клавиатуры два 3 - значных числа и поменять у них средние цифры(например, ввести 357 и 702 – получить и вывести числа 307 и 752).

	cout << "Enter number 1 -> ";
	int number1;
	cin >> number1;

	cout << "Enter number 2 -> ";
	int number2;
	cin >> number2;

	int x3 = number1 % 10;
	int x2 = number1 / 10 % 10;
	int x1 = number1 / 100;

	int y3 = number2 % 10;
	int y2 = number2 / 10 % 10;
	int y1 = number2 / 100;

	int newNumber1 = x1 * 100 + y2 * 10 + x3;
	int newNumber2 = y1 * 100 + x2 * 10 + y3;

	cout << "New number 1 = " << newNumber1 << "\n";
	cout << "New number 2 = " << newNumber2 << "\n";

	// task 9
	// Ввести с клавиатуры 3 - значное число и удалить из него среднюю цифру(например, ввести 3, 5, 7 – получить и вывести число 37).

	cout << "Enter number -> ";
	int number;
	cin >> number;

	int x3 = number % 10;
	int x2 = number / 10 % 10;
	int x1 = number / 100;

	int newNumber = x1 * 10 + x3;
	cout << "New number = " << newNumber << "\n";

	// task 10
	// Ввести пятизначное число и сдвинуть его циклически вправо на 2 разряда(например, если число равно 12345 – вывести на экран 45123).

	cout << "Enter number -> ";
	int number;
	cin >> number;

	int x5 = number % 10;
	int x4 = number / 10 % 10;
	int x3 = number / 100 % 10;
	int x2 = number / 1000 % 10;
	int x1 = number / 10000;

	int newNumber = x4 * 10000 + x5 * 1000 + x1 * 100 + x2 * 10 + x3;
	cout << "New number = " << newNumber << "\n";

	// task 11
	// Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора(часы, минуты и секунды).Посчитать стоимость разговора, если стоимость минуты составляет 15 копеек, с учётом посекундной тарификации.

	const int tarif = 15;
	cout << "Enter start hours -> ";
	cout << "Enter start minutes -> ";
	cout << "Enter start sec -> ";

	int startHours, startMin, startSec;
	cin >> startHours >> startMin >> startSec;

	cout << "Enter end hours -> ";
	cout << "Enter end minutes -> ";
	cout << "Enter end sec -> ";

	int endHours, endMin, endSec;
	cin >> endHours >> endMin >> endSec;

	int hourToSec = (endHours - startHours) * 3600;
	int minToSec = (endMin - startMin) * 60;
	int secToSec = endSec - startSec;

	int sec = hourToSec + minToSec + secToSec;
	int price = sec * tarif;

	cout << "Price = " << price << "\n";

	return 0;

}
