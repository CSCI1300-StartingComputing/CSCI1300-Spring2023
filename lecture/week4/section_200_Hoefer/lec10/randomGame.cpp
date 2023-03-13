#include <iostream>

using namespace std;

// Program to allow the user to guess a magic number
// keeps track of the number of guesses
int main()
{
    // can you figure out how to make the magic_number truly random???
    int magic_number = 12; // user is trying to guess this

    // stores the user input (Their guess)
    int user_guess;

    // keeps track of number of guesses
    int num_guesses = 0;

    cout << "Enter your guess!" << endl;
    cin >> user_guess;
    num_guesses++; // add one to guess counter
    while (user_guess != magic_number)
    {
        // they were wrong, prompt for another number
        cout << "Wrong! Please try again: " << endl;
        cin >> user_guess;
        num_guesses++;
    }
    
    /*  Alternate do-while loop reduces the lines of code
    do
    {
        cout << "Enter your guess!" << endl;
        cin >> user_guess;
        num_guesses++;
    } while (user_guess != magic_number);
    */

    cout << "Congratulations, you guessed correctly. It only took you " 
         << num_guesses << " tries!" << endl;

    return 0;
}
