#include <iostream>

using namespace std;

int main()
{
    // 5 is useless, just gets us inside the loop
    int input = 5;

    // keep track of largest value so far
    int curr_max = -1;

    // while input isn't negative, keep prompting for a new number
    while (input >= 0)
    {
        cout << "Enter a number (negative number to quit):";
        cin >> input;
        // if new number is new max, then save it as such
        if (input > curr_max)
        {
            curr_max = input;
        }
    }

    // print out max
    cout << "Max number is " << curr_max << endl;

    // but where did all the numbers I entered go?
    // what if I want to print them all out?

    return 0;
}