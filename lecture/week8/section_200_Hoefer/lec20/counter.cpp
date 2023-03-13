#include <iostream>

using namespace std;

class Counter
{
    private:
        int value; // this initializes to garbage! What will we do...

    public:
        void count()
        {
            value += 1;
        }

        void reset()
        {
            value = 0;
        }

        int getCount() const // this "const" means the function CAN'T CHANGE ANY VARIABLE OF THE CLASS
        {
            return value;
        }
};

int main()
{
    Counter my_counter; // create an object of type Counter. 
    my_counter.reset();  // this requires the user to reset the counter.
    my_counter.count();  // the only way to increase the value
    my_counter.count();
    cout << my_counter.getCount() << endl; // the only way to read the value (notice this is read only)

    return 0;
}