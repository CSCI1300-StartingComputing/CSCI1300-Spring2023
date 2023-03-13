#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter an integer (q to quit): ";

    while (cin >> x)
    {
        cout << "you entered " << x << endl;
        cout << "Enter an integer (q to quit): ";
    }
    return 0;
}