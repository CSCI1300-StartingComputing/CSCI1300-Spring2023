#include <iostream>

using namespace std;

int main()
{
    // asks a user for their favorite sentence
    string user_sentence;  // by default, all strings start out at ""

    // bad idea
    //string first_word, second_word, third_word, fourth_word, fifth_word;

    cout << "What is your favorite sentence?" << endl;

    // bad idea (continued)
    //cin >> first_word >> second_word >> third_word >> fourth_word >> fifth_word;

    // better idea
    getline(cin, user_sentence);


    // uncomment to do some print statement "debugging"
    // cout << "you said " << user_sentence << endl;

    // If their favorite sentence is longer than 25 characters 
    if(user_sentence.length() > 25)
    {
        cout << "Wow that's a long sentence!" << endl;
    } else
    {
        cout << "That's not that long of a sentence" << endl;
    }

    return 0;
}