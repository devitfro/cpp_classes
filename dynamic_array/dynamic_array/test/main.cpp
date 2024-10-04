#include "header.h"

int main()
{
    start_randomize();

    int size;
    set_int_value(size);

    int* arr;
    allocate_1D_array_memory(arr, size);

    random_fill_1D_array(arr, size);
    print_1D_array(arr, size);

    add_elem_to_end(arr, size, 100);
    print_1D_array(arr, size);

    add_elem_to_start(arr, size, 50);
    print_1D_array(arr, size);

    drop_end_elem(arr, size);
    print_1D_array(arr, size);

    drop_start_elem(arr, size);
    print_1D_array(arr, size);

    add_inside_arr(arr, size, 25, 3);
    print_1D_array(arr, size);

    drop_inside_arr(arr, size, 3);
    print_1D_array(arr, size);

    free_memory(arr);

    return 0;
}

