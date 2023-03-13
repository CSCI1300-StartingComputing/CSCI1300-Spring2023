#include <iostream>

using namespace std;

int main()
{
    string x;
    cout << "Enter a word:" << endl;
    cin >> x; 

    string y;
    cout << "Enter a sentence:" << endl;
    
    cin.clear();
    cin.ignore(9999, '\n');
    getline(cin, y);

    cout << "Your word is |" << x << "|" << endl;
    cout << "Your sentence is |" << y << "|" << endl;
    return 0;
}