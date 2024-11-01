
// C++ program to How will you print 
// numbers from N to 1 without using a loop?
#include <iostream>
using namespace std;

class nTo1 {

    // It prints numbers from N to 1
public:
    void printNos(unsigned int n)
    {
        if (n > 0) {
            cout << n << " ";
            printNos(n - 1);
        }
        return;
    }
};

int main()
{
    int n = 100; // print 10 to 1
    nTo1 g;
    g.printNos(n);
    return 0;
}