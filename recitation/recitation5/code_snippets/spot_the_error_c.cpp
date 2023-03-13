#include <iostream>
#include <cmath>
using namespace std;

int pythagoras(int side1, int side2)
{
cout << "Enter side 1: " << endl;
cin >> side1;
cout << "Enter side 2: " << endl;
cin >> side2;

double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

		return hypotenuse;
}
int main()
{
cout << pythagoras(5,6) << endl;
return 0;
}
