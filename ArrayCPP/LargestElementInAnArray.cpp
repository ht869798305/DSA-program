// Examples: 

// Input: arr[] = {10, 20, 4}
// Output: 20
// Explanation: Among 10, 20 and 4, 20 is the largest. 


// Input : arr[] = {20, 10, 20, 4, 100}
// Output : 100

// The approach to solve this problem is to traverse the whole array and find the maximum among them.

// Create a local variable max and initiate it to arr[0] to store the maximum among the list
// Iterate over the array
// Compare arr[i] with max.
// If arr[i] > max, update max = arr[i].
// Increment i once.
// After the iteration is over, return max as the required answer.
// Below is the implementation of the above approach:

#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum of array
int largest(const vector<int>& arr)
{
    int max = arr[0];

    // Traverse vector elements
    // from second and compare
    // every element with current max
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

// Driver Code
int main()
{
    vector<int> arr = {10, 324, 45, 90, 9808};
    cout << "Largest in given array is " << largest(arr);
    return 0;
}
