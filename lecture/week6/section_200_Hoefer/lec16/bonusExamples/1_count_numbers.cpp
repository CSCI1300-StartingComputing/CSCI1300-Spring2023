#include <iostream>

using namespace std;


// count the number of negative numbers in the array
int main()
{
    // store array size in a constant variable
    const int SIZE = 10;

    // declare and initialize array
    int scores[SIZE] = {1, 2, 3, -7, 9, -10, 3, 0, -4, -1};

    // cout << scores[1] << endl;

    // create variable to store count
    int count = 0;

    // count -ve elements in the array
    for(int i  = 0; i < SIZE; i++)
    {
        if(scores[i] >= 0)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    // print count
    cout << count << endl;

    return 0;
}