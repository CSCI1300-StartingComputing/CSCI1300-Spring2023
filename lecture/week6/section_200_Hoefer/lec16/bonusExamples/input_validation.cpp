#include <iostream>
using namespace std;

int main()
{
    int x; // numeric input
    cout << "Enter num: ";
    cin >> x;
    cout << x << endl;

    if(cin.fail()) // int, double
    {
        cout << "fail" << endl;
    }
    
    cin.clear(); // clears the failed state/flag that is enabled when cin.fail() is true
    cin.ignore(10, '\n'); // ignore the content that is in the buffer
  

    cout << "Enter num: "; 
    cin >> x;
    if(cin.fail())
    {
        cout << "fail" << endl;
    }
    cout << x << endl;

    return 0;
}