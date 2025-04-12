#include <iostream>
#include "logic.h"

int main(void)
{
	int number;

	cout << "Input number: ";
	cin >> number;

	if (number <= 0)
	{
		cout << "Error. Invalid number." << endl;
		return -1;
	}

	cout << "First " << number << 
		" automorphic numbers (by loop): ";
	cout << print_automorphic(number) << endl;

	cout << "First " << number <<
		" automorphic numbers (by recursion): ";
	cout << print_automorphic_recursive(number) << endl;

}