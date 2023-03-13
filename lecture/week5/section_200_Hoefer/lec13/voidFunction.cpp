#include <iostream>

using namespace std;

void shoutIntoTheVoid(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Is there anybody in there?" << endl;
    }
    return;  // notice no return value
}

int main()
{
    // EXAMPLE 3
    // this line below does not compile!
    // there is no return type, so nothing is "spat out"
    // by the function
    // cout << shoutIntoTheVoid(20) << endl;

    shoutIntoTheVoid(5);

    return 0;
}