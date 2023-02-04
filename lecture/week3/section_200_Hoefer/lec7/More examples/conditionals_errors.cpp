#include <iostream>
using namespace std;

int main()
{
    // Error #1: don't put a semicolon after the if statement
    int cheerios, miniWheats;
    cheerios = 150;
    miniWheats = 75;
    // the ; below will generate a warning, but not an error. 
    //The cout statement will always print. This is because the ; is an "empty statement" and it 
    // effectively ends the if statement. The cout statement becomes part of "the rest of the program"
    if (cheerios < miniWheats); 
    {
        cout << "Go Mini Wheats!" << endl;
    }

    // Part 2: if you put a semicolon after the if condition, but you have an else, you WILL get an error
    // because with the if statement effectively ended, you will have an  else without an if
    // also known as dangling-else problem
    // if (cheerios < miniWheats);
    // {
    //     cout << "Go Mini Wheats!" << endl;
    // }
    // else // notice error here
    // {
    //     cout << "Go Cheerios!" << endl;
    // }
    
    // Error #2: don't put a semicolon after the else
    // Same: the ; statement, an empty  statement, will become the else block, and it end the else

    
    // Error #3: don't put the condition again after else (nor the inverse of the condition)
    // if (cheerios < miniWheats) 
    // {
    //     cout << "Go Mini Wheats!" << endl;
    // }
    // else (cheerios >= miniWheats) // condition is not needed. The else is ALWAYS ALONE!
    // {
    //     cout << "Go Cheerios!" << endl;
    // }

    // Error #4: confusing = and ==
    // cheerios = 5 evaluates to 5
    // cheerios = 17 evaluates to 17
    // any numerical value other than 0 will evaluate  to True
    // cheerios = 50;
    // miniWheats = 70;
    // if (cheerios = 70) // BEAWARE: this will give you a warning, but not an error!
    // {
    //     cout << "Hooray! They have the same value" << endl;
    // }
    // else
    // {
    //     cout << "Different" << endl;
    // }
    
    // Error #5: inadvertently using statements that do not evaluate to true or false as conditions
    // if (cheerios)
    // if (5)
    // if ("yes")
    // if (cheerios/5) 
    // all the examples above will evaluate to something other than 0, so will run as True!
    // cheerios = 50;
    // miniWheats = 70;
    // if (cheerios) // BEWARE: this will give you a warning, but not an error!
    // {
    //     cout << "Hooray! They have the same value" << endl;
    // }
    // else
    // {
    //     cout << "Different" << endl;
    // }

    // Error #6: don't forget to use the {} for each if or else block, even if there is only one statement in each block

    // if the if block has only one statement, the { } are not needed. 
    // But use them anyway! It's good practice! It will save  you many headaches later. It also helps you see
    // the different levels in your nested branches
    // if (cheerios < miniWheats) 
    //     cout << "Go Mini Wheats!" << endl;


    // Error #7: you can't have an else without an if
    // See the example on lines 20-27

    // Error #8: validating user input - if the input value must meet certain conditions to be valid, 
    // then to spot the user error you need to check for the INVERSE of the given conditions
    // Example: the user needs to enter a value between 5 and 10
    // This means the value needs to be >=5 AND also <=10
    // To check for user error we need to check if the user entered a value "not between 5 and 10"
    // This is equivalent to saying: did the user entered a value (lower than 5) OR (higher than 10)? 

    // Error #9: always check if any value(s) can turn the condition true (or false). 
    // Particularly useful for variables that are allowed to have a range of values

    // Error #10: forgetting to use "break;" in the switch statement case. The case will "fall through"
    // Remember: break tells the machine to skip down to the end of the switch statement, because a match was found 

    return 0;
}