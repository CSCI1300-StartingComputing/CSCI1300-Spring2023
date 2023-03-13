#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Using C++, determine the country with the highest population density

    // where would we start?

    // data storage in 3 arrays
    // hold all the country names
    string names[250]; 

    int populations[250]; // store country populations

    int areas[250]; // store country areas
    
    double densities[250];  // store country population densities

    // first challenge - fill these arrays with the data we want

    // small step - read the file, and print contents to screen
    ifstream input_file;  // make the ifstream object

    input_file.open("world_population.csv"); // open the file

    
    int country_counter = 0;

    if (input_file.is_open()) // check if open
    {
        cout << "we can open the file" << endl;

        string temp;

        char curr_delim = ',';

        getline(input_file, temp);

        int line_position = 0;

        while(getline(input_file, temp, curr_delim))
        {
            if (line_position == 0)
            {
                // we have a country name, so save it in the names array
                names[country_counter] = temp;
                line_position++;
            } else if (line_position == 1)
            {
                // grab population
                populations[country_counter] = stoi(temp);
                line_position++;
                curr_delim = '\n';
            } else if (line_position == 2)
            {
                // grab area
                areas[country_counter] = stoi(temp);
                line_position = 0;
                curr_delim = ',';
                country_counter++;
            }
            
            //cout << "!!" << temp << "||" << endl;
        }
    }

    cout << "look in memory" << endl;


    // second challenge - do some calculation on the arrays to get the answer
    // loop through and fill the array of densities

    for (int i = 0; i < country_counter; i++)
    {
        densities[i] = static_cast<double>(populations[i]) / areas[i];
    }

    // now find the largest density
    double largest_density = densities[0];
    int largest_density_index = 0;
    
    for (int i = 0; i < country_counter; i++)
    {
        if (densities[i] > largest_density)
        {
            largest_density = densities[i];
            largest_density_index = i;
        }
    }

    cout << "The highest population density is " << largest_density << endl;
    cout << "Country: " << names[largest_density_index] << endl;

    return 0;
}

int GLOBAL = 5;