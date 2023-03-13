#include <iostream>
using namespace std;
int main()
{
    int total;
    int x1;
    cout << "Please enter a number: ";
    cin >> x1;
    total = total + x1;
    cout << "total: " << total << endl;
    cout << "Please enter another number: ";
    int x2;
    cin >> x2;
    total = total + x1;
    cout << "total: " << total << endl;
    total = total / 2;
    cout << "The average of the two numbers is " << total << "endl";
    return 0;
}
