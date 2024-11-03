// Input : arr[] = {1, 3, 2, 1, 4, 1}
// Output : 1
// Explanation: 1 appears three times in array which is maximum frequency.


// Input : arr[] = {10, 20, 10, 20, 30, 20, 20}
// Output : 20 appears four  times in array which is maximum frequency

// The naive approach involves using two nested loops: the outer loop picks each element, and the inner loop counts the frequency of the picked element. This method is straightforward but inefficient.
// CPP program to find the most frequent element in an array.

#include <bits/stdc++.h>

using namespace std;

int mostFrequent(int* arr, int n)
{
    int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }

    return element_having_max_freq;
}

int main()
{
    int arr[] = { 40, 50, 30, 40, 50, 30, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, n);
    return 0;
}
