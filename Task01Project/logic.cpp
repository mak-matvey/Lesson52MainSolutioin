#include "logic.h"

bool is_palindrome_by_loop(string str)
{

    int left = 0;
    int right = str.length() - 1;

    for (int i = left; i < right; i++)
    {
        if (str[left] != str[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool is_palindrome_by_recursion(string str, int left, int right)
{

    if (left >= right) {
        return true;
    }

    if (str[left] != str[right]) {
        return false;
    }

    return is_palindrome_by_recursion(str, left + 1, right - 1);
}

// Вспомогательная функция, принимающая только строку
bool is_palindrome(string str)
{

    return is_palindrome_by_recursion(str, 0, str.length() - 1);
}