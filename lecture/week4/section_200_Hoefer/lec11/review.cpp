#include <iostream>

using namespace std;

// practicum review
int main()
{
    char my_char = 'b';
    switch (my_char)
    {
        case 'a': cout << "good morning" << endl;
        case 'b': cout << "hello" << endl;
        case 'c': cout << "goodbye" << endl;
        default: cout << "nevermind" << endl;
    }

    return 0;
}