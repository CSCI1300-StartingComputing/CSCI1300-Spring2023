#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double my_double = 0.75;

    cout << fixed << setprecision(1) << my_double << endl;
    
    return 0;
}