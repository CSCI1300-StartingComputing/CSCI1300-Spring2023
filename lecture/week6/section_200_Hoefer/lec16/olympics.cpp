#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int COLUMNS = 3;

/**
   Computes the total of a row in a table.
   @param table: a table with 3 columns
   @param row: the row that needs to be totaled
   @return the sum of all elements in the given row
*/
double row_total(int table[][COLUMNS], int row)
{
   int total = 0; 
   for (int j = 0; j < COLUMNS; j++)
   {
      total = total + table[row][j];
   }
   return total;
}

double col_total(int table[][COLUMNS], int no_rows, int col)
{
   int total = 0;
   for (int i = 0; i < no_rows; i++)
   {
      total = total + table[i][col];
   }
   return total;
}

int main()
{
   const int COUNTRIES = 7;
   const int MEDALS = 3;

   string countries[] =
      {
         "Canada",
         "China",
         "Germany",
         "Korea",
         "Japan",
         "Russia",
         "United States"
      };
   // C++ uses an array with two subscripts to store a two-dimensional array. 
   // For example, here is the definition of an array with 7 rows and 3 columns, 
   // suitable for storing our medal count data:
   int counts[COUNTRIES][MEDALS] = 
   { 
      { 1, 0, 1 },
      { 1, 1, 0 },
      { 0, 0, 1 },
      { 1, 0, 0 },
      { 0, 1, 1 },
      { 0, 1, 1 },
      { 1, 1, 0 }
   }; 

   cout << "        Country    Gold  Silver  Bronze   Total" << endl;

   // Print countries, counts, and row totals
   for (int i = 0; i < COUNTRIES; i++)
   {
      cout << setw(15) << countries[i];
      // Process the ith row
      for (int j = 0; j < MEDALS; j++)
      {
         cout << setw(8) << counts[i][j];
      }
      int total = row_total(counts, i);
      cout << setw(8) << total << endl; 
   }
   
   
   cout << setw(15) << "Total" << setw(8) <<col_total(counts, COUNTRIES, 0);
   cout << setw(8) << col_total(counts, COUNTRIES, 1);
   cout << setw(8) << col_total(counts, COUNTRIES, 2) << endl;

   return 0;
}
