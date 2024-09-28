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
    Line(20, '@', 31, true);
    cout << endl;
    Line(20, '@', 32, false);

    // task 2
    int x, y, color;
    cout << "Enter x -> " << " ";
    cin >> x;
    cout << "Enter y -> " << " ";
    cin >> y;
    cout << "Enter color -> " << " " ;
    cin >> color;

    SetCursor(x, y, color);

    // task 3
    const int size = 10;
    int arrNumbers[size];
    CreateRanomArray(arrNumbers, size);
    PrintRandomArray(arrNumbers, size);
    FindAverageNumber(arrNumbers, size);

    // task 4
    const int size = 10;
    int arrNumbers[size];
    CreateRanomArray(arrNumbers, size);
    PrintRandomArray(arrNumbers, size);
    FindMinNumberOfArray(arrNumbers, size);
    FindMaxNumberOfArray(arrNumbers, size);

    // task 5
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
    int ind = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            ind = i;
        }
    }
    cout << "Min number = " << min << endl;
    cout << "Index = " << ind << endl;
}

void FindMaxNumberOfArray(int arr[], int size) {
    int max = arr[0];
    int ind = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ind = i;
        }
    }
    cout << "Min number = " << max << endl;
    cout << "Index = " << ind << endl;
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