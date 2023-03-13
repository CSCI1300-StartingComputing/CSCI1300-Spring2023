#include <iostream>

using namespace std;

int main()
{
    // create storage in memory for two integers
    char my_char;

    cout << "Enter a character" << endl;
    cin >> my_char;

    switch (my_char)
    {
        case 'y':
            cout << "you answered yes" << endl;
            //break;
        case 'n':
            cout << "you answered no" << endl;
            //break;
        default:
            cout << "you entered something else" << endl;
            break;
    }

    return 0;
}