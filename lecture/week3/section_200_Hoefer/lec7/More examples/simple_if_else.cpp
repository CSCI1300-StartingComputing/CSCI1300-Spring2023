#include <iostream>
using namespace std;

// program to check if a number is greater than 0

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)  
    {   // true
        cout << "the number is greater than 0" << endl;
    }
    else 
    {   // false
        cout << "the number is not greater than 0" << endl;
    }

    return 0;
}