// Follow the below steps to solve the problem:

// Get the number
// Declare a variable to store the sum and set it to 0
// Repeat the next two steps till the number is not 0
// Get the rightmost digit of the number with help of the remainder ‘%’ operator by dividing it by 10 and adding it to the sum.
// Divide the number by 10 with help of ‘/’ operator to remove the rightmost digit.
// Print or return the sum

// C++ program to compute sum of digits in
// number.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* Function to get sum of digits */
class SumOfDigit {
public:
    int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
};

int main()
{
    SumOfDigit S;
    int n = 687;  // for this problem the answer should be 21

    // Function call
    cout << S.getSum(n);
    return 0;
}