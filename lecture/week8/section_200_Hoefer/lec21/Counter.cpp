// This file contains the definitions of the functions for the 
// counter class.
// this is also known as an "implementation file"


#include "Counter.h"  // it must include the header of the class it implements

// technically this is unnecessary because we don't use anything in the std namespace 
using namespace std; 


// implementation of all our functions
Counter::Counter() // constructor (default constructor)
{
    value = 0;
}

Counter::Counter(int initial_val, int multiplier)
{
    value = initial_val * multiplier;
}

void Counter::count()
{
    value += 1;
}

void Counter::reset()
{
    value = 0;
}

int Counter::getCount() const // this "const" means the function CAN'T CHANGE ANY VARIABLE OF THE CLASS
{
    return value;
}