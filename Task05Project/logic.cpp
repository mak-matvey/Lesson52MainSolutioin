#include "logic.h"

bool is_mirrored_by_loop(int* array, int size)
{
    int left = 0;
    int right = size - 1;

    while (left < right) {
        if (array[left] != array[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool is_mirrored_by_recursion(int* array, int left, int right)
{
    if (left >= right) {
        return true;
    }
    if (array[left] != array[right]) {
        return false;
    }
    return is_mirrored_by_recursion(array, left + 1, right - 1);
}

// Вспомогательная функция для удобного вызова
bool is_mirrored_recursive(int* array, int size)
{
    return is_mirrored_by_recursion(array, 0, size - 1);
}