#include "logic.h"
#include "util.h"
#include <iostream>
#include <ctime>
#define SIZE 10

int main(void)
{
	srand(time(0));

	int array[SIZE];

	random_init(array, SIZE, 0, 10);
	cout << "Array: " << convert(array, SIZE) << endl;

	cout << "Sum of elements(by loop): " <<
		get_sum_of_sequence_by_loop(array, SIZE) << endl;

	cout << "Sum of elements(by recursion): " <<
		get_sum_of_sequence_by_recursion(array, SIZE) << endl;

	return 0;
}