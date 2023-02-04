#include <iostream>
using namespace std;

int main()
{
    int floor;
    cout << "Enter the desired floor: " << endl;
    cin >> floor;

    int actual_floor;
    if (floor > 13)  //never put a semicolon after the parentheses!!
    {
        actual_floor = floor - 1; // equivalent to actual_floor --;
        cout << "Actual floor: " << actual_floor << endl;
    }
    else
    {
        actual_floor = floor;
        cout << "Actual floor: " << actual_floor << endl;
    }

    return 0;
}