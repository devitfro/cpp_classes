#include "header.h"

void start_randomize() {
    srand(time(0));
    rand();
}

int my_random(int min, int max) {
    int k = max - min + 1;
    return rand() % k + min;
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
// int*& - ссылка на указатель на масив ( в параметр придет оригинал)

void allocate_1D_array_memory(int*& arr, const int size) {
    // size = 100; // пометка параметра как const не позволит изменить значение параметра в теле функции
    arr = new int[size];
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

void print_1D_array(int* arr, const int size) {
    cout << "\n======================================\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n======================================\n";
}

void free_memory(int*& arr) {
    delete[] arr;
    arr = nullptr;
    delete arr;
}

// в первом параметре указатель отмечается с &, потому что планируется перевыделение памяти, запись НОВОГО адреса в указатель, и работать хотелось бы с оригиналом
// второй параметр тоже нуждается в & - размер изменится, и новое число нужно писать в оригинал
void add_elem_to_end(int*& arr, int& size, const int& value) {

    // 1) нужно будет создать ещё один массив, т.н. НОВЫЙ массив, количество элементов в нём будет на 1 элемент больше, чем в СТАРОМ
    // 2) arr - указатель на СТАРЫЙ оригинальный массив, нужен ещё один указатель на НОВЫЙ массив
    int* temp = new int[size + 1];
    // 3) нужно перегнать все полезные элементы со старого массива в новый
    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    // 4) в конец нового массива пишется то самое вэлью из третьего параметра функции (которое можно передавать по ссылке)
    temp[size] = value;
    // 5) старый массив больше не нужен, потому что есть новый с дополнительным элементов в конце
    delete[] arr;
    // 6) оригинальный указатель ar нужно переставить со старого уничтоженного массива на новый
    arr = temp;
    // 7) изменить размер массива, за которым приходится следить отдельно и самостоятельно (потому что массивы ничего не помнят)
    size++;
}

void add_elem_to_start(int*& arr, int& size, const int& value) {
    int* temp = new int[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i + 1] = arr[i];
    }
    temp[0] = value;

    delete[] arr;
    arr = temp;
    size++;
}

void drop_end_elem(int*& arr, int& size) {
    int* temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size--;
}

void drop_start_elem(int*& arr, int& size) {
    int* temp = new int[size - 1];
    for (int i = 1; i < size; i++) {
        temp[i - 1] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size--;
}

void add_inside_arr(int*& arr, int& size, const int& value, int index) {
    if (index <= 1 || index >= size - 1) {
        return;
    }

    int* temp = new int[size + 1];

    for (int i = 0; i < size + 1; i++) {
        if (i < index) {
            temp[i] = arr[i];
        }
        else if (i == index) {
            temp[i] = value;
        }
        else {
            temp[i] = arr[i - 1];
        }
    }

    delete[] arr;
    arr = temp;
    size++;
}

void drop_inside_arr(int*& arr, int& size, int index) {
    if (index <= 1 || index >= size - 1) {
        return;
    }

    int* temp = new int[size - 1];

    for (int i = 0; i < size - 1; i++) {
        if (i < index) {
            temp[i] = arr[i];
        }
        else if (i == index) {
            temp[i] = arr[i + 1];
        }
        else {
            temp[i] = arr[i + 1];
        }

    }

    delete[] arr;
    arr = temp;
    size--;
}