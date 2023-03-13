#include <iostream>
#include <iomanip>

using namespace std;

// copy the content of one array to another
int main()
{
    // declare two variables;
    int num1, num2;

    // initialize num1
    num1 = 10;

    // copy value of num1 to num2
    num2 = num1;


    // declare two arrays
    const int SIZE = 10;

    // declare and initialize array
    int scores[SIZE] = {1, 2, 3, -7, 9, -10, 3, 0, -4, -1};

    int arr1[SIZE];

    // cannot copy two arrays using the assignemnt operator
    // arr1 = scores;

    for(int i = 0; i < SIZE; i++)
    {
        arr1[i] = scores[i];
    }

    return 0;
}