#include <iostream>
#include <cassert>

using namespace std;

// returns the absolute value of x
int absoluteVal(int x)
{
    // if the value is negative, flip the sign to positive
    if (x > 0)
    {
        return x * -1;
    }

    // otherwise, simply return the value
    return x;
}


int main()
{
    // we can do cout testing like so... 
    // cout << absoluteVal(-5) << endl;
    // cout << absoluteVal(5) << endl;

    // or we can use asserts 
    assert(absoluteVal(-5) == 5);
    assert(absoluteVal(5) == 5);

    return 0;
}