#### **CSCI 1300 CS1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 3 -  the week of February 6th, 2023**

# Table of contents
1. [Conditionals](#conditionals)
2. [Practicum 1](#practicum)
3. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - Menu](#jukebox)
   3. [Question 3 - Hydration app](#app)
4. [Deliverables](#deliverables)

# Conditionals <a name="conditionals"></a>
Last week in lecture we learned about using conditional statements: if, if-else, nested if-else statements, and the switch  statement. This week in lecture we’re continuing to explore statements that control the flow of your program.

# Practicum 1 is coming <a name="practicum"></a>
Practicum 1 will take place on Monday February 13th. How do you plan to prepare for the Practicum? Let’s share some tips and ideas.

# Exercises <a name="exercises"></a>
### 1. **Spot the errors**. <a name="spot"></a>
Work through these exercises interactively via [CodeRunner](https://canvas.colorado.edu/courses/89853/assignments/1609371).

a.    
```cpp
// This program implements XOR
#include iostream
using namespace std;

//Set the variable value to 1 when x or y is 1
int main()
{				
    int x = 1,y=0,value;
    
    if (x == 1)
    { 
        if(y==0)
        value = 1; 

        else
        y == 0; 
     
    if(x==0)
    { 
        if(y==0)
        value = 0; 

        else
        value = 1;
    }
    
    cout < value < endl;
    return 0;
}
```

b.   
```cpp
#include <iostream>
using namespace std;

int main()
{
    int angle =40;
    if (x<90) { 
        cout<<"It is an acute angle." ;
    }
    elif(x=90) {
        cout<<"It is a right angle.";
    }
    else{
        cout<<"It is an obtuse angle.";
    }
}
```

c.    
```cpp
// This checks if a number between 0 and 5 is odd or not
using namespace std;

int main()
{
    char digit = '5';
    switch (digit) {
    case 0:
	cout << "It's even!" << endl;
	break;
    case 1:
	cout << "It's odd!"  << endl;
	break;
    case 2:
	cout << "It's even!" << endl;
	break;
    case 3:
	cout << "It's odd!"  << endl;
	break;
    case'4':
	cout << "It's even!" << endl;
	break;
    case 5:
	cout <<  It's odd!   << endl;
	break;
    }

return 0;
}
```
    
d.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    x,y = 0;

    if (x && y > 0)
    {
	if (x > pow(y, sqrt(4)) { 
	    y = y + x; 
	}
	else (x <= pow(y, sqrt(4))) {
	    y = x - y; 
	}
	else {
	    y = 0;
	}
    }
    
    cout << y << endl
} 
```

<br>

### 2. Jukebox example: Using switch case to handle user choice. <a name="jukebox"></a>
  
  You’re trying to play something on a Jukebox after class and it shows you the following options: 
  
         1. As It Was by Harry Styles 
         2. I Ain't Worried by OneRepublic
         3. Pink Venon by BlackPink
         4. Vegas by Doja Cat
         5. About Damn Time by Lizzo
         6. Light Switch by Charlie Puth

If you want to play As It Was by Harry Styles, you would press 1, if Vegas by Doja Cat, press 4 and so on. When you do, it will display a message like this 

```You selected As It Was by Harry Styles!```

Example output (The * next to a line indicates user input)

 ```
    The following are your options in the jukebox:
         1. As It Was by Harry Styles 
         2. I Ain't Worried by OneRepublic
         3. Pink Venon by BlackPink
         4. Vegas by Doja Cat
         5. About Damn Time by Lizzo
         6. Light Switch by Charlie Puth
    Please choose an item
  * 1
    You selected As It Was by Harry Styles!
```

  **2a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **2b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **2c**. Imagine what a sample run of your program would look like. Think of at least two examples.

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


  **2d**. Identify the values that you **must** test for. We call these values “boundary conditions”.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **2e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

### 3. Hydration app  <a name="app"></a>

  Your goal is to drink half a gallon or 64 fl oz every day but you aren’t great at remembering to do it! So you decide to create a hydration app that tracks your water intake every day and will alert you based on how much you drank for the day.
  The program first asks how much water you drank for the day, which is in fl oz and then displays a message based on whether you have hit your goal for the day.
  Next, it will also tell you how much water you have left to drink. 
  
  The following are the possible messages you will get based on your intake:<br/>
  
   1. If you’re drinking 32 fl oz or less, then you get
    
 ```
    "You’re very, very dehydrated! Get that water in! You have X fl oz left to drink."  
 ```
   2. If you’re drinking more than 32 fl oz but less than 64 fl oz, then you get
    
 ``` 
    “You’re doing great, but you’re still halfway to your goal! Get that water in! You have X fl oz left to drink”
 ```
   3. If you’re drinking 64 fl oz or more, then you get<br/>
 ```
    “You’ve hit your goal for the day! Great job getting hydrated!” 
 ```     
        
 
 Note that **X** is the amount of water left after subtracting your intake.  
 
  Example output ( **bold** indicates user input)
<pre><code>
    How much water did you drink today?(in fl oz)
   <b>37</b>
    You’re doing great, but you’re still halfway to your goal! Get that water in! You have 27 fl oz left to drink.
</pre></code>
  **3a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **3b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


  **3c**. Imagine what a sample run of your program would look like. Think of at least two examples.

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


  **3d**. Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **3e**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>



# Deliverables for Recitation <a name="deliverables"></a>
Complete the quiz on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/309352)
