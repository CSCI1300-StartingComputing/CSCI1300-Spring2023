/* Section 8.2.3 Page 267 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

int main()
{
    // store data in three arrays
    // array of strings to hold the country names
    string names[250];

    // array of ints, to hold the population
    int population[250];

    // array of ints, to hold the area
    int areas[250];

    // read data from the file into the arrays
    ifstream in_file;
    in_file.open("world_population.csv");

    if (in_file.is_open())
    {
        // read lines from the file
        cout << "we found the file" << endl;
        string temp;
        getline(in_file, temp); // read the headers
        cout << temp << endl;

        char my_char;
        int comma_count = 0;
        int country_counter = 0;
        char curr_delim = ',';
        while (getline(in_file, temp, curr_delim))
        {
            cout << "a"<< endl;
            if (comma_count == 0)
            {
                // the name of the country
                names[country_counter] = temp;
                comma_count++;
            } else if (comma_count == 1)
            {
                // the population 
                population[country_counter] = stoi(temp);
                comma_count++;
                curr_delim = '\n';
            } else
            {
                // the area
                areas[country_counter] = stoi(temp);
                curr_delim = ',';
                country_counter++;
                comma_count = 0; // go back to start of line
            }
            cout << temp << endl;
        }
    }
    else
    {
        cout << "Can't find the file" << endl;
    }

    return 0;
}
