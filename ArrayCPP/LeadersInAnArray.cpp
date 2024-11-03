// Examples:

// Input: arr[] = {16, 17, 4, 3, 5, 2} 
// Output: 17 5 2
// Explanation: 17 is greater than all the elements to its right: 4, 3, 5 and 2, therefore 17 is a leader. 5 is greater than all the elements to its right: 2, therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.


// Input: arr[] = {1, 2, 3, 4, 5, 2} 
// Output: 5 2
// Explanation: 5 is greater than all the elements to its right: 2, therefore 5 is a leader. 2 has no element to its right, therefore 2 is a leader.

// Use two loops. The outer loop runs from 0 to size – 1 and one by one pick all elements from left to right. The inner loop compares the picked element to all the elements on its right side. If the picked element is greater than all the elements to its right side, then the picked element is the leader. 

#include <bits/stdc++.h>
using namespace std;

// Function to find the leaders in an array
vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        int j;

        // Check elements to the right
        // of the current element
        for (j = i + 1; j < n; j++) {

            // If a larger element is found,
            // break the loop
            if (arr[i] < arr[j])
                break;
        }

        // If no larger element was found,
        // the current element is a leader
        if (j == n) 
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> result = leaders(arr);
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
