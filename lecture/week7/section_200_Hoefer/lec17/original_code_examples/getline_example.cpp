// extract to string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name;

  //cout << "Enter your full name: ";
  //cin >> name;   // pieces of sushi are separated by ANY whitespace (space, tab, newline)
  //cout << "Hello, " << name << "!\n";
  
  cout << "Enter your full name: ";
  getline (cin,name);   // pieces of sushi are separated by a newline
  cout << "Hello, " << name << "!\n";

  return 0;
}