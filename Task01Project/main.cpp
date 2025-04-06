#include <iostream>
#include "logic.h"

int main(void)
{
	string str;

	cout << "Input your string: ";
	cin >> str;

	cout << "Is your string is palindrome (by loop)? " <<
		(isPalindrome_byLoop(str) ? "Yes" : "No") << endl;

	cout << "Is your string is palindrome (by Recursion)? " <<
		(isPalindrome(str) ? "Yes" : "No") << endl;

	return 0;
}