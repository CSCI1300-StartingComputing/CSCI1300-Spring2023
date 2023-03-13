#include <iostream>

using namespace std;

// function definition
bool isValidEmail(string email)  
{
    int len = email.length(); 

    for(int i = 0; i < len; i++)
    {
        if(email[i] == '@')
        {
            return true; 
        }
    }
    // ERROR 1: missing return statement (warning)
}

// ERROR 2: function re-definition
bool isValidEmail(string email)  
{
    cout << "demo error 2" << endl;
    return 0;
}


int main()
{   
    int sum = a + b;
    string email = "csci1300@colorado.edu";
    bool flag = 0, flag1 = 0;
    flag = isValidEmail(email);
    if(flag) 
    {
        cout << "Valid email" << endl;
    }
    else
    {
        cout << "Not a valid email" << endl;
    }   
    // ERROR 3: function doesn't exist or prototype mismatch
    flag1 = isValidEmail(email, flag);   
    return 0; 
}


