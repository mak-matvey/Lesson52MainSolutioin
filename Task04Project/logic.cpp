#include "logic.h"

void reverse_array_by_loop(int* array, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int t = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = t;
    }
}

void reverse_array_by_recursion(int* array, int size)
{
    if (size < 2) {
        return;
    }

    int temp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = temp;

    reverse_array_by_recursion(array + 1, size - 2);
}