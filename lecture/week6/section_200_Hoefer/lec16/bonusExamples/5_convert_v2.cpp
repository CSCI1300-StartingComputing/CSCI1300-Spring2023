#include <iostream>

using namespace std;
// the program converts kilograms to pounds
// 1 kg = 2.205 pounds
void convert_kg(double kg1[], double pounds[], int size)// names of arrays don't matter as they are passed by reference
{
    for (int i=0; i<size; i++)
    {
        pounds[i] = kg1[i] * 2.205;
    }
}

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
    convert_kg(kg, pounds, SIZE);

    // print pounds array
    cout << "KG to pounds:" << endl;
    for (int i=0; i<SIZE; i++)
    {
        cout << pounds[i] << endl;
    }
    return 0;
} 