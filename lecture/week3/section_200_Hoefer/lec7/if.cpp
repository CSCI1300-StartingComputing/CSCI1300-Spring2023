#include <iostream>

using namespace std;

int main()
{
    // make new variable of type bool (true or false)
    bool is_sunny = true;

    bool is_rainy = false;

    // if sunny and not rainy - go outside
    if (is_sunny && !is_rainy) 
    {
        cout << "You should go outside" << endl;
        // it turns raining
        is_rainy = true; // this changes the is_rainy variable
        // but effectively does nothing, as these if statements
        // are coupled together.
    } else if (is_sunny && is_rainy) // if sunny and rainy, go outside with an umbrella
    {
        cout << "You should go outside with an umbrella" << endl;
    } else if (!is_rainy && !is_sunny)  // not rainy and not sunny
    {
        cout << "Go outside with a jacket" << endl;
    }
    else // if (!is_sunny && is_rainy) // not sunny and is rainy
    {
        cout << "You should stay inside" << endl;
    } 

    return 0;
}