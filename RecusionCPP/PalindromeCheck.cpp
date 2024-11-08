// Input : malayalam
// Output : Yes
// Reverse of malayalam is also
// malayalam.

// Input : max
// Output : No
// Reverse of max is not max.

//  If there is only one character in string
//    return true.

//  Else compare first and last characters
//    and recur for remaining substring.

// A recursive C++ program to 
// check whether a given number
// is palindrome or not


#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

// A recursive function that
// check a str[s..e] is
// palindrome or not.
bool isPalRec(char str[], 
			int s, int e)
{
	
	// If there is only one character
	if (s == e)
	return true;

	// If first and last
	// characters do not match
	if (str[s] != str[e])
	return false;

	// If there are more than 
	// two characters, check if 
	// middle substring is also 
	// palindrome or not.
	if (s < e + 1)
	return isPalRec(str, s + 1, e - 1);

	return true;
}

bool isPalindrome(char str[])
{
	int n = strlen(str);
	
	// An empty string is 
	// considered as palindrome
	if (n == 0)
		return true;
	
	return isPalRec(str, 0, n - 1);
}

int main()
{
	char str[] = "malayalam";

	if (isPalindrome(str))
	cout << "Yes";
	else
	cout << "No";

	return 0;
}
