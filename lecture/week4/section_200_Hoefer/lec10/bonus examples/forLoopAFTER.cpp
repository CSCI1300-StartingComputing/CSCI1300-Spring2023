#include <iostream>
#include <string>

using namespace std;

int main()
{
    // init var of type string
    string my_string = "Hello this is String speaking.";

    // iterate over string
    for (int i = 0; i < my_string.length(); i++)
    {
        cout << "The " << i 
            << " letter is " << my_string[i] << endl;
    }

    return 0;
}