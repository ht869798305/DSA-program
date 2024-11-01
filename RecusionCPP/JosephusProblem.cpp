// Examples 
// Input: N = 5 and k = 2
// Output: 3
// Explanation: Firstly, the person at position 2 is killed, 
// then the person at position 4 is killed, then the person at position 1 is killed. 
// Finally, the person at position 5 is killed. So the person at position 3 survives. 


// Input: N = 7 and k = 3
// Output: 4
// Explanations: The persons at positions 3, 6, 2, 7, 5, and 1 are killed in order, 
// and the person at position 4 survives.

/*
The simple approach is to create a list and add all values from 1 to N to it.
Create a recursive function that takes a list, start (position at which counting will  start), and k ( number of people to be skipped) as an argument.
If the size of the list is one i.e. only one person left then return this position.
Otherwise, start counting the k person in a clockwise direction from starting
position and remove the person at the kth position.
Now the person at the kth position is removed and now counting will start from this position. This process continues till only one person is left.
*/

/*
Josephus( list , start , k){
   if list.size = 1
       return list[0]
   start = (start + k) % list.size
   list.remove( start )
   return Josephus( list, start, k)
}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Josh(vector<int> person, int k, int index)
{
    // Base case , when only one person is left
    if (person.size() == 1) {
        cout << person[0] << endl;
        return;
    }

    // find the index of first person which will die
    index = ((index + k) % person.size());

    // remove the first person which is going to be killed
    person.erase(person.begin() + index);

    // recursive call for n-1 persons
    Josh(person, k, index);
}

int main()
{
    int n = 14; // specific n and k  values for original
                // josephus problem
    int k = 2;
    k--; // (k-1)th person will be killed
    int index
        = 0; // The index where the person which will die

    vector<int> person;
    // fill the person vector
    for (int i = 1; i <= n; i++) {
        person.push_back(i);
    }

    Josh(person, k, index);
}


