// Examples:

// Input: arr[] = {12, 35, 1, 10, 34, 1}
// Output: The second largest distinct element is 34.
// Explanation: The largest element of the array is 35 and the second largest element is 34.


// Input: arr[] = {10, 5, 10}
// Output: The second largest distinct element is 5.
// Explanation: The largest element of the array is 10 and the second largest element is 5.


// Input: arr[] = {10, 10, 10}
// Output: -1
// Explanation: Largest element of the array is 10 there is no second largest element.

// The idea is to sort the array in non-decreasing order. Now, we know that the largest element will be at index n – 1. So, starting from index (n – 2), traverse the remaining array in reverse order. As soon as we encounter an element which is not equal to the largest element, return it as the second largest element in the array. If all the elements are equal to the largest element, return -1.


// C++ program to find second largest element in an array
// using Sorting

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to find the second largest element
int getSecondLargest(vector<int> &arr) {
    int n = arr.size();
    
    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());
  
    // start from second last element as last element is the largest
    for (int i = n - 2; i >= 0; i--) {
      
        // return the first element which is not equal to the 
        // largest element
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
    }
  
    // If no second largest element was found, return -1
    return -1;
}

int main() {
    vector<int> arr = { 12, 35, 1, 10, 34, 1 };
    cout<<getSecondLargest(arr);
    return 0;
}
