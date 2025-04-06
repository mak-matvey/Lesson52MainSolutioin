#include "logic.h"
#include <iostream>

using namespace std;

int main(void)
{
	int number;

	cout << "Input your number: ";
	cin >> number;

	cout << "Quantity of divs of your number (loop): " <<
		divs_byLoop(number) << endl;

	cout << "Quantity of divs of your number (recursion): " <<
		divsRecursive(number) << endl;

	return 0;
}