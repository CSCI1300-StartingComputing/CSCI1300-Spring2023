#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // let's declare a variable of type int and initialize it
    int temp = 0;
    string input;

    cout << "Enter the temp: " << endl;  //
    cin >> temp;

    if(temp < 35)
    {
        cout << "Is it snowing? y or n: ";
        cin >> input;
        if (input == "y")
        {
            cout << "Wear snow boots and a thick jacket" << endl;
        }
        else
        {
            cout << "Wear a jacket!" << endl;
        }
    }
    else
    {
        cout << "Is it raining? y or n: ";
        cin >> input;
        if (input == "y")
        {
            cout << "Wear boots and a hoodie" << endl;
        }
        else
        {
            cout << "Enjoy the great weather!" << endl;
        }
    }

    return 0;
}