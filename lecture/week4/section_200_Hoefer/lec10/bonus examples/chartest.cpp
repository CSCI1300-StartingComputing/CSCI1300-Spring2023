#include <iostream>

using namespace std;

int main()
{
    char my_char;
    cout << "Enter a char:" << endl;
    cin >> my_char;

    if (my_char == 'a')
    {
        cout << "my char is equal to a!" << endl;
    }

    if (my_char == 'b')
    {
        cout << " my char is equal to b" << endl;
    }

    if (my_char == 'a' || my_char == 'b')
    {
        cout << "my char is either a or b" << endl;
    } 



    return 0;
}