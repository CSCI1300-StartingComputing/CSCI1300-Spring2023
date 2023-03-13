#include <iostream>

using namespace std;

// Warm up activity for lecture 10
int main()
{
    // asks a user for a positive number
    int user_input;

    // prompt user to enter a number
    cout << "Please enter a number to count to: " << endl;

    // store user number in user_input
    cin >> user_input;

    cout << "you entered " << user_input << endl;

    // print out each number between 0 and the user’s number (inclusive)

    // make a variable for printing to the screen, curr_number, start at 0
    int curr_number = 0;

    // while the curr_number is less than user_input
    while (curr_number <= user_input)
    {
        cout << curr_number << endl; // print curr_number
        curr_number++;  // increment curr_number. This gives us hope of getting out of the loop
    }
    
    // FOR LOOP VERSION
    /*for(int curr_number = 0; curr_number <= user_input; curr_number++)
    {
        cout << curr_number << endl;
         // curr_number++   OR  curr_number += 1;  curr_number = curr_number + 1;
    } */


    return 0;
}