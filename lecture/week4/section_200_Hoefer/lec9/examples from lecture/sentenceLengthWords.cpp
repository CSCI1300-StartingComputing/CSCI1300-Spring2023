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

    // keeps track of the index. 
    // This will loop through the entire length of the string
    int curr_index = 0;

    // keeps track of number of spaces found
    int num_spaces = 0;
    
    // check a conditional expression
    // as long as the curr_index is less than the length of the string
    while(curr_index < user_sentence.length())
    {
        // do something (such as printing out each individual character)
        // cout << user_sentence[curr_index] << endl;

        // instead of printing the character to the screen, check if it's a ' ' 
        if (user_sentence[curr_index] == ' ')
        {
            // if it is, then increment num_spaces using this line:
            // num_spaces = num_spaces + 1;

            // alternatively, this line:
            num_spaces++;
        }

        // increment the index to have a hope of getting out of the loop!
        curr_index = curr_index + 1;  
    }

    // since there is no space at the end of the sentence, add one
    int num_words = num_spaces + 1;

    cout << "Your sentence has " << num_words << " words" << endl;


    // If their favorite sentence is longer than 10 words 
    if(num_words > 10)
    {
        cout << "Wow that's a long sentence!" << endl;
    } else
    {
        cout << "That's not that long of a sentence" << endl;
    }

    return 0;
}