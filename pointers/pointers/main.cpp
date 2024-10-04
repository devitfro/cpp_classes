#include "header.h"

int main()
{
    // task 1
    int a = 5;
    int b = 10;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int ptr_diff = ptr_b - ptr_a;
    cout << "Diff = " << ptr_diff << endl;

    long byte_ptr_diff = (char*)ptr_b - (char*)ptr_a;
    cout << "Byte diff = " << byte_ptr_diff << endl;

    // task 2
    int number;
    cout << "Enter number -> " << "";
    cin >> number;

    int* ptr_number = &number;

    num_in_pow(ptr_number);

    // task 3
    int num_1 = 5;
    int num_2 = 7;
    int result;

    int* ptr_num_1 = &num_1;
    int* ptr_num_2 = &num_2;

    int** ptr_ptr_num_1 = &ptr_num_1;
    int** ptr_ptr_num_2 = &ptr_num_2;

    sum_ptr(ptr_ptr_num_1, ptr_ptr_num_2, &result);
    cout << result << endl;

    // task 4
    int height, weight;
    cout << "Enter your height -> " << "";
    cin >> height;
    cout << "Enter your weight -> " << "";
    cin >> weight;

    int result;

    int* ptr_height = &height;
    int* ptr_weight = &weight;

    int** ptr_ptr_height = &ptr_height;
    int** ptr_ptr_weight = &ptr_weight;

    int ideal_weight = **ptr_ptr_height - 110;

    to_ideal(ptr_ptr_weight, &ideal_weight, &result);

    // task 5
    int x = 10;
    int* ptr1 = &x;     
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    int**** ptr4 = &ptr3;
    int***** ptr5 = &ptr4;

    pointers(ptr5);

    return 0;
}

