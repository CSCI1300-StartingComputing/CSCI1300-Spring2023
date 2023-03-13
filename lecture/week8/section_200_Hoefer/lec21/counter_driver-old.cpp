#include <iostream>
#include "Counter.h" // include a custom file!

// note, we have to compile this as so:
// g++ counter_driver.cpp Counter.cpp

using namespace std;

int main()
{
    // create counter with default constructor
    // yes, believe it or not, this calls a function!
    // (the function being the constructor)
    Counter my_counter; // create an object of type Counter. 

    //my_counter.reset();  // this is no longer necessary with our constructor
    
    my_counter.count();  // the only way to increase the value
    my_counter.count();
    cout << my_counter.getCount() << endl; // the only way to read the value (notice this is read only)

    // use parameterized constructor
    Counter custom_counter(999);
    custom_counter.count();
    cout << custom_counter.getCount() << endl;

    // use the same parameterized constructor, but pass in second arg
    Counter third_counter(10, 5);
    cout << third_counter.getCount() << endl;

    // note that we can also call the constructor like so:
    Counter fourth_counter = Counter(10,5);
    Counter fifth_counter = Counter();


    return 0;
}