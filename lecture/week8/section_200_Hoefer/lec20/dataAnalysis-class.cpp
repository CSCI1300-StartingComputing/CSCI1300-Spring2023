#include <iostream>
#include <fstream>

using namespace std;

struct Country
{
    string name;
    int area;
    int population;
    double density;
};

int main()
{
    // Using C++, determine the country with the highest population density

    // where would we start?

    // data storage in 3 arrays
    // hold all the country names
    Country my_country; // .. this gives us one "country"

    Country countries[250];  // this gives us 250 countries


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
                countries[country_counter].name = temp;
                line_position++;
            } else if (line_position == 1)
            {
                // grab population
                countries[country_counter].population = stoi(temp);
                line_position++;
                curr_delim = '\n';
            } else if (line_position == 2)
            {
                // grab area
                countries[country_counter].area = stoi(temp);
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
        countries[i].density = static_cast<double>(countries[i].population) / countries[i].area;
    }

    // now find the largest density
    double largest_density = countries[0].density;
    int largest_density_index = 0;
    
    for (int i = 0; i < country_counter; i++)
    {
        if (countries[i].density > largest_density)
        {
            largest_density = countries[i].density;
            largest_density_index = i;
        }
    }

    cout << "The highest population density is " << countries[largest_density_index].density << endl;
    cout << "Country: " << countries[largest_density_index].name << endl;

    return 0;
}

int GLOBAL = 5;