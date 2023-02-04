#include <iostream>
using namespace std;

int main()
{
    // variables of type bool.
    // let's declare a variable of type bool
    bool var1;

    // and initialize it
    var1 = true; // 1

    // and display  it
    cout << "the value of var1 is: " << var1 << endl;  // 1

    // let's assign it another value
    var1 = false; // 0
    cout << "the value of var1 is: " << var1 << endl;  // 0

    int x = 17;
    var1 = x < 20;  // 1
    cout << "the value of var1 is: " << var1 << endl;

    // relational operators <, >, <=, >=, == , !=
    var1 = x == 17; // 1
    cout << "the value of var1 is: " << var1 << endl;
    
    // let's try to combine them
    var1 = (x == 17) && (x > 20); // short-circuit evaluation
    cout << "the value of var1 is: " << var1 << endl;  // 0
    
    return 0;
}