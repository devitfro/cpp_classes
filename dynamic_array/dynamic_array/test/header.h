#pragma once
#include <iostream>
#include <string> // stoi
#include <windows.h> // Sleep
using namespace std;

void start_randomize();
int my_random(int min, int max);
bool check_diapazone(const int value);
void set_int_value(int& size);
void allocate_1D_array_memory(int*& arr, const int size);
void random_fill_1D_array(int* arr, const int size);
void user_fill_1D_array(int* arr, const int size);
void print_1D_array(int* arr, const int size);
void free_memory(int*& arr);
void add_elem_to_end(int*& arr, int& size, const int& value);
void add_elem_to_start(int*& arr, int& size, const int& value);
void drop_end_elem(int*& arr, int& size);
void drop_start_elem(int*& arr, int& size);
void add_inside_arr(int*& arr, int& size, const int& value, int index);
void drop_inside_arr(int*& arr, int& size, int index);