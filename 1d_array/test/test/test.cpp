#include <iostream>
#include <string> // stoi
using namespace std;

void start_randomize() {
    srand(time(0));
    rand();
}

bool check_diapazone(const int value) {
    int min = 1;
    int max = 1000000000;

    return value >= min && value <= max;
}

void set_int_value(int& size) {
    int number = -1;
    do {
        cout << "Enter size of array: " << "\n";
        string attempt;
        cin >> attempt;
       
        try {
            number = stoi(attempt);
        }
        catch (...) {
            cout << "Error.." << "\n";
        }
       
    } while (!check_diapazone(number));

    size = number;
}

// int* - тип указателя на масив ( в параметр придет копия)
// int*? - ссілка на указатель на масив ( в параметр придет оригинал)

void allocate_1D_array_memory(int*& arr, const int size) {
    arr = new int[size];
}

int my_random(int min, int max) {
    int k = max - min + 1;
    return rand() % k + min;
}

void random_fill_1D_array(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = my_random(0, 100);
    }
}

void user_fill_1D_array(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter value for element # " << i << "\n";
        cin >> arr[i];
    }
}

// в первом параметре указатель отмечается с &, потому что планируется перевыделение памяти, запись нового указателя
// второй параметр тоже с &, размер изменится и нужно передать в оригинал
void add_elem_to_end(int*& arr, int& size, const int& value) {
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    temp[size] = value;

    // старый массив больше не нужен, потому что есть новый с доп элементов в конце
    delete[] arr;
    // оригинальный указатель arr нужно переставить со старого уничтоженого на новый
    arr = temp;

    // изменить размер массива за которым приходится следить отдельно и самстоятельно, потому что массивы ничего не помнят
    size++;
}

void print_1D_array(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void free_memory(int*& arr) {
    delete[] arr;
    arr = nullptr;
    delete arr;
}

int main()
{
    start_randomize();

    int size;
    set_int_value(size);

    int* arr;
    allocate_1D_array_memory(arr, size);

    random_fill_1D_array(arr, size);

    print_1D_array(arr, size);

    cout << "\n";
    add_elem_to_end(arr, size, 100);

    print_1D_array(arr, size);
    //free_memory(arr);


}

