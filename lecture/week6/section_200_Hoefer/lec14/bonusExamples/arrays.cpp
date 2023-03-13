#include <iostream>

using namespace std;

int main()
{
    int size = 100;
    // create an integer array of size 10 (note the max index is only 9)
    int my_arr[size];

    // store 100 at index 5
    my_arr[5] = 100;

    // print out every item in the array
    for (int i = 0; i < 10; i ++)
    {
        // hello garbage values!
        cout << my_arr[i] << endl;
    }

    return 0;
}