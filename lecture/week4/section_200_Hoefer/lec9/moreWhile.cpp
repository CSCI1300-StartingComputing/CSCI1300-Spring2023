#include <iostream>

using namespace std;

int main()
{
    /*int a = 0;  // run this to see int overflow wrap around behavior
    while(true)
    {
        a+=10000;
        cout << a << endl;
    } */

    string my_string = "I love to program";
    
    cout << "string length " << my_string.length() << endl;

    int index = 0;

    while (index < my_string.length())
    {
        cout << my_string[index] << endl;
        //cout << "index is " << index;
        index++;
    }

    




}