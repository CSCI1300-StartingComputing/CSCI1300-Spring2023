#include <iostream>
#include <string>
using namespace std;

// program to verify if user input is a valid email address

int main()
{
    string email = "csci1300@colorado.com"; 
    // last 4 letters are .edu or .com
    int email_len = email.length();
    // flag variable for boolean checks
    bool flag = false;

    // traversing through the string to check if @ exists 
    for(int i = 0; i < email_len; i++)
    {
        // terminate the loop if we find @ through the break statement
        if(email[i] == '@')
        {
            flag = true;
            break;
        }
        // cout << i << endl;
    }
    // extract the last 4 letters from email
    if(email.substr(17,4) == ".edu" && flag)
    {
        cout <<  "valid email!" << endl; 
    }

    return 0;
}






