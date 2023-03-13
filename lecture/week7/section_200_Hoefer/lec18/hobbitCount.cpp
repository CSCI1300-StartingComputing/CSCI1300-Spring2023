#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    string fname = "hobbit-train.txt";

    // Create variable of type ifstream (input file stream)
    ifstream my_stream; // like we're making our own version of cin, but for a specific file

    // Open file (provide filename)
    my_stream.open(fname);

    // Check if file opened successfully
    if (my_stream.is_open())
    {
        // Read from file
        // TODO
        cout << "ready to read"<< endl;

        // char my_char;  // one character at a time

        string my_string;  // one word at a time and one line at a time

        // look at three characters at a time
        // look for a pattern of: [. ? !] followed by a space followed by a capital letter

        char a = '0';
        char b = '0';
        char c = '0';

        int count = 0;

        while (my_stream.get(a)) // USE .get instead of >> to get whitespace
        {
            //cout << a << endl;

            if ((c == '.' || c == '?' || c =='!') && (b == ' ') && isupper(a))
            {
                // we found the end of a sentence!
                count ++;
            }

            c = b;
            b = a;
        }

        cout << "We found " << count << " sentences " << endl;

        // Close file
        my_stream.close();
    }

    return 0;
}

