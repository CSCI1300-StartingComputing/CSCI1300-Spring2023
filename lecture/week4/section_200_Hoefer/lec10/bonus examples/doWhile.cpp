#include <iostream>

using namespace std;

int main()
{
    int input;

    // prevents user from entering negative number
    do{
        cout << "Give me a positive number!" << endl;
        cin >> input;
        
    } while(input <= 0);

    cout << "Finally got that positive int..." << input << endl;


    return 0;
}