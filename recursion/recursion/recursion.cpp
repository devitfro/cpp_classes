#include <iostream>
using namespace std;

void rec_func(int num);
void print_func_a(int num_a, int num_b);
void print_func_b(int num_a, int num_b);
void print_number_task3(int number);
void print_number_task4(int number);
int number_to_pow(int num, int pow);

int main()
{
    // task 1
    // Дано натуральное число n.Выведите все числа от 1 до n
    cout << "Enter number ->" <<  " ";
    int number;
    cin >> number;
    if (number > 1) {
        rec_func(number);
    }
    else {
        cout << "Enter new number .." << "\n";
    }

    // task 2
    // Даны два целых числа A и В.Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае.
    int number_a, number_b;
    cout << "Enter number A -> " << " ";
    cin >> number_a;
    cout << "Enter number B -> " << " ";
    cin >> number_b;

    if (number_a < number_b) {
        print_func_a(number_a, number_b);
    }
    else {
        print_func_b(number_a, number_b);
    }

    // task 3
    // Дано натуральное число N.Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами.
    int number;
    cout << "Enter number -> " << " ";
    cin >> number;

    if (number >= 10) {
        print_number_task4(number);
    }
    else {
        cout << "Enter new number .." << "\n";
    }

    print_number_task3(number);

    // task 4
    // Дано натуральное число N.Выведите все его цифры по одной, в обычном порядке, разделяя их пробелами или новыми строками.
    int number;
    cout << "Enter number -> " << " ";
    cin >> number;

    if (number >= 10) {
        print_number_task4(number);
    }
    else {
        cout << "Enter new number .." << "\n";
    }

    // task 5
    // Вычислить степень числа, используя рекурсию.В функцию передаётся 2 параметра - число и степень.
    int number, pow_number;
    cout << "Enter number -> " << " ";
    cin >> number;
    cout << "Enter number for pow -> " << " ";
    cin >> pow_number;

    int res = number_to_pow(number, pow_number);
    cout << res << "\n";

    return 0;
}

void rec_func(int num) {
    if (num > 0) {
        rec_func(num - 1);
        cout << num << " ";
    }
}

void print_func_a(int num_a, int num_b) {
    if (num_b >= num_a) {
        print_func_a(num_a, num_b - 1);
        cout << num_b << " ";
    }
}

void print_func_b(int num_a, int num_b) {
    if (num_a >= num_b) {
        cout << num_a << " ";
        print_func_b(num_a - 1, num_b);
    }
}

void print_number_task3(int number) {
    if (number > 0) {
        cout << number % 10 << " ";
        print_number_task3(number / 10);
    }
}

void print_number_task4(int number) {
    if (number > 0) {
        print_number_task4(number / 10);
        cout << number % 10 << " ";
    }
}

int number_to_pow(int num, int pow) {
    if (pow > 0) {
        return number_to_pow(num, pow - 1) * num;
    }
}


