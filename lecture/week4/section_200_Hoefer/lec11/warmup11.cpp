#include <iostream>

using namespace std;

int main()
{
    string user_input;

    cout << "Please enter some text:" << endl;

    getline(cin, user_input);

    cout << "you entered " << user_input << endl;

    // count number of characters
    int num_chars = user_input.length();

    // determine if a single character is upper case
    // check to see if the ascii value of the character is between 65 and 90
    //char test_char_upper = 'A';
    //char test_char_lower = 'a';

    // loop through the string one character at a time
    int curr_index = 0;

    // variable to keep track of count of upper case
    int count_of_upper_case = 0;
    while (curr_index < user_input.length())
    {
        if (user_input[curr_index] >= 65 && user_input[curr_index] <= 90)
        {
            count_of_upper_case++;
            cout << user_input[curr_index] << " is upper case" << endl;
        } else
        {
            cout << user_input[curr_index] << " is lower case" << endl;
        }
        curr_index++;
    }

    cout << "We found " << count_of_upper_case << " upper case chars" << endl;

    if ( static_cast<double>(count_of_upper_case) / num_chars > 0.5)
    {
        cout << "Please consider using a quieter voice in the chat" << endl;
    }

    // user input: THIS Is mostlY ALL CAPS MayBE?
    // 30 characters
    // 16 are upper case
    // 16 / 30 > .5 ??? 

    // If more than 50% of the characters in the string are uppercase



    return 0;
}