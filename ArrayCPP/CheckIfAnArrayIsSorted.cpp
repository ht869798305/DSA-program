// Examples: 

// Input : 20 21 45 89 89 90
// Output : Yes

// Input : 20 20 45 89 89 90
// Output : Yes

// Input : 20 20 78 98 99 97
// Output : No

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function that returns true if vector is
// sorted in non-decreasing order.
bool isSorted(const vector<int>& arr)
{
    // For an array to be sorted, every
    // element must be greater than the 
    // previous element
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}

int main()
{
    vector<int> arr = { 20, 23, 23, 45, 78, 88 };
    if(isSorted(arr)) 
    cout<< "Yes\n" ;
    else
    cout<< "No\n";

    return 0;
}
   
