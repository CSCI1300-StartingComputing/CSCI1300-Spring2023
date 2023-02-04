#include <iostream>

using namespace std;

int main(){
    
    // EXAMPLE 1 - pre-increment
    int a = 5;

    int b = ++a;

    cout << "b is " << b << endl;

    // EXAMPLE 2 - post increment
    int c = 5;

    int d = c++;

    cout << "d is " << d << endl;

    // EXAMPLE 3 - pre vs post in cout 
    int e = 5;
    cout << "Pre increment 'return value' " << ++e << endl;


    int f = 5;
    cout << "Post increment 'return value' " << f++ << endl;



    return 0;
}