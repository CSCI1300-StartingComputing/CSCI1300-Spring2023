#### **CSCI 1300 CS1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 5 - week of Feb 20th, 2023**

# Table of contents
1. [Functions](#func)
2. [Exercises](#exercises)
   1. [Question 1 - Strawberry Farm Fertilizer](#strawberry_app)
   2. [Question 2 - Spot the Errors - Championship Edition](#spot)
   3. [Question 3 - Strawberry Farm Fertilizer Menu](#menu)
   4. [Question 4 - Spot the Errors](#errors_2)
3. [Deliverables](#deliverables)

# Functions <a name="func"></a>
This week in lecture we’re learning how to group together multiple statements in functions. Functions are a fundamental building block of programming. They tend to solve a general but narrow problem, they should be easily implemented and understood, and they can be reused. 

# Exercises <a name="exercises"></a>

### 1. **Strawberry Farm Fertilizer**. <a name="strawberry_app"></a>
It's the month of February, and you're a smart farmer looking forward to making money as people flock to stores to buy strawberries for Valentine's week. To make sure that your crop looks its best, you need to keep the strawberries well fertilized. Design two functions to track the amount of fertilizer you purchase and use. Both functions should take in an amount for your current stock of fertilizer and an amount to be used or added into the stock, and then return your new fertilizer levels. Here are two function headers to get you started:


```cpp
double fertilize(double stock, double amount)
double restock(double stock, double amount)
```

You cannot fertilize strawberries with more than what you have in your stock!
Here’s some example output (no user input):

-------------------------------
**Example 1**:
 ```cpp  
double stock = 100;
double amount = 20.5;
cout << restock(stock, amount) << endl;
```

**Output: 120.50**

---------------------------------

**Example 2**:
```cpp

double stock = 51;
double amount = 50;
cout << fertilize(stock, amount) << endl;
```
**Output: 1.00**

-----------------------------------

**Example 3**:
```cpp
double stock = 71.4;
double amount = 20;
cout << fertilize(stock, amount) << endl;
```
**Output: 51.40**

-------------------------------------

**1a**. Write an algorithm in pseudocode for the program above.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
-----------------------------

**1b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
-----------------------------
**1c**. Imagine what a sample run of your program would look like. Think about at least two examples

*Sample run 1:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

*Sample run 2:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------
*Sample run 3:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**1d**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**1e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.
<br>

### 2. **Spot the errors - Championship Edition**. <a name="spot"></a>
**2a**.
This week we’ll be doing something a little different in recitation. Below is a snippet of code that is free of errors; try running the file [rec5_season.cpp](rec5_season.cpp) in VS Code to see for yourselves! 

```cpp
#include <iostream>

using namespace std;

string season(string name);
string convertUppercase(string user_string);

int main() 
{
    string name;
    char answer;
    
    do
    {
    	cout << "What is your first name?" << endl;
    	cin >> name;
        name = convertUppercase(name);
   	cout << "Your season is:" << season(name) << "!" << endl;

   	cout << "Would you like another suggestion (y/n)?" << endl;
   	cin >> answer;

   	while(answer != 'y' && answer != 'n')
	{
   		cout << "Invalid input. Please type only y or n." << endl;
   		cout << "Would you like another suggestion (y/n)?" << endl;
   		cin >> answer;
   	}
   	 
    }while(answer != 'n');

    cout << "Goodbye!" << endl;
    return 0;
}

string season(string name)
{
    //suggests an accessory for the weather
    string suggestion;
    
    if(int(name[0]) >= 65 && int(name[0]) <= 71) // a=65, g=71
    {
   	 suggestion = " winter";
    }
    else if(int(name[0]) >= 72 && int(name[0]) <= 78) // h=72, n=78
    {
   	 suggestion = " spring";
    }
    else if(int(name[0]) >= 79 && int(name[0]) <= 85) // o=79, u=85
    { 
   	 suggestion = " summer";
    }
    else if(int(name[0]) >= 86 && int(name[0]) <= 90) // v=86, z=90
    { 
   	 suggestion = " fall";
    }
    else //For invalid entries
    { 
   	 suggestion = " Game of Thrones S08";
    }
    
    return suggestion;
}

string convertUppercase(string user_string)
{
    //converts a string to uppercase letters
    string newString;
    int string_size;
    string_size = user_string.size();

    for (int i=0; i < string_size; i++)
    {
        if (int(user_string[i]) >= 97 && int(user_string[i]) <= 122) 
        {
            newString = newString + char(int(user_string[i]) - 32); 
        }
        else
        {
            newString = newString + user_string[i];
        }
    }
    return newString;
}
```
**2b**.
Your task is to work as a team to BREAK this code. Introduce as many unique compile-time errors as you can, but be sure to keep track of all of the errors you introduce. Keep in mind that the errors you introduce must be unique. Avoid introducing multiples of the same error.

In about 5 minutes, you’ll give your code to another team for them to try and debug. Whichever team catches the most errors wins! Who doesn’t enjoy a little friendly competition?

Keep a list of the bugs your team introduces on a Google Doc, paper, or here:
| Error                               | Line Number      |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |


**2c**.
Now it’s time for you to switch code with your competition. Your team’s job is to identify and fix as many errors as you can before time’s up! Be sure to keep track of all the errors you find. In order to win, your team needs to identify more bugs than the other team. 

Keep a list of the bugs you’re able to find and fix below:

| Error                               | Line Number      |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |

**2d**. 
Now, give the list of bugs you found back to the other team. They should do the same for you. Go through the list of bugs the other team found and verify them using your team’s list from earlier. How many bugs did the other team find?

### 3. Strawberry Farm Fertilizer Menu <a name="menu"></a>
Using the functions from problem 1, create a menu that can track the fertilizer stores of a user by allowing them to fertilize strawberries and add more fertilizer to their stores. It should take user input to indicate which menu item the user would like to choose, and have an option to exit.

Example Output 1:
<pre><code>
    Menu:
    1) Fertilize
    2) Stock Up
    3) Check Stores
    4) Exit
    <strong>2</strong>    
    How much fertilizer?
    <strong>22.50</strong>
    Restock Successful
</code></pre>

Example Output 2:
<pre><code>
    Menu:
    1) Fertilize
    2) Stock Up
    3) Check Stores
    4) Exit
    <strong>3</strong>  
    Storage level is 22.50 lbs
</code></pre>

Example Output 3:
<pre><code>
    Menu:
    1) Fertilize
    2) Stock Up
    3) Check Stores
    4) Exit
    <strong>4</strong>    
    Exiting program
</code></pre>

**3a**. Write an algorithm in pseudocode for the program above

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3c**. Imagine what a sample run of your program would look like.
*Sample run :*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**3d**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs, and for the boundary conditions.

### 4. Spot the Errors <a name="errors_2"></a>
**a**
```cpp

#include <iostream>
#include <string>
using namespace std;

int address(string street, string apartment)
{
	string s = "You stay in APT " + apartment + " on " + street + " St.";
}

// Main function prints the address
int main()
{
   cout<<address("Pearl","123")<<endl;
}
```
**b**
```cpp

#include <iostream>
using namespace std;

int main()
{
    cout << avg(8,13) << endl;
    return 0;
}

int avg(int a, int b)
{
    int x = (a+b) / 2.0;
    return 0;
}

```

**c**
```cpp

#include <iostream>
#include <cmath>
using namespace std;

int pythagoras(int side1, int side2)
{
    cout << "Enter side 1: " << endl;
    cin >> side1;
    cout << "Enter side 2: " << endl;
    cin >> side2;

    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

	return hypotenuse;
}

int main()
{
    cout << pythagoras(5,6) << endl;
    return 0;
}

```

**d**
```cpp

#include <iostream>
using namespace std;

string concatenate( a="default", b);

int main()
{
    cout << concatenate(‘csci’,1300) << endl;
    return 0;
}

string concatenate(string a, string b)
{
    string c = a + b;
	return c;
}

```

**e**
```cpp

#include <iostream>

using namespace std;

 void justKeepLooping(char letter);

 int main(){
     justKeepLooping(^);
     return 0;
 }

 void justKeepLooping(char letter){
     //prints out 5 ‘^’ characters each on a new line
     int i = 10;
     do{
         cout << letter << endl;
         i += 2;
     }while(i > 1)
     return;
	}
```

**f**
```cpp
#include <iostream>

 using namespace std;
 
 string hello();
 void kenobi(string name);
 
 int main(){
         hello();
         return 0;
 
 void hello(){
         cout << "Hello there!" << endl;;
         kenobi("Kenobi!");
     return;
 }
 
 void kenobi(string name){
         cin << "General " << name << endl;
     return;
 }

```

**g**
```cpp

#include <iostream>
	
double surprise(int input){
  string mysteryString = "surprise";
  input == input % 8;
  return mysteryString[input];
}

int main(){
  int input;
  char result;
  
  cout << "Enter a number:" << endl;
  cin > input;

  result = surprise(input);
  cout << result << endl;
  
  return 0;
	}
```

# Deliverables <a name="deliverables"></a>
Complete the Recitation 5 assignment on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/308712)
