#include <iostream>
using namespace std;

int num = 10; // global variable

int main()
{
    int x; // numeric input
    cout << "Enter num: ";
    cin >> x;
    cout << x << endl;

    if(cin.fail() == 1) 
    {
        cout << "fail" << endl;// a short messag to indicate that something is wrong
    }
    
    cin.clear(); // clears the failed state/flag that is enabled when cin.fail() is true. 
    // 3rd step
    cin.ignore(10, '\n'); // ignore the content that is in the buffer
    // explicitly ignoring 10 characters with \n(enter) acting as a breakpoint
  

    cout << "Enter num: "; 
    cin >> x;
    if(cin.fail())
    {
        cout << "fail" << endl;
    }
    cout << x << endl;

    return 0;
}