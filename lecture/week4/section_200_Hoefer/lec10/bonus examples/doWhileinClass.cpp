#include <iostream>

using namespace std;

int main()
{
    int input;

    do
    {
        cout << "Enter a positive number:";
        cin >> input;

        if (input <= 0){
            cout << "This is a negative number" << endl;
        }
    } while (input <= 0);


    cout << "The number you entered is " << input << endl;


    return 0;
}