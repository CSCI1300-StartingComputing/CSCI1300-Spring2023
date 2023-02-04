#### **CSCI 1300 CS1: Starting Computing: Homework 2**
#### **Godley/Hoefer - Spring 2023**
#### **Due: Friday, February 3rd by 6:00pm MST**
#### **(2 extra-credit points if Coderunner(Start Early) is submitted by 11:59pm Wednesday, February 1)**

<br/>

# Table of contents
1. [Objectives](#objectives)
2. [Background](#background)
3. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2](#question2)
    3. [Question 3](#question3)
    4. [Question 4](#question4)
    5. [Question 5](#question5)
    6. [Question 6](#question6)
4. [Submission Instructions](#submissions)
5. [Overview](#overview)
    1. [Checklist](#checklist)
    2. [Grading Rubric](#grading)

# Objectives <a name="objectives"></a>

* Compile and run C++ code 
* Take user inputs and produce outputs
* Understand C++ data types 
* Perform arithmetic operations 


# Background <a name="background"></a>
## Input & Output
The ability to display information to the user and receive input from them is key to making your programs useful. In C++ one way we can achieve this exchange of information is using **cout** (console out) and **cin** (console in) from the iostream library. Whenever you use **cout** or **cin**, you will need to be sure to include the **iostream** (input output stream) library and use the **std** (standard) namespace.

Example Input (User input in **bold**)
```cpp
#include <iostream>
using namespace std;

int main()
{
   int number_1;
   int number_2;
   cout << "Please enter the first number:" << endl;
   cin >> number_1;
   cout << "Please enter the second number:" << endl;
   cin >> number_2;
   cout << "Sum of numbers: " << number_1 + number_2 << endl;
}
```
<pre>
Please enter the first number:
<b>1</b>
Please enter the second number:
<b>2</b>
Sum of numbers: 3
</pre>

## Data Types

When programming, we store the variables in our computer's memory, but the computer needs to know what kind of data we want to store in them, since it is not going to occupy the same amount of memory to store a simple number than to store a single letter or a large number, and they are not going to be interpreted the same way. Some commonly used data types in C++ are:

1. int (for integers) 
    * int my_int = 5;  
2. char (for characters)
    * char my_char = 'c';
3. bool (for true or false values)
    * bool my_bool = false;
4. float (for floating-point numbers)
    * float my_float = 4.4531;
5. double (for double precision floating-point numbers)
    * double my_double = 4.4531;
6. string (for strings of characters)
    * string my_string = “Hello World”;

## Coding Style

### Whitespace and indentation

**Whitespaces:** Whitespace can set things off and reduce the strain on the reader's eyes. Because the compiler ignores whitespace, you're free to place things anywhere you want and format it however you want. Whitespace can come in several forms, including indentation.

**Indenting:** Increase your indentation by one increment of each brace {, and decrease it once on each closing brace }. Place a line break after every {. Use Tab to increase indent and Shit+Tab to decrease indentation.

**Bad Example:** There is no indentation and it is difficult to see where different portions of the code start and stop.
```cpp
int main(){int number = 0;
    while(number < 10){
    if(number < 5){
    cout << "Less than 5" << endl;
    }else{
    cout << "Greater than 5" << endl;
    }
    number++;
    }
}
```
Good Example: There is proper indentation and the code is easier to read.
```cpp
int main() 
{
    int number = 0;
    while(number < 10) 
    {
        if(number < 5) 
        {
            cout << "Less than 5" << endl;
        }
        else 
        {
            cout << "Greater than 5" << endl;
        }
        number++;
    }
}
```

### Naming and variables
**Names:** Give variables descriptive names, such as first_name or homework_score. Avoid one-letter names like **a** or **x**, except for loop counter variables such as i.

Bad Example:
```cpp
int thing = 16;
double a = 2.2;
string x = "Michael";
```

Good Example:
```cpp
int cups_per_gallon = 16;
double lbs_per_kilo = 2.2;
string first_name = "Michael";
```
**Capitalization:** Name **functions** with “lower camel-casing”, where the first letter is lowercase and all subsequent words in the name start with a capital letter. Name **variables** using "snake casing", where the letters are all lowercase with underscores between words.

Bad Example:
```cpp
int numberbananas = 10;
double NumberFish = 7;
string AGEOFPERSON = "Michael";
void play_GAME (int Players)
{
    . . .
}
```
Good Example:
```cpp
int number_bananas = 10;
double number_fish = 7;
string age_of_person = "Michael";
void playGame (int players)
{
    . . .
}
```


### Comments
* Your code should be well-commented. Use comments to explain what you are doing, especially if you have a complex section of code. These comments are intended to help other developers understand how your code works. Single-line comments should begin with two forward slashes (//). Multi-line comments begin with one forward slash and an asterisk (/* ... comments here ... */). 

* Examples:
    *  Single-line:
    ```cpp
    // CSCI 1300 Spring 2023
    ```
    * Multi-line:
    ```cpp
    /*
    Algorithm:
    Input: two numbers
    Output: sum of input numbers

    1. Ask the user to enter a number
    Save in variable number_1
    2. Ask the user to enter a number
    Save in variable number_2
    3. Compute sum 
    sum = number_1 + number_2
    4. Display sum to user
    */
   ```

# Questions <a name="questions"></a>
## **Question 1 (1 point): Hello World** <a name="question1"></a>
The first program that we usually write in any programming language we’re learning is Hello, World. Create a program that prints “Hello, World!” to the screen (the output window in VS Code).

Expected output
```
Hello, World!
```
The file should be named _helloWorld.cpp_

![Files](images/files5.png)

The .cpp extension on the filename tells VS Code that the file should be read in the C++ programming language. Once you save it, the lines you write in the file should be color-coded to reflect what they do in the program. This is called syntax highlighting.

Here are some suggested steps:

**Step 1: Write Your Code** <br/>
In VS Code, enter the following hello world program:

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "Hello, World!" << endl
    return 0;
}
```

**Step 2: Running Your Code from Command Line** </br>
Move to the “terminal” tab. Make sure you are inside the hmwk2 directory (you can type pwd to see where you are). Type: </br>
``g++ -std=c++17 helloWorld.cpp``

the ``-std=c++17`` option makes sure that the C++ version used to run the program is C++ 17. If you don’t give this option then the default version (which is usually C++98) is used.

<img src="images/files6.png" width="200" height="200" />

This creates an executable called "a.out" (see screenshot above). You can run it by typing

``$ ./a.out ``

Since no executable name was specified to g++, a.out is chosen by default. You can alternatively use the "-o" option to change the name :

``$ g++ -std=c++11 helloWorld.cpp -o hello``

creates an executable called "hello" (see figure below). You can run it by typing

``$ ./hello``

Notice the output looks the same: "Hello, World!", followed by the return of the prompt, for new commands.

![Terminal](images/terminal2.png)

**Step 3: Submit to CodeRunner**<br/>
Head over to Canvas to the assignment **Homework 2 - Coderunner** in the Week 3 Module. Submit your solution for the first problem and press the Check button. You will see a report on how your solution passed the tests, and the resulting score for the first problem. You can modify your code and re-submit (press “Check” again) as many times as you need to. 

![CodeRunner](images/coderunner1.png)
If the code runner says “incorrect”, click the “show difference” button. It will highlight the differences between the expected output and the output your program produced. These outputs should be exactly the same, including upper/lower case, punctuation, and spaces. Otherwise, it’ll mark as incorrect. 
![CodeRunner](images/coderunner2.png)

## **Question 2 (2 points): Hello You!** <a name="question2"></a>
If a program is more interactive, it’s fun! Create a program that takes a name as input and prints _“Hello, \<name>!”_. Your output should be exactly the same as below, including the prompt for the user input.

Expected output (**bold** is user input)
<pre>
Please enter your name below: 
<b>Malvika</b>
Hello, Malvika! 
</pre>

The file should be named as _helloYou.cpp_. Don’t forget to head over to the Homework 2 - Coderunner assignment on Canvas and paste your solution in the answer box! 


## **Question 3 (3 points): Almond Milk** <a name="question3"></a>
_Note: You've already written psuedocode of this problem in Homework 1: Question 1. Now, you just need to convert your algorithm to C++ code to solve this question._

While shopping over the weekend for almond milk, you discover that all the almond milk cartons have square bases and varying heights. Write a program which takes user inputs for the side length of the square base of the carton in inches and the height of the carton in inches and outputs how many ounces a carton holds. You can use the following formula to convert cubic inches to ounces:

```
ounces = 0.55 * cubic inches
```

Notes on rounding: 
1. You should calculate cubic inches from the cartons dimensions before calculating ounces or you may run into rounding errors. 
2. You should use `double` variable types for this question. If you use `float` variable types you may get rounding errors. 


The output should be the volume of the carton in ounces formatted with one-digit precision as shown below. You can use the setprecision() function with the fixed manipulator from the \<iomanip\> library to do so.

**--- Sample run ---:** <br/>
```
What is the side length of the base of the carton in inches? 
2 
What is the height of the carton in inches? 
4 
The carton has a volume of 8.8 ounces.
```
The file should be named as _almondMilk.cpp_. Don’t forget to head over to the Homework 2 - Coderunner assignment on Canvas and paste your solution in the answer box! 
    
## **Question 4 (5 points): Snowfall** <a name="question4"></a>
_Note: You've already written psuedocode of this problem in Homework 1: Question 2. You just need to convert it to C++ code to solve this question._

You’re planning a ski trip for later this semester! You want to know how much snow each Colorado resort will have by that time.

Write a program to estimate the number of inches of snow Breckenridge, Vail, and Copper Mountain will have after a certain number of days (`X`) and display the output. `X` will be taken as a user input. Currently, there are 25 inches in Breckenridge, 28 inches at Vail, and 40 at Copper Mountain.

The resorts have provided us with the snowfall and melt rate predictions per day (mentioned below) to come up with an accurate estimation. Assume these rates stay the same for all future days. **The rates do not depend on the current number of inches at each resort.**

**Hint: You will never end up with a negative snow depth.**

| **Resort**      | **Snowfall rate (inches/day)** | **Melt rate (inches/day)** |
| --------------- | ------------------------------ | -------------------------- |
| Breckenridge    | 10                             | 5                          |
| Vail            | 14                             | 2                          |
| Copper Mountain | 5                              | 3                          |
 
**--- Sample run ---:** <br/>
```
How many days in the future would you like a prediction for?
5
Breckenridge will have 50 inches, Vail will have 88 inches, and Copper Mountain will have 50 inches.
```
The file should be named as _snowfall.cpp_. Don’t forget to head over to the Homework 2 - Coderunner assignment on Canvas and paste your solution in the answer box! 

## **Question 5 (6 points): Convert video game currency** <a name="question5"></a>

In your favorite open world adventure video game, currency conversion is as given below:
| | |
|-|-|
| 1 Gold coin | 23 Bolts |
| 1 Gem | 13 Gold coins |

Write a program that takes a number of Bolts as user input (as an integer) and converts it to the number of whole Gems, Gold coins, and Bolts as shown below. The conversion information between these measurement metrics is provided in the table above. The number of Bolts should be converted in such a way that maximizes the whole number of Gems and Gold coins.


Expected output 1 (**bold** is user input) 
<pre>
Enter the number of Bolts:
<b>32</b>
0 Gems(s) 1 Gold coin(s) 9 Bolt(s)
</pre>

Expected output 2 (**bold** is user input) 
<pre>
Enter the number of Bolts:
<b>3000</b>
10 Gem(s) 0 Gold coin(s) 10 Bolt(s)
</pre>



The file should be named as _convertCurrency.cpp_. Don’t forget to head over to Coderunner on Canvas and paste your solution in the answer box!


## **Question 6 (3 points): Calculating the sigmoid** <a name="question6"></a>

The sigmoid function takes an input x of any real number and returns an output value in the range of -1 and 1. Write a program that takes a real number x as the input (x is of type double) and computes its sigmoid value.  The sigmoid can be computed using the equation below.


<!-- ![Formula](images/formula.png) -->
<img src="images/formula.png" width="190" height="80" />

For e<sup>z</sup> use the function exp(), which is available in `#include <cmath>`.

Expected output 1 (**bold** is user input)
<pre>Enter a value for x:
<b>1</b>
The sigmoid for x=1 is 0.731059
</pre>

Expected output 2 (**bold** is user input) 
<pre>
Enter a value for x:
<b>10</b>
The sigmoid for x=10 is 0.999955
</pre>

The file should be named as _calcSigmoid.cpp_. Don’t forget to head over to Coderunner on Canvas and paste your solution in the answer box!


# Submission Instructions <a name="submissions"></a>

* **C++ files**. All files should be named as specified in each question, and they should compile and run on VSCode to earn full points. TAs will be grading the style of your code and comments. Please see the coding style under the [background](#background) section. At the top of each file, write your name with the following format:</br>
```cpp
// CSCI 1300 Spring 2023
// Author: Punith Sandhu
// Recitation: 123 – TA name
// Homework 2 - Problem # …
```
Example submission:
```cpp
// example_1.cpp

// CSCI 1300 Spring 2023
// Author: Punith Sandhu
// Recitation: 123 – TA name
// Homework 2 - Problem # ...

#include <iostream>

using namespace std;

int main() 
{
    int num = 10;
    cout << num << endl;

    return 0;
}
```
When you are finished with all the questions, zip all files. Submit the zip file under the assignment Homework 2 on Canvas.


# Overview  <a name="overview"></a>
## Checklist <a name="checklist"></a>
Here is a checklist for submitting the assignment:
1. Use your solutions in VS Code to complete the **Homework 2 - Coderunner** assignment on Canvas (Modules → Week 3). 
    * Remember that submitting **Homework 2 - Coderunner** (Start Early) by Wednesday, September 7 at 11:59pm will give extra credit! That assignment is the first two questions of **Homework 2 - Coderunner**.
2. Submit one zip file to the **Homework 2** assignment on Canvas. The zip file should be named, **hmwk2_lastname.zip**. It should have the following 6 files: 
    * helloWorld.cpp 
    * helloYou.cpp
    * almondMilk.cpp
    * snowfall.cpp
    * convertCurrency.cpp
    * calcSigmoid.cpp


## Grading Rubric <a name="grading"></a>

| **Criteria**                                | Points |
| ------------------------------------------- | ------ |
| Question 1                  | 1     |
| Question 2                  | 2     |
| Question 3                  | 3     |
| Question 4                  | 5     |
| Question 5                  | 6     |
| Question 6                  | 3     |
| C++ files zip submission (compiles and runs, style and comments)| 5 |
| Recitation attendance (Week 3, Jan 30th)*             | -6    |
| Total                                       | 25     |
| Extra Credit - Start early                | 2     |

* If your attendance is not recorded you will lose points. Make sure your attendance is recorded on Canvas.
