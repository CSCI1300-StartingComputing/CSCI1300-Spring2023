#include <iostream>

using namespace std;

int main()
{

    char my_char = 'A';
    cout << my_char << " is " << static_cast<int>(my_char) << endl;
    // you could also just do (int)my_char or even int(my_char)

    my_char++;
    cout << my_char << " is " << static_cast<int>(my_char) << endl;

    while (my_char < 127)
    {
        my_char++;
        cout << my_char << " is " << static_cast<int>(my_char) << endl;
    }


}