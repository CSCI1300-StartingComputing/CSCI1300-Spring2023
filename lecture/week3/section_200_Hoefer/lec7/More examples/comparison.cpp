#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // let's declare a variable of type int and initialize it
    int var1 = 10;

    // and display  it
    cout << "the value of var1 is: " << var1 << endl;  // 

    // let's declare a variable of type double and initialize it
    double var2 = 10.000000001;

    // and display  it
    cout << "the value of var2 is: " << var2 << endl; // 10

    if (var1 == var2)
    {
        cout << "equal" << endl;
    }

    // tolerance for decimal comparison

    const double EPSILON = 1e-14;
    if(fabs(var1 - var2)<EPSILON)
    {
        cout << "floating point comparison is equal" << endl;
    }

    // comparing characters
    char a = 'a';
    if (a == 97)
    {
        cout << "It is a match!" << endl;
    }
    return 0;
}