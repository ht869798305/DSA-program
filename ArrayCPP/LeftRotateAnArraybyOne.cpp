// Examples:  


// Input: arr[] = {1, 2, 3, 4, 5} 
// Output: arr[] = {5, 1, 2, 3, 4}


// Input: arr[] = {2, 3, 4, 5, 1}
// Output: {1, 2, 3, 4, 5}

// Assign every element with its previous element and first element with the last element .

// Consider an array: arr[] =  {1, 2, 3, 4, 5}


// Initialize last element in variable ‘last_el’ that is 5
// Then, iterate from n-1 to 1 and assign arr[i] = arr[i-1]

// arr[4] = arr[3]
// arr[ ] = {1, 2, 3, 4, 4}


// arr[3] = arr[2]
// arr[ ] = {1, 2, 3, 3, 4}


// arr[2] = arr[1]
// arr[ ] = {1, 2, 2, 3, 4}


// arr[1] = arr[0]
// arr[ ]  = {1, 1, 2, 3, 4}


// Assign arr[0] = last_el
// arr[0] = 5
// arr[ ] = {5, 1, 2, 3, 4}
// Thus the required array will be {5, 1, 2, 3, 4}

// Follow the steps to solve the problem:

// Store the last element in any temp variable
// Shift every element one position ahead
// Assign first value = last value (stored in temp variable).
// Below is the implementation for the above approach:

// C++ code for program
// to cyclically rotate
// an array by one

#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{

	// store the last element in a variable
	int last_el = arr[n - 1];

	// assign every value by its predecessor
	for (int i = n - 1; i > 0; i--) {
		arr[i] = arr[i - 1];
	}

	// first element will be assigned by last element
	arr[0] = last_el;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Printing initial array
	cout << "Given array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';

	// Calling rotate function
	rotate(arr, n);

	// Printing rotated array
	cout << "\nRotated array is\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';

	return 0;
}
