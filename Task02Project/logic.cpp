#include "logic.h"
#include <cmath>

int divs_byLoop(int number)
{

    if (number <= 1)
    {
        return 0;
    }

    int count = 0;

    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0) {

            if (i == number / i)
            {
                count += 1;
            }

            else
            {
                count += 2;
            }
        }
    }

    return count;
}

int divs_byRecursion(int number, int d)
{
    int sqrtN = sqrt(number);

    if (d > sqrtN) {
        return 0;
    }

    if (number % d == 0)
    {
        if (d == number / d)
        {
            return divs_byRecursion(number, d + 1) + 1;
        }
        else
        {
            return divs_byRecursion(number, d + 1) + 2;
        }
    }
    
    return divs_byRecursion(number, d + 1);
}

// Вспомогательная функция
int divsRecursive(int number)
{
    if (number <= 1)
    {
        return 0;
    }

    return divs_byRecursion(number, 2);
}