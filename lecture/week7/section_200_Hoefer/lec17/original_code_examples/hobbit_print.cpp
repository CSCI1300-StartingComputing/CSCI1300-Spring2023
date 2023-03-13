#include <iostream>
#include <fstream>

using namespace std;


int main(){

    int myInt = 5;
    double myDouble = 5.5;
    char myChar = 'a';
    string myString = "hello";


    //ifstream myStream;
    //myStream.open("hobbit-train.txt");

    ifstream myStream("hobbit-train.txt");  // we're creating our own cin that reads from a file

    if (myStream.is_open()){
        // myStream is an ifstream, which is a lot like cin (another input stream)

        string temp;

        // myStream >> temp;  // similar syntax to cin >> temp;

        // now using getline instead of >> (stream extraction operator)

        while (getline(myStream, temp))
        {
            if (temp == ""){
                continue;
            }
            cout << temp << endl;
        }



    } else{
        cout << "The file isn't open!" << endl;
    }




    return 0;
}