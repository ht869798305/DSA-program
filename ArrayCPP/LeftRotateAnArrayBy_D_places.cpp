// Examples:

// Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
// Output: {3, 4, 5, 6, 1, 2}
// Explanation: After first left rotation, arr[] becomes {2, 3, 4, 5, 6, 1} and after the second rotation, arr[] becomes {3, 4, 5, 6, 1, 2}


// Input: arr[] = {1, 2, 3}, d = 4
// Output: {2, 3, 1}
// Explanation: The array is rotated as follows:


// After first left rotation, arr[] = {2, 3, 1}
// After second left rotation, arr[] = {3, 1, 2}
// After third left rotation, arr[] = {1, 2, 3}
// After fourth left rotation, arr[] = {2, 3, 1}

// [Naive Approach] Rotate one by one – O(n * d) Time and O(1) Space
// In each iteration, shift the elements by one position to the left in a circular fashion (the first element becomes the last). Perform this operation d times to rotate the elements to the left by d positions.

// Illustration:

//  Let us take arr[] = {1, 2, 3, 4, 5, 6}, d = 2.


// First Step:
//         => Rotate to left by one position.
//         => arr[] = {2, 3, 4, 5, 6, 1}
// Second Step:
//         => Rotate again to left by one position
//         => arr[] = {3, 4, 5, 6, 1, 2}
// Rotation is done 2 times.
// So the array becomes arr[] = {3, 4, 5, 6, 1, 2}

// C++ Program to left rotate the array by d positions
// by rotating one element at a time

#include <bits/stdc++.h>
using namespace std;

// Function to left rotate array by d positions
void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Repeat the rotation d times
    for (int i = 0; i < d; i++) {
      
        // Left rotate the array by one position
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d = 2;

    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
