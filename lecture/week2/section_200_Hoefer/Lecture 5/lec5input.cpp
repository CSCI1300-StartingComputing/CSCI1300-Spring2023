#include <iostream>

using namespace std;

int main(){
    // print prompt asking user for their favorite LETTER
    cout << "What is your favorite letter? " << endl;

    // declare a destination point for the user input
    char fav_letter;


    // get the input from the user;;
    cin >> fav_letter;

    // print out their favorite letter
    cout << "your favorite letter is " << fav_letter << endl;


    // print out the INTEGER representation of their favorite letter 
    // (remember our friend, the ASCII table?)
    int ascii_value = static_cast<int>(fav_letter);  // this is clear to another programmer

    // int ascii_value = fav_letter; // avoid if possible

    cout << "The ascii value is " << ascii_value << endl;
    

    return 0;
}