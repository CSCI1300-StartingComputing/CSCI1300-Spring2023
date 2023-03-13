#include <iostream>

using namespace std;

int mySum(int first, int second)
{
    return first + second;
}

void shoutIntoTheVoid(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Is there anybody in there?" << endl;
    }
    return;  // notice no return value
}

void customShoutIntoTheVoid(int n, 
                            string phrase="Is there anybody in there?")
{
    for(int i = 0; i < n; i++)
    {
        cout << phrase << endl;
    }
    return;  
}

int main()
{
    // EXAMPLE 1 - functions with integersd
    int x = 5;
    int y = 10;

    // I can print out the return value directly
    cout << "\n\nEXAMPLE 1";
    cout << mySum(x, y) << endl;

    // I could also save the return value into it's own variable
    int another_int = mySum(x, y);

    // EXAMPLE 2 - no return value! VOID functions
    cout << "\n\nEXAMPLE 2";
    shoutIntoTheVoid(10);

    // EXAMPLE 3
    // this line below does not compile!
    // there is no return type, so nothing is "spat out"
    // by the function
    // cout << shoutIntoTheVoid(20) << endl;

    // EXAMPLE 4
    cout << "\n\nEXAMPLE 4";
    customShoutIntoTheVoid(5, "Information is everything");

    // EXAMPLE 5 - optional arguments, when ommitted, use defaults
    cout << "\n\nEXAMPLE 5";
    customShoutIntoTheVoid(5);

    return 0;
}