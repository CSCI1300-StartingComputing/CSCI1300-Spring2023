#include <iostream>

using namespace std;

int mySum(int first, int second)
{
    return first + second;
}

int main()
{
    // EXAMPLE 1 - functions with integersd
    int x = 5;
    int y = 10;

    // I can print out the return value directly
    cout << "\n\nEXAMPLE 1";
    cout << mySum(x, y) << endl;

    // I could also save the return value into it's own variable
    int another_int = mySum(x, y);

    return 0;
}