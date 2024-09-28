#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;

void Line(int size, char symb, int color, bool flag);
void SetCursor(int x, int y, int color);
void CreateRanomArray(int arr[], int size);
void PrintRandomArray(int arr[], const int size);
void FindAverageNumber(int arr[], int size);
void FindMinNumberOfArray(int arr[], int size);
void FindMaxNumberOfArray(int arr[], int size);
void SumBetweenNumbers(int num1, int num2);
void InitProgram();

int main()
{
    InitProgram();
    // task 1
  /*  Написать функцию Line, которую можно будет вызвать так :
    Line(20, '@', 12, true); и при этом горизонтальная нарисуется линия, состоящая из 20 «собачек» красного цвета.Если передать в последнем параметре false – линия станет вертикальной.*/
    Line(20, '@', 31, true);
    cout << endl;
    Line(20, '@', 32, false);

    // task 2
    // Написать функцию SetCursor, которая устанавливает координаты и цвет текста.Функция принимает три аргумента : координата по X, координата по Y, номер цвета.
    int x, y, color;
    cout << "Enter x -> " << " ";
    cin >> x;
    cout << "Enter y -> " << " ";
    cin >> y;
    cout << "Enter color -> " << " " ;
    cin >> color;

    SetCursor(x, y, color);

    // task 3
    // Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.
    const int size = 10;
    int arrNumbers[size];
    CreateRanomArray(arrNumbers, size);
    PrintRandomArray(arrNumbers, size);
    FindAverageNumber(arrNumbers, size);

    // task 4
    //Написать функцию, показывающую на экран минимум и максимум(значение и индекс) среди элементов передаваемого ей массива.
    const int size = 10;
    int arrNumbers[size];
    CreateRanomArray(arrNumbers, size);
    PrintRandomArray(arrNumbers, size);
    FindMinNumberOfArray(arrNumbers, size);
    FindMaxNumberOfArray(arrNumbers, size);

    // task 5
    // Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.
    int num1, num2;
    cout << "Enter number 1 -> " << " ";
    cin >> num1;
    cout << "Enter number 2 -> " << " ";
    cin >> num2;
   
    SumBetweenNumbers(num1, num2);
    _getch();

    return 0; 
}
void InitProgram() {
    srand(time(0));
    rand();
}

void SumBetweenNumbers(int num1, int num2) {
    int sum = 0;
    if (num1 > num2) {
        for (int i = num2; i <= num1; i++) {
            sum += i;
        }
    }
    else {
        for (int i = num1; i <= num2; i++) {
            sum += i;
        }
    }
    cout << "Sum between " << num1 << " and " << num2 << " = " << sum << endl;   
}

void FindMinNumberOfArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Min number = " << min << endl;
}

void FindMaxNumberOfArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Min number = " << max << endl;
}

void CreateRanomArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 21;
    }
}

void PrintRandomArray(int arr[], const int size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void FindAverageNumber(int arr[], int size) {
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = static_cast<float>(sum) / size;
    cout << "Average = " << avg << endl;
}

void SetCursor(int x, int y, int color) {
    cout << "\033[" << color << "m";
    cout << "\033[" << y << ";" << x << "H";
    cout << "Text";
    cout << "\033[0m";
}

void Line(int size, char symb, int color, bool flag) {
    for (int i = 0; i < size; i++) {
        if (flag) {
            cout << "\033[" << color << "m" << symb << "\033[0m" << "";
        }
        else {
            cout << "\033[" << color << "m" << symb << "\033[0m" << "\n";
        }
    }
}