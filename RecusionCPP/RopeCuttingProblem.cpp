#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    vector<int> cutRopes(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();

    // Step 1: Sort the array to process the smallest elements first.
    sort(arr.begin(), arr.end());

    int currentIndex = 0; // To track the current index in sorted array
    while (currentIndex < n) {
        // The number of remaining ropes is the total ropes minus the current index
        result.push_back(n - currentIndex);

        // The current minimum rope length to cut
        int currentLength = arr[currentIndex];

        // Move the index to the next rope that has not been cut
        while (currentIndex < n && arr[currentIndex] == currentLength) {
            currentIndex++;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {5, 1, 1, 2, 3, 5};
    vector<int> result = cutRopes(arr);
    
    // Output the result
    for (int count : result) {
        cout << count << " ";
    }
    cout << endl; // For better output formatting

    return 0;
}
