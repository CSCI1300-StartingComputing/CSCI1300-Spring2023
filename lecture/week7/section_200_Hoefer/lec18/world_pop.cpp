/* Section 8.2.3 Page 267 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;
    in_file.open("world_population.csv");

    string line;

    while(getline(in_file, line)) // Antigua and Barbuda 	69842
    {
      cout << line << endl;
    }

    return 0;
}
