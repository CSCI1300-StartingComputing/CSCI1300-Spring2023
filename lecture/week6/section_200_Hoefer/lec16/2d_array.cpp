#include <iostream>
#include <iomanip>

using namespace std;


// function prototype
/**
 * @brief printing the elements in a 2D array
 * 
 * @param arr (double): integer array
 * @param row (int): number of elements in array
 */
void print2DArray(double arr[][4], int row);


int main()
{
    // declare row and column variables (const)
    const int MONTHS = 12;
    const int YEARS = 4;

   // C++ uses an array with two subscripts to store a two-dimensional array. 
   // For example, here is the definition of an array with 12 rows and 4 columns, 
   // suitable for storing our sales data:

    double sales[MONTHS][YEARS] ={{57, 47.2, 61, 32},
                                 {68.1, 34, 46, 54},
                                 {43, 58, 38.6, 67.5},
                                 {82.4, 43.2, 57, 29},
                                 {27, 34.5, 42.4, 35},
                                 {34.8, 18, 31, 80},
                                 {55, 21, 47.1, 115},
                                 {61.6, 71.7, 67, 98},
                                 {107, 91.4, 87.3, 100},
                                 {86, 51, 54.1, 65},
                                 {142, 112, 173.5, 210.5},
                                 {74, 83, 107.2, 140}};

    // print sales
    print2DArray(sales, MONTHS);

    return 0;
}

// funtion implementation
void print2DArray(double arr[][4], int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << setw(8) << arr[i][j];
        }
        cout << endl;
    }
}