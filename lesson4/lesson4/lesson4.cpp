#include <iostream>
using namespace std;

int main()
{
    // task 1
    // С клавиатуры вводится целое число.Вывести на экран все числа, на которые введённое число делится без остатка.Например, для 60 такими числами станут 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60.
    
    cout << "Enter number -> ";
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    // task 2
    // Написать игру «Угадай число».Пользователь мысленно загадывает число от 0 до 1000, компьютер отгадывает его за минимальное количество попыток.
    
    int start = 0;
    int end = 1000;
    int userResponse;
    int count = 0;

    cout << "Guess a number from 0 to 1000\n";

    while (start <= end) {
        int guess = start + (end - start) / 2;
        cout << "Maybe its: " << guess << ".This number:\n0.less\n1.equal\n2.greater ";
        cin >> userResponse;

        if (userResponse == 1) {
            cout << "Win! By - " << count << endl;
            break;
        }
        else if (userResponse == 2) {
            start = guess + 1;
            count++;
        }
        else if (userResponse == 0) {
            end = guess - 1;
            count++;
        }
        else {
            cout << "Error\n";
        }
    }

    // task 3
    // Ежемесячная стипендия студента составляет N гривен, а расходы на проживание превышают стипендию и составляют M гривен в месяц.Рост цен ежемесячно увеличивает расходы на 3 % .Составьте программу расчёта суммы денег, которую необходимо единовременно попросить у родителей, чтобы можно было прожить учебный год(10 месяцев), используя только эти деньги и стипендию.
   
     cout << "Enter price by your university -> ";
    int priceUniver;
    cin >> priceUniver;

    cout << "Enter price by you -> ";
    int priceUser;
    cin >> priceUser;

    int totalMoney = 0;
    int months = 10;
    double percent = 0.03;

    for (int i = 1; i <= months; i++) {
        totalMoney += priceUser;
        priceUser += (int)(priceUser * percent);
    }
 
    cout << "Total price: " << totalMoney - (priceUniver * 10) << endl;

    // task 4
    //Скоро Новый год!Необходимо срочно нарисовать ёлочку.С клавиатуры вводится количество ярусов, и высота каждого яруса ёлочки

    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    int maxWidth = 1 + 2 * (height + width - 2);

    for (int w = 0; w < width; w++) {
        for (int h = 0; h < height; h++) {
            int stars = 1 + 2 * (h + w);
            int spaces = (maxWidth - stars) / 2;

            for (int s = 0; s < spaces; s++) {
                cout << ' ';
            }

            for (int s = 0; s < stars; s++) {
                cout << '*';
            }

            cout << "\n";
        }
    }

    return 0;

 }
