#include "logic.h"
#include "util.h"
#include <iostream>
#define SIZE 10

int main(void)
{
	int array[SIZE];

	random_init(array, SIZE, 0, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	cout << "Sum of elements(by loop): " <<
		get_sum_of_sequence_byLoop(array, SIZE) << endl;

	cout << "Sum of elements(by recursion): " <<
		get_sum_of_sequence_byRecursion(array, SIZE) << endl;

	return 0;
}