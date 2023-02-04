#include <iostream>
using namespace std;

int main()
{
    // The switch statement
    // When to use it: when you have multiple alternatives 
    // for the value of a variable. Most often: with int and char

    // Very often used for menu options:
    // Please choose your difficulty option:
    // 1. Easy
    // 2. Medium
    // 3. Difficult

    // When you cannot use it:
    // 1. When your variable can take a value in a range
    // 2. Cannot be used with double variables because == is not precise

    // Example: Buying breakfast

    char option;
    cout << "What would you like to buy today?"  << endl;
    cout << "a: Appple" << endl;
    cout << "b: Bagel" << endl;
    cout << "c: Cinnamon roll" << endl;
    cout << "d: Doughnut" << endl;
    cout << "q: Quit" << endl;
    cin >> option;


// switch(var){
//         case 1: break;
//         case 2: break;
//         default: break;
// }


    switch(option)
    {   
        case 'A':
        case 'a': 
                cout << "You bought an apple" << endl;
                break; 
        case 'B':
        case 'b': 
                cout << "You bought a Bagel" << endl;
                break;
        case 'c': 
                cout << "You bought a Cinnamon roll" << endl;
                break;
        case 'd': 
                cout << "You bought a doughnut" << endl;
                break;
        case 'q': 
                cout << "Goodbye! Have a nice day!!" << endl;
                break;
        default: 
                cout << "Sorry! We don't have that item in our menu" << endl;
                break;
    }

    return 0;
}