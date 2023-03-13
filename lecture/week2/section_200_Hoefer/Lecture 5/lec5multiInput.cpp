#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    // prompt user to enter two numbers at the same time (space separated)
    cout << "enter two numbers separate by a space" << endl;
    
    int a, b;
    cin >> a >> b;

    // calculate the sum of the two numbers, print the sum
    cout << "SUM: " << a + b << endl;

    // calculate the absolute value of the difference of the two numbers, 
    int diff = abs(a - b);

    // print the absolute value of the difference
    cout << "Absolute value of difference : " << diff << endl;

    // calculate the value of the first int to the power of the second int
    cout << "First to the second is " << pow(a, b) << endl;

    // BUT I DON'T WANT SCIENTIFIC NOTATION
    cout << "First to the second is (formatted) " 
            << fixed << setprecision(0) << pow(a, b) << endl;
    

    return 0;
}