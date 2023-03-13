#include <iostream>
using namespace std;

string convertCase(string user_string)
{
    string new_string;
    for (int i=0; i < user_string.size(); i++)
    {
        if (int(user_string[i]) >= 97 && int(user_string[i]) <= 122)
        {
            new_string += char(int(user_string[i]) - 32);
        }
        else
        {
            new_string += user_string[i];
        }
    }
    return new_string;
}

int main()
{
    string user_string;
    cout << "Please enter a string: " << endl;
    getline(cin, user_string);  
    cout << convertCase(user_string) << endl;

    return 0;
}
