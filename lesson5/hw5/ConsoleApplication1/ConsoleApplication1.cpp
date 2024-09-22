#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// task 1
	// Ввести массив из 5 чисел, а затем вывести его в обратном порядке.
    setlocale(0, "");
    const int size = 5;
    int numbers[size];

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    // task 2
    // Создать массив из 20 случайных чисел.Вывести все элементы массива с чётными индексами.
    const int size = 20;
    int numbers[size];

    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << "\n";
    }

    for (int j = 0; j < size; j+=2) {
        cout << "Its even index - " << numbers[j] << "\n";  
    }

    // task 3
    // Создать массив из 10 случайных чисел в диапазоне от - 20 до 20. Определить количество, сумму и среднее арифметическое положительных элементов массива.
    const int size = 10;
    int numbers[size];
    int positiveNumberCount = 0;
    int positiveSum = 0;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 41 - 20;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    for (int j = 0; j < size; j++) {
        if (numbers[j] > 0) {
            positiveNumberCount++;
            positiveSum += numbers[j];
        }
    }

    double positiveAVG = positiveNumberCount != 0 ? positiveSum / positiveNumberCount : 0;

    cout << "Positive number count = " << positiveNumberCount << "\n";
    cout << "Positive sum = " << positiveSum << "\n";
    cout << "Positive avg = " << positiveAVG << "\n";

    // task 4
    //Написать программу, которая предлагает пользователю ввести число, и затем подсчитывает, сколько раз это число встречается в массиве на 100 случайных элементов.
    const int size = 100;
    int numbers[size];
    int userNumberCount = 0;
    int userNumber;
    cout << "Enter number from 0 to 100" << "\n";
    cin >> userNumber;
    cout << "You enter - " << userNumber << "\n";

    srand(time(0));

    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << "\t";
    }
    cout << "\n";

    for (int j = 0; j < size; j++) {
        if (numbers[j] == userNumber) {
            userNumberCount += 1;
        }
    }

    cout << "Your number count - " << userNumberCount << "\n";

    // task 5
    // Создать массив из 200 случайных чисел в диапазоне от 0 до 200. Определить количество одноразрядных, двухразрядных и трёхразрядных чисел в процентном отношении.
    const int size = 100;
    int numbers[size];
    int one = 0;
    int two = 0;
    int three = 0;

    srand(time(0));

    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 200 + 1;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << "\t";
    }
    cout << "\n";

    for (int j = 0; j < size; j++) {
        if (numbers[j] >= 1 && numbers[j] < 10) {
            one++;
        }
        else if (numbers[j] >= 10 && numbers[j] < 100) {
            two++;
        }
        else if (numbers[j] >= 100 && numbers[j] <= 200) {
            three++;
        }
    }

    cout << "One - " << one << "\n";
    cout << "Two - " << two << "\n";
    cout << "Three - " << three << "\n";

    double onePercent = (one * 100.0) / size;
    double twoPercent = (two * 100.0) / size;
    double threePercent = (three * 100.0) / size;

    cout << "One percent: " << onePercent << "%\n";
    cout << "Two percent: " << twoPercent << "%\n";
    cout << "Three percent: " << threePercent << "%\n";

    // task 6
    // Создать массив из 10 целых случайных чисел.Изменить порядок следования элементов массива на противоположный(1 - й элемент меняется с 10 - м, 2 - й элемент с 9 - м и тд).
    const int size = 10;
    int numbers[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 50 + 1;
    }

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << "\t";
    }
    cout << "\n";


    for (int j = 0; j < size / 2; j++) {
        int temp = numbers[j];
        numbers[j] = numbers[size - 1 - j];
        numbers[size - 1 - j] = temp;
    }

    cout << "New array: " << "\n";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << "\t";
    }

    // task 7
    // Даны 2 массива размерности M и N соответственно.Необходимо переписать в третий массив общие элементы первых двух массивов, без повторений.
    const int sizeM = 10;
    const int sizeN = 5;
    int numbers_M[sizeM];
    int numbers_N[sizeN];
    int numbers[sizeM + sizeN];
    int count = 0;

    srand(time(0));

    for (int i = 0; i < sizeM; i++) {
        numbers_M[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < sizeN; i++) {
        numbers_N[i] = rand() % 10 + 1;
    }

    cout << "Array M:\n";
    for (int i = 0; i < sizeM; i++) {
        cout << numbers_M[i] << "\t";
    }
    cout << "\n";

    cout << "Array N:\n";
    for (int i = 0; i < sizeN; i++) {
        cout << numbers_N[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < sizeM; i++) {
        for (int j = 0; j < sizeN; j++) {
            if (numbers_M[i] == numbers_N[j]) {
                bool common = false;
                for (int k = 0; k < count; k++) {
                    if (numbers[k] == numbers_M[i]) {
                        common = true;
                        break;
                    }
                }

                if (!common) {
                    numbers[count++] = numbers_M[i];
                }
            }
        }
    }

    cout << "Common elements:\n";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << "\t";
    }
    cout << "\n";

    // task 8
    // Создать два массива A и B по 5 элементов.Создать третий массив C на 10 элементов, в который копируются элементы из первого и второго массива поочередно(например, С[0] = A[0], c[1] = B[0], C[2] = A[1], C[3] = B[1] и тд)
    const int sizeA = 5;
    const int sizeB = 5;
    const int sizeC = sizeA + sizeB;

    int arr_A[sizeA];
    int arr_B[sizeB];
    int arr_C[sizeC];

    srand(time(0));

    for (int i = 0; i < sizeA; i++) {
        arr_A[i] = rand() % 50 + 1;
    }

    for (int i = 0; i < sizeB; i++) {
        arr_B[i] = rand() % 50 + 1;
    }

    cout << "Array A:\n";
    for (int i = 0; i < sizeA; i++) {
        cout << arr_A[i] << "\t";
    }
    cout << "\n";

    cout << "Array B:\n";
    for (int i = 0; i < sizeB; i++) {
        cout << arr_B[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < sizeC; i++) {
        arr_C[2 * i] = arr_A[i];
        arr_C[2 * i + 1] = arr_B[i];
    }

    // Вывод массива C
    cout << "Array C:\n";
    for (int i = 0; i < sizeC; i++) {
        cout << arr_C[i] << "\t";
    }
    cout << "\n";

}


