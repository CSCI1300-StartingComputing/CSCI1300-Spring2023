#include <iostream>
#include <cassert>

using namespace std;

// Create a function called my_sum that has two int parameters 
// and returns an int that is the simply the sum of the two params.
int my_sum(int a, int b)
{
    /*int sum = a + b;
    return sum;*/
    return (a + b);
}

// Create another function, also called my_sum that 
//  has three int parameters and returns an int that 
//  is simply the sum of the three params.
int my_sum(int a, int b, int c)
{
    /*int sum = a + b + c;
    return sum;*/
    return (a + b + c);
}

int main()
{
    assert(my_sum(3,8) == 11);
    assert(my_sum(0,0) == 0);
    assert(my_sum(-1, -3) == -4);

    assert(my_sum(1,2,3) == 6);

    return 0;
}



