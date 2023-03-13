#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num = -1;
    // check for +ve input
    while(num < 0) // loop will run only if condition is true
    {
        cout << "Please enter a positive number: " << endl;
        cin >> num;
    }
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    return 0;
}
