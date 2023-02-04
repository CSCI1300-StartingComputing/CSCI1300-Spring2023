#include <iostream>
using namespace std;

int main()
{
    // Example: representing time in a digital clock
    int hour, minute;
    cout << "Please enter the time in 24 /'hour minute/' format: "  << endl;
    cin >> hour >> minute;

    switch(hour)
    {
        case 1: 
        case 2: 
        case 3: 
        case 4: 
        case 5: 
        case 6: 
        case 7: 
        case 8: 
        case 9: 
        case 10: 
        case 11: cout << hour << ":" << minute << "AM" << endl;break;
        case 12: cout << hour << ":" << minute << "PM" << endl;break;
        case 13: 
        case 14: 
        case 15: 
        case 16: 
        case 17: 
        case 18: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 19: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 20: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 21: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 22: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 23: cout << hour-12 << ":" << minute << "PM" << endl;break;
        case 24: cout << hour-12 << ":" << minute << "AM" << endl;break;
        default: cout << "Wrong input!" << endl;break;
    }

    return 0;
}