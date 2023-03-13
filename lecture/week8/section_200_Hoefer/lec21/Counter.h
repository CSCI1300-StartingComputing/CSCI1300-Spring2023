// we may need #includes up here if we declare certain 
// classes as members of Counter
// otherwise, it's best practice to stick #includes and using namespaces
// in the class definition file (.cpp file)

// A class representing a physical counter
// largely used for counting discrete values of something 
class Counter
{
    private:
        int value; // this initializes to garbage! What will we do...

    public:
        Counter(); // constructor (default constructor)

        // parameterized constructor with a default argument
        // sort of silly, but it will set the value to
        // the initial_val times the multiplier (which defaults to 1)
        Counter(int initial_val, int multiplier=1);

        // count adds one to the value
        void count();

        // resets the value to zero
        void reset();

        // returns the current value
        int getCount() const; // this "const" means the function CAN'T CHANGE ANY VARIABLE OF THE CLASS
};


