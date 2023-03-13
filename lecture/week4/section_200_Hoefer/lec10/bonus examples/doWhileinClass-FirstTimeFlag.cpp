#include <iostream>

using namespace std;

int main()
{
    int input;   // alternatively, set input to a negative number to "get us in" the first time, and skip all the flag stuff.
    bool first_time_flag = true;  // this is a single switch that gets us in the first time

    while (input <= 0 || first_time_flag)  // input must be negative, or our "first time flag" is true
    {
        first_time_flag = false;

        cout << "Enter a positive number:";
        cin >> input;

        if (input <= 0){
            cout << "This is a negative number" << endl;
        }
    }


    cout << "The number you entered is " << input << endl;


    return 0;
}