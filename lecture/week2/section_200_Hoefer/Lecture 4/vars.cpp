#include <iostream>

using namespace std;

int main()
{
    // all is well
    int my_int = 5;
    cout << "my_int line 9: " << my_int << endl;

    // where did the decimal go?!
    int my_other_int = 5.999999;
    cout << "my_other_int line 13: " << my_other_int << endl;
    // (it was truncated)
    
    
    // Would this work???
    float my_float = my_other_int;
    cout << "my_float line 19: " << my_float << endl;
    // no, this does not work, as the truncation happens when trying to store 5.99... into an int.
    
    // instead, assign the literal number to a float variable immediately
    float my_other_float = 5.99999;
    cout << "my_other_float line 24: " << my_float << endl;
    // this finally works!
    
    
    // how about a double? It's the same as a float, but has twice the precision
    double my_double = 5.99999;
    // pause your debugger here! And compare the value of "my_double" and "my_other_float"
    cout << "my_double line 31: " << my_double << endl;

    return 0;
}