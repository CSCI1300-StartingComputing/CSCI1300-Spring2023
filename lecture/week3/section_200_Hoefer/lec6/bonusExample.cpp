#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string declaration and initialization
    // you can declare multiple variables at once
    string first_name, last_name, space; // "" 
    first_name = "Leslie";
    last_name = "Knope";
    space = " ";
    cout << first_name << " " << last_name << endl;

    // concatenation
    string full_name = first_name + space + last_name;
    cout << full_name << endl;

    // error: cannot concatenate literals
    string example = "Ron"; // + " Swanson"
    cout << example << endl;

    // length of a string
    // string_var.length();
    int str_len = full_name.length();
    cout << str_len << endl; //
    cout << last_name.length() << endl;


    // referencing individual characters in a string
    /*
        L  e  s  l  i  e     K  n  o  p  e
        0  1  2  3  4  5  6  7  8  9  10 11
        1  2  3 ...
    */
    cout << "full_name[0] is " << full_name[0] << endl; //index 0 is 1st letter
    cout << "full_name[1] is " << full_name[1] << endl; //index 0 is 2nd letter
    cout << "full_name[2] is " << full_name[2] << endl; 
    cout << "full_name[3] is " << full_name[3] << endl; 
    cout << "full_name[4] is " << full_name[4] << endl; 
    cout << "full_name[5] is " << full_name[5] << endl; 

    cout << "full_name[15] is " << full_name[15] << endl; 
    cout << "full_name[16] is " << full_name[16] << endl;

    return 0;
}