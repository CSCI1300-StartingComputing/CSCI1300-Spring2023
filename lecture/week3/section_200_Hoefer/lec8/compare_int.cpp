#include <iostream>

using namespace std;

int main()
{
    // create storage in memory for two integers
    int first, second;

    // ask the user to enter the first integer value
    cout << "Please enter the first integer: ";

    // grab the first input from the user
    cin >> first; 

    // ask the user to enter the second integer value
    cout << "Please enter the second integer: ";

    // grab the second input from the user
    cin >> second; 

    cout << "first integer is " << first << " and second integer is " << second << endl;


    // If the first integer is bigger, print to the screen “First is bigger”
    if (first > second)
    {
        cout << "First is bigger" << endl;
    } else if (first < second)  // If the second is bigger, print to the screen “Second is bigger”
    {
        cout << "Second is bigger" << endl;
    } else                    // equivalent to: else if (first == second)
    {
        cout << "They are equal" << endl;
    }

    return 0;
}