#include <iostream>

using namespace std;

// Write a function to print out the values of any array of integers
void printArray(int your_int_arr[], int array_size)
{}
    // print each value in the array
    for (int i = 0; i < array_size; i++)
    {
        cout << your_int_arr[i] << endl;
    }
}

void fillArrayWithPerfectSquares(int your_array[], int size)
{
    // fill with size perfect squares
    for (int i = 0; i < size; i++)
    {
        your_array[i] = (i+1)*(i+1);
    }
}


int main()
{
    const int ARR_SIZE = 5;

    // create an array of size 5
    int arr[ARR_SIZE];

    // print values
    cout << "Before: " << endl;
    printArray(arr, ARR_SIZE);

    // fill array
    fillArrayWithPerfectSquares(arr, ARR_SIZE);    

    // print values again
    cout << "After: " << endl;    
    printArray(arr, ARR_SIZE);

    return 0;
}