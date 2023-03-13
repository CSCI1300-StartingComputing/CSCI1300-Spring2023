#include <iostream>

using namespace std;

// This function takes in two values:
// a string, and a char
// it will remove all instances of char from the string
// and return the resulting string
string removeWhateverCharYouWant(string input_string, char remove_me)
{
    string to_return = "";
    for(int i = 0; i < input_string.length(); i++)
    {
        // cout << i << endl;
        if (input_string[i] != remove_me)
        {
            to_return += input_string[i];
        }
    }
    return to_return;
}

int main()
{
    string my_str = "As People Walk This Way Again and Again, a Path Appears";

    string compressed_str = "";

    char my_char = 'A';

    // first, remove all the 'A' from the string
    compressed_str = removeWhateverCharYouWant(my_str, my_char);

    // now remove all the spaces
    compressed_str = removeWhateverCharYouWant(compressed_str, ' ');
    
    cout << "The new string is: " << compressed_str << endl;
    
    return 0;
}