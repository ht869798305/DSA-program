// Examples:
// Let us understand Trapping Rainwater problem with the help of some examples:  

// Input: arr[] = {3, 0, 1, 0, 4, 0, 2}
// Output: 10
// Explanation: The expected rainwater to be trapped is shown in the above image.


// Input: arr[]   = {3, 0, 2, 0, 4}
// Output: 7
// Explanation: We trap 0 + 3 + 1 + 3 + 0 = 7 units.


// Input: arr[] = {1, 2, 3, 4}
// Output: 0
// Explanation : We cannot trap water as there is no height bound on both sides


// Input: arr[] = {10, 9, 0, 5}
// Output: 5
// Explanation : We trap 0 + 0 + 5 + 0 = 5

// Observations:
// The basic intuition of the problem is as follows:

// An element of the array can store water if there are higher bars on the left and the right. 
// The amount of water to be stored in every position can be found by finding the heights of the higher bars on the left and right sides. 
// The total amount of water stored is the summation of the water stored in each index.
// No water can be filled if there is no boundary on both sides.
// Brute Force – O(n2) Time and O(1) Space:
// Traverse every array element and find the highest bars on the left and right sides. Take the smaller of two heights. The difference between the smaller height and the height of the current element is the amount of water that can be stored in this array element.

#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum water that can be stored
int maxWater(vector<int>& arr)
{
    int res = 0;

    // For every element of the array
    for (int i = 1; i < arr.size() - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
            right = max(right, arr[j]);

        // Update the maximum water
        res += (min(left, right) - arr[i]);
    }

    return res;
}

// Driver code
int main()
{
    vector<int> arr = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout << maxWater(arr);
    return 0;
}
