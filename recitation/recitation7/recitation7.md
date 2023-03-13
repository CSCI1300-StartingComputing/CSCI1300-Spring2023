#### **CSCI 1300 CS1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 7 - week of March 6, 2023**

# Table of contents
1. [File Concatenation](#concat)
2. [Busiest Week Day](#busy)
3. [Spot the errors](#spot)
4. [Deliverables for Recitation](#deliverables) 

## 1. File Concatenation <a name="concat"></a>

**Motivating Example:**

The `cat` command (short for "concatenate") is one of the most frequently used commands in Linux and Mac operating systems. The `cat` command allows us to print concatenated contents of input files with the below command. It also allows us to combine copies of files, view contents of one or more files, and create new files.
```
cat file1.txt file2.txt
```

**Your task:**

Write a program that concatenates the contents of two files and stores it in an output file. The program should ask the user to enter input and output filenames.

If one of the input files cannot be opened, then print "Could not open file/files." If you can read files and concatenate them successfully, then print "Files concatenated successfully".

*Sample input files:*

[input1.txt](inputs/input1.txt) 
```
Lorem ipsum dolor sit amet, consectetur adipiscing elit. 
```
[input2.txt](inputs/input2.txt) 
```
Morbi nec felis pretium, elementum sem eu, tempor massa.
```
Example output
```
Enter the input filenames that you want to concatenate:
input1.txt
input2.txt
Enter the output filename:
output.txt
Files concatenated successfully
```
output.txt should have the following content:
```
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi nec felis pretium, elementum sem eu, tempor massa.
```

**1a)** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**1b)** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 3:**
<br/><br/>
<br/><br/>

**1c)** Identify the values that you must test for. We call these values **"boundary conditions"**.

-----------------------------
**Answer:**
<br/><br/>
<br/><br/>

**1d)** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>

## 2. Find the Busiest Day of the Week at the lab <a name="busy"></a>
You work at a lab at CU as a research assistant where you work with really expensive equipment. The staff can enter the lab using by swiping their buff cards. Card swipe data is generated weekly in the form of a text file. Using this text file, determine which day of the week the lab has the most traffic. 

**Notes:**
* Each line in the file is going to be of the format:
  * `dayOfWeek <space> employee1,employee2,..,lastEmployee` 
* Determine the amount of traffic simply by counting how many employees are logged entering the room. 
* The days of the week will be Monday-Friday, in chronological order 
* If there are multiple days with the most employees, pick the one which comes first in the file. 
* Every day will have at least one employee

*Sample input files:*

[card_swipes.txt](inputs/card_swipes.txt)
```
Monday Arjun,Sourav,Mike
Tuesday Sourav
Wednesday Arjun,Nick
Thursday Elizabeth,Michael,Arjun,Madhu
Friday Amatullah,Ani
```

Example output 
```cpp
Enter the filename: 
card_swipes.txt
Thursday is the busiest day of the week at the lab.
```

**2a)** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b)** Let's draw a flowchart of the solution.

-----------------------------
**Flowchart:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2c)** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 3:**
<br/><br/>
<br/><br/>

**3d.** Identify the values that you must test for. We call these values **"boundary conditions"**.

-----------------------------
**Answer:**
<br/><br/>
<br/><br/>

**2e)** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>

## 3. Spot the errors <a name="spot"></a>
Let's try to spot some common errors and work through these exercises interactively via the Recitation 7 Coderunner on [Canvas](https://canvas.colorado.edu/courses/89853/assignments/1609385).


**a)**

```cpp
//program to compute the sum of all elements in the array
#include <iostream>
using namespace std;
int main()
{
    int arr_length = 5;
    int numbers[arr_length] = {0, 4, 3, 5, 6};
    int sum = 0;

    for(int i = 0; i <= arr_length; i++){
        sum += numbers[arr_length]
    }
    return 0;
}
```

**b)**
```cpp
//program to get the full name of the user using strings
#include <iostream>
using namespace std;
int main()
{
    string full_name;
    cout << "Enter your first and last name: " << endl;
    cin >> full_name;
    cout << "Fullname: " << full_name << endl;
    return 0;
}
```

**c)**
```cpp
// program to read and print the first line of a text file
#include <iostream>
using namespace std;
int main()
{
     ifstream myFile;

	myFile.open("someFile.txt");

	string firstLine;
	if myFile.is_open(){
		//file is open
		getline(myFile, firstLine);
	}

	cout << firstLine << endl;
      return 0;
}
```

**d)**
```cpp
// program to write the user input into a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // get user input
    string user_input;
    cout << "Tell me what to put in a file: " << endl;
    cin >> user_input;

    //write to a file
    string file_name = "your_file.txt";
    ifstream file_handle(file_name);
    file_handle << user_input;
    file_handle.close();

    return 0;
}
```

**e)**
```cpp
//program to delete contents of a file
using namespace std;
#include <iostream>
#include <fstream>

int main()
{
    ofstream myFile;
    string delete= "someFile.txt";
	myFile.open(delete);
	myFile.close();
    if(remove(delete.c_str())==0) {
        cout<<"Success"<<endl;
    }
    else {
        cout<<"Fail"<<endl;
    }
      return 0;
}
```

# 4. Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 7 assignment on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/308730).