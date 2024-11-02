// Examples : 

// Input: arr[] = {1, 2, 3, 1, 4, 5}, K = 3 
// Output: 3 3 4 5
// Explanation: Maximum of 1, 2, 3 is 3
//                        Maximum of 2, 3, 1 is 3
//                        Maximum of 3, 1, 4 is 4
//                        Maximum of 1, 4, 5 is 5


// Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4 
// Output: 10 10 10 15 15 90 90          
// Explanation: Maximum of first 4 elements is 10, similarly for next 4 
//                        elements (i.e from index 1 to 4) is 10, So the sequence 
//                        generated is 10 10 10 15 15 90 90


// Input: arr[] = {20, 10, 30}, K = 1 
// Output: 20 10 30

// Using Nested Loops O(n * k) Time and O(1) Space
// The idea is very basic run a nested loop, the outer loop which will mark the starting point of the subarray of length K, the inner loop will run from the starting index to index+K, and print the maximum element among these K elements. 

// Below is the implementation of the above approach:

#include <iostream>
#include <vector>
using namespace std;

// Method to find the maximum for each
// and every contiguous subarray of size k.
vector<int> getKMax(const vector<int>& arr, int n, int k)
{
    vector<int> res;
  
    for (int i = 0; i <= n - k; i++) {
      
        // Find maximum of subarray beginning
        // with arr[i]
        int max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        res.push_back(max);
    }
  
    return res;
}

// Driver's code
int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = arr.size();
    int k = 3;
    vector<int> res = getKMax(arr, n, k);
    for (int maxVal : res) {
        cout << maxVal << " ";
    }
    return 0;
}
