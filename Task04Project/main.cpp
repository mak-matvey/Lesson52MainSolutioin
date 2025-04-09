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

	reverse_array_by_loop(array, SIZE);

	cout << "Reversed array (by loop): " << convert(array, SIZE) << endl;

	reverse_array_by_recursion(array, SIZE);

	cout << "Reversed array (by recursion): " << convert(array, SIZE) << endl;

	return 0;
}