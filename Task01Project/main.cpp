#include <iostream>
#include "logic.h"

int main(void)
{
	string str;

	cout << "Input your string: ";
	cin >> str;

	cout << "Is your string is palindrome (by loop)? " <<
		(is_palindrome_by_loop(str) ? "Yes" : "No") << endl;

	cout << "Is your string is palindrome (by Recursion)? " <<
		(is_palindrome(str) ? "Yes" : "No") << endl;

	return 0;
}