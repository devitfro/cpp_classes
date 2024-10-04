#include "header.h"

void pointers(int***** ptr) {
    cout << "Address ptr5: " << ptr << endl;
    cout << "Address ptr4: " << *ptr << endl;
    cout << "Address ptr3: " << **ptr << endl;
    cout << "Address ptr2: " << ***ptr << endl;
    cout << "Address ptr1: " << ****ptr << endl;
}

void to_ideal(int** user_weight, int* ideal_weight, int* result) {

    if (*ideal_weight > **user_weight) {
        *result = *ideal_weight - **user_weight;
        cout << "You need to +" << *result << "kg" << endl;
    }
    else if (*ideal_weight < **user_weight) {
        *result = **user_weight - *ideal_weight;
        cout << "You need to -" << *result << "kg" << endl;
    }
    else {
        *result = 0;
        cout << "You have ideal weight!" << endl;
    }
}

void sum_ptr(int** ptr_ptr_num_1, int** ptr_ptr_num_2, int* result) {
    *result = **ptr_ptr_num_1 + **ptr_ptr_num_2;
}

void num_in_pow(int* ptr_num) {
    int res_pow_2 = pow(*ptr_num, 2);
    int res_pow_3 = pow(*ptr_num, 3);
    int res_pow_4 = pow(*ptr_num, 4);

    cout << "res to ^2 = " << res_pow_2 << endl;
    cout << "res to ^3 = " << res_pow_3 << endl;
    cout << "res to ^4 = " << res_pow_4 << endl;
}