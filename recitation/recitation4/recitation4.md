#### **CSCI 1300 CS1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 4 - week of February 13th, 2022**

# Table of contents
- [Table of contents](#table-of-contents)
- [Loops <a name="loops"></a>](#loops-)
- [Exercises <a name="exercises"></a>](#exercises-)
    - [1. Converting For Loops Into While Loops <a name="loop-conversion"></a>](#1-converting-for-loops-into-while-loops-)
    - [2. Converting Lowercase Letters To Uppercase <a name="lower-to-upper"></a>](#2-converting-lowercase-letters-to-uppercase-)
    - [3. Spot the errors <a name="spot"></a>](#3-spot-the-errors-)
    - [4. Adding Spaces Between Every Letter <a name="letter-spacing"></a>](#4-adding-spaces-between-every-letter-)
- [Deliverables for Recitation <a name="deliverables"></a>](#deliverables-for-recitation-)

# Loops <a name="loops"></a>
Last week in lecture we learned about using loops: `while`, `do while` and `for` loops. Let's get some practice in with them today. 

# Exercises <a name="exercises"></a>

### 1. Converting For Loops Into While Loops <a name="loop-conversion"></a>

Convert the following ```for``` loop into into a ```while``` loop.

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    for(int i=0; i < x; i++)
    {
        sum -= x;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
```

### 2. Converting Lowercase Letters To Uppercase <a name="lower-to-upper"></a>

The program should ask the user to input a string and convert any lowercase letters in the string to uppercase letters. The program should then print the newly converted string to the terminal.

Example output (**bold** is user input)
<pre><code>Please enter a string:
<b>Welcome to CSCI 1300!</b>
WELCOME TO CSCI 1300!
</code></pre>

The ASCII table shown below can be used as a reference on the mapping between characters (char) and integers. For now we'll only be using the Decimal and Char columns (you can ignore the Hex column) and concern ourselves with mapping only letters. Let's test this out and go through an example. We'll begin by finding the value of the character ```a```. If we head over to the table below and find the ```a``` char, we'll see that its decimal value is 97. In code, we can get the integer value for the ```a``` char by using: ```int('a')```. 

```
a = 97
```

We can find the decimal value for capital ```A``` (using ```int("A")```) which would give us the value:
```
A = 65
```

Note that the difference in value between a lowercase character and its uppercase counterpart is 32. How can we implement that into our program to make the appropriate conversions? 

<img src="images/ascii_table.png" width=125%>

**2a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b**. Let’s draw a flowchart of the solution.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


**2c**. Imagine how a sample run of your program would look like. Think about at least two examples.

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


**2d**. Identify the values that you **must** test for. We call these values "boundary conditions".

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

### 3. Spot the errors <a name="spot"></a>
Let's try to spot some common errors and work through these exercises interactively via the Recitation 4 Coderunner on [Canvas](https://canvas.colorado.edu/courses/89853/assignments/1609365). 

a.    
```cpp
#include iostream
using namespace std;

int main();
{
    int x = 10;
    int sum = 0; 
    while(x >= 10) 
    {
        sum += x;
        x--;
    }
    cot << "Sum = " << sum << endl;
    return 0
}
```

b.   
```cpp
#include <iostream>
using space std;

int main()
{
    int x = 10
    int sum = 0
    for(int i=0; i=x; i++);
    {
        sum += x;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
```

c.    
```cpp
#include <iostream>
using namespace std;

int main();
{
    int x = 10;
    int y = 5;
    int sum = 0;
    do; 
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
        x++;
        y++;
    } while sum <= 20
    return 0;
}
```
    
d.    
```cpp
#include iostream
namespace std

int main()
{
    int x = 10;
    int y = 5;
    int sum = 0;
    while(sum <= 20);
    {
        sum = x + y;
        cout << "Sum = " << sum << endl;
        x++;
        y++;
    }
    return 0;
} 
```

e.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int sum = 0;
    for(i=0; i < x; i++)
    {
        sum += x
    }
    out << "Sum = " + sum << endl;
    return 0;
}
```

f.    
```cpp
#include istream
using namespace std

int main()
{
    int x = 10;
    int sum = -40;
    int i;
    fore(i=0; i < x; i)
    <
        sum += x;
    >
    cout << "Sum = " << sum << end_l
    return 0;
}
```

### 4. Adding Spaces Between Every Letter <a name="letter-spacing"></a>

Let's create a program that takes a string as user input and prints out the string with a space between every character. The resulting string will keep all characters from the original input. **Note**, it's okay if there is a space printed after the final character. In the example shown below, the entire string would be 12 characters long (the trailing space is not visible).

Example output (**bold** is user input)
<pre><code>Please enter a string:
<b>banana</b>
b a n a n a
</code></pre>

**Challenge**: What could we add to our code to eliminate the trailing space from being added so that we only have spaces between the individual characters in the string inputs? Consider the same example above, now we should only get a string that is 11 characters long with this change.

**4a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**4b**. Let’s draw a flowchart of the solution.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


**4c**. Imagine how a sample run of your program would look like. Think about at least two examples.

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


**4d**. Identify the values that you **must** test for. We call these values "boundary conditions".

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**4e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.


# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 4 assignment on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/308729).