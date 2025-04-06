#include "logic.h"

bool isPalindrome_byLoop(string str)
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

bool isPalindrome_byRecursion(string str, int left, int right)
{

    if (left >= right) {
        return true;
    }

    if (str[left] != str[right]) {
        return false;
    }

    return isPalindrome_byRecursion(str, left + 1, right - 1);
}

// Вспомогательная функция, принимающая только строку
bool isPalindrome(string str)
{

    return isPalindrome_byRecursion(str, 0, str.length() - 1);
}