#### **CSCI 1300 CS1: Starting Computing: Homework 1**
#### **Godley/Hoefer - Spring 2023**
#### **Due: Friday, Jan 27th 2023 by 6:00pm MST**

<br/>

# Table of contents

1. [Objectives](#objectives)
2. [Algorithm and Pseudocode](#submit)
3. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2](#question2)
    3. [Question 3a](#question3a)
    4. [Question 3b](#question3b)
    5. [Question 4a](#question4a)
    6. [Question 4b](#question4a)
    7. [Question 5](#question5)
4. [Grading rubric](#grading)


# Objectives <a name="objectives"></a>

* Practice thinking like a computer scientist
* Practice writing pseudocode

# Algorithm and Pseudocode <a name="submit"></a>

In your algorithms, use indentation to show that a line in the algorithm is inside of a loop or a conditional.

For example:

```
if x equals y
    output(x)
```

The line output(x) only executes if x equals y is true. As a result, output(x) is indented under the if statement. In this case `output(x)` displays `x` to the user. In your pseudocode feel free to use `print(x)`, `display(x)`, or whatever seems intuitive to you.

Note:
1.	Please make sure that what you submit is not code in any language (cpp, python, etc). Merely produce pseudocode using algorithm rules.
2.	Examples of good pseudocode can be found [here](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2023/blob/main/homework/homework1/Pseudocode.md).

3.	Your work should be **typed**. Submit your assignment as a **PDF** to Homework 1 on Canvas.


# Questions <a name="questions"></a>

## Question 1: (3 points) <a name="question1"></a>
While shopping over the weekend for almond milk, you discover that all the almond milk cartons have square bases and varying heights. Write an algorithm which takes user inputs for the side length of the square base of the carton in inches and the height of the carton in inches and outputs how many ounces a carton holds. You can use the following formula to convert cubic inches to ounces:

```
ounces = 0.55 * cubic inches
```

Hint: you should calculate cubic inches from the carton's dimensions before calculating ounces.

**--- Sample run ---:** <br/>
```
What is the side length of the base of the carton in inches?
2
What is the height of the carton in inches?
4
The carton has a volume of 8.8 ounces.
```

## Question 2: (5 points) <a name="question2"></a>

You’re planning a ski trip for later this semester! You want to know how much snow each Colorado resort will have by that time.

Write an algorithm to estimate the number of inches of snow Breckenridge, Vail, and Copper Mountain will have after a certain number of days (`X`) and display the output. `X` will be taken as a user input. Currently, there are 25 inches in Breckenridge, 28 inches at Vail, and 40 at Copper Mountain.

The resorts have provided us with the snowfall and melt rate predictions per day (mentioned below) to come up with an accurate estimation. Assume these rates stay the same for all future days. **The rates do not depend on the current number of inches at each resort.**

**Hint: The calculated snow depth cannot be negative. If your algorithm outputs a negative number, return 0.**

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

## Question 3A: (6 points) <a name="question3a"></a>

Congrats! You work for Zillow now. Your first task is to write an algorithm that recommends apartments based on a user’s preferences.  Zillow offers the following three properties for rent:
1. Apartment A – 600 square feet, pets allowed, $1400/month
2. Apartment B – 800 square feet, no pets, $1600/month
3. Apartment C – 1000 square feet, pets allowed, $1800/month

Write an algorithm for a program that does the following: Prompt the user for the minimum square footage they will accept, how many pets they have, and the maximum price they’d pay per month, and then calculate and output the apartments that match their preferences. If there is no apartment that matches their preferences, print out "No matches, sorry!". Make sure the inputs are valid--negative square footages, prices, and pet numbers don’t make sense!

**--- Sample run ---:** <br/>
```
What is the minimum square footage you’d like?
800
How many pets do you have?
1
What is the maximum monthly rent you’d pay?
2000
You’d love Apartment C!
```
## Question 3B: (2 points) <a name="question3b"></a>
List at least four input scenarios to test your solution for 3a.

## Question 4A: (8 points) <a name="question4a"></a>

You’ve recently invested in cryptocurrency! Unfortunately, its value is tanking and decreasing in value at an annual rate of 65%, where losses are subtracted daily. You can calculate how much money you lose per day by

1. Converting your annual rate to a daily rate by dividing it by 365.
2. Multiply this daily rate with your current balance at the end of each day to get the money lost.
3. Subtract this value from your balance first thing the next day, a process called compounding.

You initially invest $15,000. On the first day of each month, you frantically withdraw $100. Write an algorithm that outputs how long it takes for you to lose half of what you initially invested. Assume each month has 30 days. Output should be in months and days (e.g. “3 months and 9 days”).

Hint: Create a table with money that is getting compounded and deposited and calculate by hand what happens in the first 5 months. Then use the pattern to help you figure out the algorithm. In this particular case it should take you `11 months and 1 day` to lose half your money.

## Question 4B: (3 points) <a name="question4b"></a>

Make changes to the above algorithm so that the user can input values for the annual loss rate, the amount of money initially invested, and the amount of money withdrawn monthly. Ensure all inputted values are greater than zero.


**--- Sample run ---:** <br/>
```
What is your initial investment?
1000
How many percentage points does the value decrease each year (annual rate)?
50
How much will you withdraw monthly?
100
It will take 3 months and 11 days for you to lose half of your investment.
```

## Question 5: (3 points) <a name="question5"></a>

Punith is a student in CSCI 1300 this semester. He’s writing a program that prints “Hello 1300!”, but it’s not working well. Describe two compile-time errors and one run-time error and how to fix them.

```cpp
#include <iostream>
using namespace std;

int main(){
    cout << "hello 1300" << enl
    return 0;
}
```

# Grading Rubric <a name="grading"></a>

| **Criteria**                                | Points |
| ------------------------------------------- | ------ |
| Question 1                                  | 3      |
| Question 2                                  | 5      |
| Question 3.A                                | 6      |
| Question 3.B                                | 2      |
| Question 4.A                                | 8      |
| Question 4.B                                | 3      |
| Question 5                                  | 3      |
| Recitation attendance (Week 2, Jan 23)* | -8      |
| Total                                       | 30     |

*If your attendance is not recorded, you will lose points. Make sure your attendance is recorded on Canvas.
