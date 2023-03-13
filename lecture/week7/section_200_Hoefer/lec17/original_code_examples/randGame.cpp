#include <iostream>
#include <fstream>

using namespace std;

// TODO - modify this to print a "certificate of completion" of the random number game
// print each guess to a file


int main(){

    ofstream outfile("certificate.txt");  // creating our own cout, that prints to a file

    srand (time(NULL));
    int magic_number = rand() % 100 + 1;

    int guess;
    int guess_count = 0;

    do {
        cout << "Guess the number!"<< endl;
        cin >> guess;
        outfile << "Guess was " << guess << endl;
        guess_count++;
        // they could guess the number correctly
        if (guess == magic_number)
        {
            outfile << "Congratulations you guessed correctly!" << endl;
            outfile << "It took you " << guess_count << " guesses" << endl;
        } else if (guess < magic_number){  // could guess too low
            cout << "Sorry, your guess was too low" << endl;
        } else {  // could guess too high
            cout << "Sorry, your guess was too high" << endl;
        } 
    } while (guess != magic_number);

    outfile.close();


    return 0;
}