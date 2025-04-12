#include <iostream>
#include <ctime>
#include "logic.h"
#include "util.h"
#define SIZE 10

int main(void)
{
	srand(time(0));

	int* array = new int[SIZE];
	int array_mirrored[SIZE] = { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };

	random_init(array, SIZE, 1, 10);

	cout << "Array:\n" << convert(array, SIZE) << endl;

	cout << "Is array mirrored? (by loop): " <<
		(is_mirrored_by_loop(array, SIZE) ? "Yes" : "No") << endl;

	cout << "Is array mirrored? (by recursion): " <<
		(is_mirrored_recursive(array, SIZE) ? "Yes" : "No") << endl;

	cout << "Array:\n" << convert(array_mirrored, SIZE) << endl;

	cout << "Is array mirrored? (by loop): " <<
		(is_mirrored_by_loop(array_mirrored, SIZE) ? "Yes" : "No") << endl;

	cout << "Is array mirrored? (by recursion): " <<
		(is_mirrored_recursive(array_mirrored, SIZE) ? "Yes" : "No") << endl;

}