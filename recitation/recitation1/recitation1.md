#### **CSCI 1300 CS1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 1 - Week of January 23rd, 2023**

# Table of contents

1. [Algorithm and Pseudocode](#algorithm)
2. [Exercises](#exercises)
3. [Deliverables for Recitation](#canvas)

# Algorithm, Pseudocode, Common Errors <a name="algorithm"></a>
This week we’re learning about **algorithms** and **pseudocode**. An *algorithm* is a procedure to solve a problem; *pseudocode* is what we use to write down an algorithm.


| **Algorithm**                                                | **Pseudocode** |
| ----------------------------------------------------------- | ------- |
| An unambiguous specification of how to solve a problem.     | An informal high-level description of the operating principle of a computer program or other algorithm.|
| Helps to simplify and understand the problem.| A method of developing an algorithm.      |


Developers use pseudocode to plan out their real code, so there are no hard rules except that it needs to be easy to understand and easier to write than real code. See the Pseudocode Guide posted [here](https://github.com/CSCI1300-StartingComputing/CSCI1300-Spring2023/blob/main/homework/homework1/Pseudocode.md) for examples and tips on how to write pseudocode.

# Exercises <a name="exercises"></a>
1. Story Variables ([VELA project](http://csforall.sri.com/))
   1. Read the question below:
	<br/><br/>
	<img src="images/stories.png" width=200%>
   
     **Answer:**
      <br/><br/>
      <br/><br/>
      <br/><br/>
      <br/><br/>

   2. What is a variable?
      <br/>**Answer:**
      <br/><br/>
      <br/><br/>
      <br/><br/>
      <br/><br/>

   3. Fill out the following table about variables in these stories (try a couple of stories, then discuss as a group)

    | Story  | Describe a specific element or quantity in the story that is changing  | What would be a good, meaningful name for the variable  | What  are some of the *specific values* of the variable within the story?  |  How would you describe *all possible values* the variable might take? |
    |---|---|---|---|---|
    | ![story1](images/story1.png)  |   |   |   |   |
    | ![story2](images/story2.png)  |   |   |   |   |
    | ![story3](images/story3.png)  |   |   |   |   |
    | ![story4](images/story4.png)  |   |   |   |   |
    | 5. Super Mario or another video game  |   |   |   |   |

<br/>
2. A day has 86,400 seconds (24⨉60⨉60). Given a number of seconds in the range of 0 to 1,000,000 seconds, your program should print the time as days, hours, minutes, and seconds for a 24 hour clock. For example, 70,000 seconds is 0 days, 19 hours, 26 minutes, and 40 seconds. Your program should accept user input for the number of seconds to convert and then use that number in your calculations. Format your output as follows: 

 `The time is W days, X hours, Y minutes, and Z seconds.`

Write an algorithm in pseudocode for the program above. Imagine how a sample run of your program would look like.
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

Try to think of at least two sample runs.

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

3. Write an algorithm in pseudocode for the following program. The program will start by asking the user to enter 10 characters. Letters ‘a’, ‘e’, ‘i’, ‘o’, ‘u’ in the English alphabet are vowels. The program should count and display the total number of vowels among the 10 characters entered by the user. For example, if the user entered *ILoveSadie*, then the program should display:

`You entered 6 vowels`

**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

4. Spot the errors

a.
```cpp
#include <iostream> 
using namespace std;
						
int Main()
{
	cout << "Hello, World!" << endl;
	return 0; 
}
```

b.
```cpp
#include <iostream> 
using namespace std;
						
int main 
{
	cout << "Hello, World!" << endl;
	return 0; 
}
```
c.
```cpp
#include <iostream> 
using namespace std;
						
int main() 
{
	cout << "Hello, World! << endl;
	return 0; 
} 
```

d.
```cpp
#include <IOstream> 
using namespace std;
						
int main() 
{
	cout << "Hello, World!" << endl
	return 0; 
} 
```

e.
```cpp
#include <iostream> 
using namespace;
						
int main() 
{
	cout << "Hello, World!" < endl; 
}
```

# Deliverables for Recitation<a name="canvas"></a>

Complete the quiz on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/307997)
