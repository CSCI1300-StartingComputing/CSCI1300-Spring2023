#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // create output stream variable
    ofstream my_stream;

    // open the file
    my_stream.open("some_new_file.txt");

    // write to file
    my_stream << "Hello World!" << endl;

    // close file!
    my_stream.close();

    return 0;
}