#include <iostream>

using namespace std;
// the program converts kilograms to pounds
// 1 kg = 2.205 pounds

int main()
{
    // size of array
    const int SIZE = 5;
    // declare arrays
    double kg[SIZE];
    double pounds[SIZE];

    // initialize array with user input
    cout << "Enter a 5 values(kg) to be converted to pounds: ";
    for(int i=0; i< SIZE; i++)
    {
        cin >> kg[i];
    }

    // print kg array
    cout << "KG inputs:" << endl;
    for (int i=0; i<SIZE; i++)
    {
        cout << kg[i] << endl;
    }

    //  convert kg to pounds
    for (int i=0; i<SIZE; i++)
    {
        pounds[i] = kg[i] * 2.205;
    }

    // print pounds array
    cout << "KG to pounds:" << endl;
    for (int i=0; i<SIZE; i++)
    {
        cout << pounds[i] << endl;
    }
    return 0;
} 