#include <iostream>

using namespace std;

// version 1
void modifyVariables(int a, int b)
{
    // a and b only exist inside this function
    a = 20;
    b = a * 10;
}

void modifyArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 10;
    }
}

// print array
int printArray(int arr[], int size)
{
    int arr1[30];
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr1[10];
}

int main()
{
    // constant variables (const keyword) cannot be modified after initialization
    // naming style - all caps
    const int SIZE = 12;
    int a = 10, b = 20;
    // pass by value - all data types like int, doubles, bool, string

    cout << "Before modifyVariables function call" << endl;
    cout << a << "   " << b << endl;
    
    modifyVariables(a,b);
    cout << "After modifyVariables function call" << endl;
    cout << a << "   " << b << endl;

    int arr[SIZE] = {1, 2, 3, 4, 5};

    cout << "Before modifyArray function call" << endl;
    // print arr
    printArray(arr, SIZE);
    // arrays are passed by reference
    // any changes to the array inside the called function will be reflected in the calling function as well
    modifyArray(arr, SIZE);
    cout << "After modifyArray function call" << endl;

    // print arr
    printArray(arr, SIZE);

    return 0;
}