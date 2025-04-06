float get_sum_of_sequence_byLoop(int* array, int size)
{
	int sum = 0;

	for (int i = 0; i <= size; i++)
	{
		sum += i;
	}

	return sum;
}

float get_sum_of_sequence_byRecursion(int* array, int size)
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
        get_sum_of_sequence_byRecursion(array, size - 1);
}