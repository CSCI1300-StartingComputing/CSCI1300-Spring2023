#include <iostream>
#include <cmath>

using namespace std;


string sayHello(string name="Michael", int some_num)
{
    cout << "Hello " << name << endl;
    name = "I have deleted your name";
    return name; // data type of return value must match function type
}

int main()
{
    string my_own_name = "Yellow";
    string new_string = sayHello(my_own_name, 12);
    cout << "Original name: " << my_own_name << endl;
    cout << "New name: " << new_string << endl;

    return 0;
}

