#include "logic.h"

float get_sum_of_sequence_by_loop(int* array, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

float get_sum_of_sequence_by_recursion(int* array, int size)
{
    if (size < 1)
    {
        return 0;
    }

    if (size == 1)
    {
        return array[0];
    }

    return array[size - 1] +
        get_sum_of_sequence_by_recursion(array, size - 1);
}