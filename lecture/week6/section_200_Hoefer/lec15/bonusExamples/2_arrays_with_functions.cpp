#include <iostream>

using namespace std;
 
/**
 * @brief printing array
 * 
 * @param arr (int)
 * @param size (int)
 */
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}


int main()
{
    // store array size in a constant variable
    const int SIZE = 10;

    // declare and initialize array
    int scores[SIZE] = {1,2,3};
    
    // call function to print elements in array
    printArray(scores,SIZE);

    return 0;
}