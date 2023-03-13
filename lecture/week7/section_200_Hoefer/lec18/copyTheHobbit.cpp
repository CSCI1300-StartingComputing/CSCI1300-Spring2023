#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fname = "hobbit-train.txt";

    // Create variable 
    ifstream my_stream; 

    // Open file (provide filename)
    my_stream.open(fname);

    ofstream out_stream("hobbit-new.txt");

    // Check if file opened successfully
    if (my_stream.is_open() && out_stream.is_open())
    {
        // Read from file
        // TODO
        cout << "ready to read"<< endl;

        // char my_char;  // one character at a time

        string my_string;  // one word at a time and one line at a time

        while (getline(my_stream, my_string))
        {
            out_stream << my_string << endl;
        }

        // Close file
        my_stream.close();
    }

    return 0;
}