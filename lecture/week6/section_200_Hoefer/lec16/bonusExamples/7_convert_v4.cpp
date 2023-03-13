#include <iostream>

using namespace std;
// the program converts kilograms to pounds and liters to fluid ounce

void convert_metric(double arr1[], double arr2[], int size, double factor) // size is pass by value
{
    for(int i =0; i < size; i++)
    {
        arr2[i] = arr1[i] * factor;
    }

}

void print_array(double arr[], int size)
{
    for(int i =0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void accept_input(double arr[], int size)
{
    for(int i =0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    // size of array
    int SIZE = 5; 
    // declare arrays
    double input[SIZE];
    double pounds[SIZE];
    double oz[SIZE];

    // initialize array with user input
    cout << "Enter a 5 values(kg) to be converted to pounds: ";
    accept_input(input, SIZE);
    
    // convert kg to pounds -  1 kg = 2.205 pounds
    convert_metric(input, pounds, SIZE, 2.205);

    // print pounds array
    cout << "KG to pounds:" << endl;
    print_array(pounds, SIZE);

    // initialize array with user input
    cout << "Enter a 5 values(liter) to be converted to pounds: ";

    accept_input(input, SIZE);

    // convert liter to fluid ounce -  1 ltr = 33.814 fl oz
    convert_metric(input, oz, SIZE, 33.814);
    

    // print oz array
    cout << "Liters to OZ:" << endl;
    print_array(oz, SIZE);

    return 0;
}