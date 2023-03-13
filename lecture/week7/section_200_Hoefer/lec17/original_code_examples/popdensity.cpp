/* Section 8.2.3 Page 267 */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;
    in_file.open("worldpop.txt");

    string line;

    while(getline(in_file, line)) // Antigua and Barbuda 	69842
    {
       int i = 0;
       while(!isdigit(line[i])) // find the index where the number begins
       {
          i++;
       }

       int j = i -1;
       while(isspace(line[j])) // find index where our string ends
       {
          j--;
       }

       string country_name = line.substr(0, j+1);
       string population = line.substr(i); // could use stoi or stod 

       cout << country_name << " " << population << endl;
    }

    return 0;
}
