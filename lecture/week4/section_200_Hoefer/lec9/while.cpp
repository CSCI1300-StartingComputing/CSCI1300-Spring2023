#include <iostream>

using namespace std;

int main()
{
    int my_int = 5;

    while (my_int < 7)  // this of course, will evaluate to true, so the code inside the if block will execute
    {
        cout << "This is a true statement" << endl;
        break;
    } 


    return 0;
}