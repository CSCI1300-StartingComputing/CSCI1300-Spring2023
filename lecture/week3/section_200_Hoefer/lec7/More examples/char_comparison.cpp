#include <iostream>
#include <string>
using namespace std;

int main()
{
    // char c = 'abc';
    // cout << "Character initialization: " << c << endl;
    // cout << "Enter a character: ";
    // cin>>c;
    // cout << "Character input from cin: " << c << endl;

    int n = 0;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << endl;

    if(cin.fail()){
            cout << "Error!" << endl;
            return 1;
        }

    return 0;
}

