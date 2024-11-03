// Input : arr[] = {1, 1, 2, 1, 3, 5, 1}
// Output : 1
// Explanation: Note that 1 appear 4 times which is more than  7 / 2 times 


// Input : arr[] = {3, 3, 4, 2, 4, 4, 2, 4}
// Output :  -1 
// Explanation: There is no element whose frequency is greater than the half of the size of the array size.


// Input : arr[] = {3}
// Output : 3
// Explanation: Appears more than n/2 times

// The idea is to count the frequency of each element using nested loops. 


// The first loop iterates through each element of the array, treating it as a the majority element. 
// For each element, the second loop counts its occurrences in the entire array. 
// After the second loop, we check if this element appears more than n / 2 times, where n is the size of the array.
// If it does, it is the majority element in the array.


// C++ program to find Majority
// element in an array using nested loops

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the Majority element in an array
int majorityElement(const vector<int>& arr) {
    int n = arr.size();  

    // Loop to consider each element as a candidate for majority
    for (int i = 0; i < n; i++) {
        int count = 0; 

        // Inner loop to count the frequency of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if count of arr[i] is more than half the size of the array
        if (count > n / 2) {
            return arr[i]; 
        }
    }

    // If no majority element found, return -1
    return -1;
}

int main() {
    vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
    
    cout << majorityElement(arr) << endl;

    return 0;
}
