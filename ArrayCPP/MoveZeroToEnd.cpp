// Examples: 

// Input: arr[] = {1, 2, 0, 4, 3, 0, 5, 0}
// Output: arr[] = {1, 2, 4, 3, 5, 0, 0, 0}
// Explanation: There are three 0s that are moved to the end.


// Input: arr[] = {10, 20, 30}
// Output: arr[] = {10, 20, 30}
// Explanation: No change in array as there are no 0s.

// Input: arr[] = {0, 0}
// Output: arr[] = {0, 0}
// Explanation: No change in array as there are all 0s.
// The idea is to create a temporary array of same size as the input array arr[]. 


// First, copy all non-zero elements from arr[] to the temporary array. 
// Then, fill all the remaining positions in temporary array with 0.
// Finally, copy all the elements from temporary array to arr[].

// C++ Program to move all zeros to end using temporary array

#include <bits/stdc++.h>
using namespace std;

// function to move all zeros to the end
void pushZerosToEnd(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);

    // to keep track of the index in temp[]
    int j = 0;

    // Copy non-zero elements to temp[]
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            temp[j++] = arr[i];
    }

    // Fill remaining positions in temp[] with zeros
    while (j < n) {
        temp[j++] = 0;
    }

    // Copy all the elements from temp[] to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);

    // Print the modified array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
