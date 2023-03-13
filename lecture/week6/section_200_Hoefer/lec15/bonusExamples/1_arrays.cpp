#include <iostream>

using namespace std;

int main()
{
    // constant variables (const keyword) cannot be modified after initialization
    // naming style - all caps
    const int SIZE = 10;

    // declare array
    double arr[SIZE]; // the size cannot be modified after an array is declared

    // initialize array - individual elements
    arr[0] = 83.7;
    arr[1] = 10.4;

    // print array
    for(int i = 0; i < SIZE; i++) 
    {
        cout << arr[i] << endl;
    }

    // initialize all elements in an array to 0 after declaration
    // initialize array through loop
    for(int i = 0; i < SIZE; i++) // i <= 11
    {
        arr[i] = 0; 
    }
    
    // array declaration + initialization
    // all values are initialized at the tiem of declaration
    int arr1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 

    // print array
    for(int i = 0; i < SIZE; i++) 
    {
        cout << arr1[i] << endl;
    }

    // partial initialization
    int arr2[SIZE] = {1, 2, 3, 4, 5}; // the first 5 elements have been initialized with the values in {} and the rest are initialized to 0

    // print array
    for(int i = 0; i < SIZE; i++) 
    {
        cout << arr2[i] << endl;
    }
    
    // all 0's
    int arr3[SIZE] = { }; // all 0's

    // print array
    for(int i = 0; i < SIZE; i++) 
    {
        cout << arr3[i] << endl;
    }

    // create and initialize arrays of diffeent data types
    char letters[3] = {'a', 'b', 'c'};
    string courses[5] = {"csci", "appm"};
    courses[1].length();
    courses[1] = "chem";
    
    // bounds error
    // if array has size = 10 then you can access elements from arr[0] to arr[9].
    // accessing the 11th element at arr[10] will give you a bounds error (segmentation fault)
    int arr10[5] = {};
    for (int i = 0; i < 100000; i ++)
    {
        //check the condition of your loop
        cout << i << endl;
        cout << arr10[i] << endl;
    }


    return 0;
}