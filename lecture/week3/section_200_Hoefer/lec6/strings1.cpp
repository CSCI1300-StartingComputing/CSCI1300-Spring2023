#include <iostream>

using namespace std;

int main()
{
    // create a string variable, with data type string and name my_string
    string my_string = "hello world";

    // print out to the screen
    cout << my_string << endl;

    // print out the length using STRING MAGIC
    cout << "the length of my string is " << my_string.length() << endl;

    // print out the first letter of the string
    cout << my_string[0] << endl;

    // print out hello using the long and boring way
    /*cout << my_string[0] << my_string[1] <<
            my_string[2] << my_string[3] << my_string[4] << my_string[5] << endl; */

    // print out hello more effectively
    // using substr string magic 
    // first arg is the starting index (starting position) that we want
    // second arg is the length, NOT THE ENDING POSITION
    cout << "My substring is " <<  my_string.substr(0, 5) << endl;

    // we can save substr function return values to string variables
    string my_substring = my_string.substr(0,5);

    // print out "ello "
    cout << "My substring is " <<  my_string.substr(1, 5) << endl;

    // print out "llo w"
    cout << "My substring is " <<  my_string.substr(2, 5) << endl;

    return 0;
}