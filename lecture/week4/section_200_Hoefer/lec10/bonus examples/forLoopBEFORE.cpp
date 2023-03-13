#include <iostream>

using namespace std;

int main()
{
    // init var of type string
    string my_string = "Hello this is String speaking.";

    // iterate over string
    int index = 0;
    while (index < my_string.length())
    {
        cout << "The " << index << " letter is " << my_string[index] << endl;
        index++;
    }

    return 0;
}