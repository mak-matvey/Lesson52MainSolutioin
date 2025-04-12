#include "logic.h"

bool is_automorphic_by_loop(int num)
{
    long long square = (long long)num * num;

    for (int temp = num; temp > 0; temp /= 10, square /= 10)
    {
        if ((temp % 10) != (square % 10))
        {
            return false;
        }
    }

    return true;
}


string print_automorphic(int number)
{
    string s = "";
    int count = 0, num = 1;

    for (int i = 0; i < number; i++)
    {
        if (is_automorphic_by_loop(num))
        {
            s += to_string(num) + " ";
            count++;
        }
        num++;
    }

    return s;
}

bool is_automorphic_by_recursion(int num, long long square)
{
    if (num == 0)
    {
        return true;
    }

    if (num % 10 != square % 10)
    {
        return false;
    }

    return is_automorphic_by_recursion(num / 10, square / 10);
}

bool is_automorphic(int num)
{
    long long square = (long long)num * num;

    return is_automorphic_by_recursion(num, square);
}

string print_automorphic_recursive(int number)
{
    string s = "";

    int count = 0, num = 1;

    for (int i = 0; i < number; i++)
    {
        if (is_automorphic(num))
        {
            s += to_string(num) + " ";
            count++;
        }
        num++;
    }

    return s;
}