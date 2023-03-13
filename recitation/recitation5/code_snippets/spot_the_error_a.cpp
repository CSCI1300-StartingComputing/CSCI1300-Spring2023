#include <iostream>
#include <string>
using namespace std;

int address(string street, string apartment)
{
	string s = "You stay in APT " + apartment + " on " + street + " St.";
}

// Main function prints the address
int main()
{
    cout<<address("Pearl","123")<<endl;
}
