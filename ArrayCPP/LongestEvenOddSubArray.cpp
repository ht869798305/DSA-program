// Examples: 


// Input: a[] = {1, 2, 3, 4, 5, 7, 9} 
// Output: 5 
// Explanation: 
// The subarray {1, 2, 3, 4, 5} has alternating even and odd elements.


// Input: a[] = {1, 3, 5} 
// Output: 0 
// Explanation: 
// There is no such alternating sequence possible. 
// The idea is to consider every subarray and find the length of even and odd subarrays.

// Follow the steps below to solve the problem:

// Iterate for every subarray from i = 0 
// Make a nested loop, iterate from j = i + 1
// Now, check if a[j – 1] is even and a[j] is odd or a[j – 1] is odd and a[j] is even then increment count
// Maintain an answer variable which calculates max count so far
// Below is the implementation of the above approach:

#include <iostream>
using namespace std;

// Function to find the longest subarray
int longestEvenOddSubarray(int a[], int n)
{
	// Length of longest
	// alternating subarray
	int ans = 1;

	// Iterate in the array
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		// Iterate for every subarray
		for (int j = i + 1; j < n; j++) {
			if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0)
				|| (a[j - 1] % 2 != 0 && a[j] % 2 == 0))
				cnt++;
			else
				break;
		}
		// store max count
		ans = max(ans, cnt);
	}
	// Length of 'ans' can never be 1
	// since even odd has to occur in pair or more
	// so return 0 if ans = 1
	if (ans == 1)
		return 0;
	return ans;
}

/* Driver code*/
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 7, 8 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << longestEvenOddSubarray(a, n);
	return 0;
}
