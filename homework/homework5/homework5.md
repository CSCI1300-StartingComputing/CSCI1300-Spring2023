#### **CSCI 1300 CS1: Starting Computing: Homework 5**
#### **Godley/Hoefer - Spring 2023**
#### **Due: Friday, March 3rd by 6pm MST**
#### **(3 extra-credit points if Coderunner (Start Early) is completed by Wednesday March 1st by 11:59pm)**

<br/>

# Table of contents
1. [Objectives](#objectives)
2. [Background](#background)
3. [Testing Functions](#tests)
    1. [Void functions with printed output](#void)
    2. [Non-void functions returning bool or int](#non-void-bool-int)
    3. [Non-void functions returning double](#non-void-double)
    4. [Functions manipulating arrays](#test-function-array)
4. [Questions](#questions)
    1. [Question 1](#question1)
    2. [Question 2](#question2)
    3. [Question 3a](#question3a)
    4. [Question 3b](#question3b)
    5. [Question 4](#question4)
    6. [Question 5](#question5)
    7. [Extra Credit 1](#ec1)
5. [Submission Instructions](#submissions)
    1. [Checklist](#checklist)
    2. [Grading Rubric](#rubric)

# Objectives <a name="objectives"></a>

* Understand arrays.
* Be able to pass arrays to functions


# Background <a name="background"></a>
## Arrays
An array is a data structure which can store primitive data types like `double`, `int`, `char`, and `boolean`, and `string`.
Arrays have both a `type` and a `size`.

**How to declare arrays**
```cpp
// data_type array_name[declared_size];
bool my_booleans[10];
string my_strings[15];
int my_ints[7];
```

**How to initialize arrays (method 1)**

```cpp
bool my_booleans[4] = {true, false, true, true};
```
If you do not declare the size inside the square brackets, the array size will be set to however many entries you provide on the right.
```cpp
bool my_booleans[] = {true, false, true}; // size = 3
```
Note: the size specified in the brackets needs to match the number of elements you wrote in the curly brackets.

*Example 1*

When the specified size is larger than the actual number of elements, the elements provided in the curly brackets will be the first several elements in the array, while the additional elements will be filled with default values. **If it’s an integer/double array, the default values are zero, while if it’s a string array, the default values are empty strings.**

```cpp
#include <iostream>
using namespace std;
int main()
{
    int int_array[5] = {1,2,3};
    for (int i = 0; i < 5; i ++)
    {
        cout << int_array[i] << “ ”;
    }
}
```

Output:
```
1 2 3 0 0
```

*Example 2*

When the specified size is smaller than the actual number of elements, there will be a compilation error.

```cpp
#include <iostream>
using namespace std;
int main()
{
    int int_array[3] = {1,2,3,4,5};
}
```

Output:
```
error: excess elements in array initializer
int int_array[3] = {1,2,3,4,5};
                         ^
1 error generated.
```

* **How to Initialize Arrays (Method 2)**
You can also initialize elements one by one using a for loop:
```cpp
int my_ints[10];
for (int i = 0; i < 10; i++)
{
    my_ints[i] = i;
}
//{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
```
* **How to Access Elements in an Array**
We have essentially already had practice with accessing elements in an array, as in C++, string is an array of characters.
You can access elements in arrays using the same syntax you used for strings:
```cpp
string greetings[] = {"hello", "hi", "hey", "what’s up?"};
cout << greetings[3] << endl;
```
Output
```
what's up
```

Arrays can be iterated in the same way we iterated over strings last week. Below we are iterating through an array of strings:
```cpp
string greetings[] = {"hello", "hi", "hey", "what’s up?"};
int size = 4;
for (int i = 0; i < size; i++)
{
    cout << greetings[i] << endl;
}
```
Output:
```
hello
hi
hey
what's up?
```

### Passing arrays to functions
* **Passing By Value**
Up until now, when calling functions, we have always passed by value. When a parameter is passed in a function call, a new variable is declared and initialized to the value passed in the function call.

Observe that the variable `x` in main and variable `x` in addOne are separate variables in memory. When `addOne` is called with `x` on line 10, it is the value of `x` (i.e. 5) that is passed to the function. This value is used to initialize a new variable `x` that exists only in addOne's scope. Thus the value of the variable `x` in main's scope remains unchanged even after the function `addOne` has been called.

```cpp
void addOne(int x)
{
    x = x + 1;
    cout << x << endl;
}

int main()
{
    int x = 5;
    cout << x << endl;
    addOne(x);
    cout << x << endl;
}
```

Output:
```
5
6
5
```

* **Passing By Reference**
Arrays, on the other hand, are passed by reference (to the original array’s location in the computer’s memory). So, when an array is passed as a parameter, the original array is used by the function.
Observe that there is only one array `X` in memory for the following example. When the function `addOne` is called on line 10, a reference to the original array `X` is passed to `addOne`. Because the array `X` is passed by reference, any modifications done to `X` in `addOne` are done to the original array. These modifications persist and are visible even after the flow of control has exited the function and we return to main.

```cpp
void addOne(int X[])
{
   X[0] = X[0] + 1;
   cout << X[0] << endl;
}
int main()
{
    int X[4] = {1, 5, 3, 2};
    cout << X[0] << endl;
    addOne(X);
    cout << X[0] << endl;
}
```

Output:
```
1
2
2
```

When we pass a one-dimensional array as an argument to a function we also provide its length. For two-dimensional arrays, in addition to providing the length (or number of rows), we will also assume that we know the length of each of the subarrays (or the number of columns). A function taking a two-dimensional array with 10 columns as an argument then might look something like this:
```cpp
// The first square bracket "[]" represents the number of rows and the second square bracket "[10]" represents the number of columns.
void twoDimensionalFunction(int matrix[][10], int rows){ … }
```

### Multidimensional arrays
In C++ we can declare an array of arrays known as a multidimensional array. Multidimensional arrays store data in tabular form.
* **How to Declare Multidimensional arrays**
```cpp
// data_type array_name[dimension_1][dimension_2]....;
int my_ints[7][5];
bool my_booleans[10][15][12];
string my_strings[15][10];
```
* **How to Initialize Multidimensional  arrays  (Method 1)**
```cpp
int my_ints[2][2] = {1, 2, 3, 4};
```
The 2D array in this case will be filled from left to right from top to bottom.
```cpp
int my_ints[2][2] = {{1, 2}, {3, 4}}
```
You can also initialize a 2D array by explicitly separating the rows as shown above.

* **How to Initialize Multidimensional  arrays  (Method 2)**
You can also initialize elements using nested loops:
```cpp
int my_ints[2][2];
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        my_ints[i][j] = i + j;
    }
}
```
The above code will create the following 2D array {{0, 1}, {1, 2}}.

* **How to Access Elements in a Multidimensional array**

You can use  `my_ints[i][j]` to access the ith row and jth column of a 2D array

Multidimensional arrays can be iterated using nested loops as shown below:
```cpp
int my_ints[2][2] = {{0, 1}, {1, 2}};
int res = 0;
for(int i=0; i < 2; i++)
{
    for(int j=0; j < 2; j++)
    {
        res = res + my_ints[i][j];
    }
}
cout << “Result is “ << res;
```
Output:
```
Result is 4
```


# Testing functions <a name="tests"></a>

Every C++ program you write should include a main function that tests the function you wrote.
There will be 3 different types of test cases you should be expected to write depending on the return type of the function.
Listed below is how we expect you to test different types of functions. The process will be different for
if you are testing a `void` function, non-void functions that return an `int` or `bool`, and non-void functions
that return a `double`.

#### 1. Void Functions with printed output <a name="void"></a>

For **void** functions that have printed output (i.e. functions that use `cout` to print to the terminal), call the testing function in the main function. Your tests should include the expected output in comments.

See the sample code below:
```c++
void checkDiscount(double discount) 
{
    if (discount >= 50) 
    {
        cout << "Great discount!" << endl;
    } else 
    {
        cout << "Not a great discount." << endl;
    }
    return;
}
int main() 
{
    // test 1 for checkDiscount
    // expected output: "Great discount!"
    checkDiscount(82.7);

    // test 2 for checkDiscount
    // expected output: "Not a great discount."
    checkDiscount(22);

    return 0;
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


<br>


#### 2. Non-Void Functions returning bool or int <a name="non-void-bool-int"></a>

For **non-void** functions that return a **bool or int**, use an **assert statement**
from the **cassert** header (`#include <cassert>`) with a conditional expression.

Assert tests contain a conditional expression which will be true unless there is a bug in the program.
If the conditional expression evaluates to false, then your program will terminate and show an error message.

For the purpose of this project, functions that return a `bool` or `int` can be compared to a specific value using the equality operator `==`.

Your test will look something like this:

`assert(<function call> == <value to compare to>);`

* `<function call>` is where you will call the function you want to test with its function parameters.
* `<value to compare to>` is the value you expect the function to return.
* `==` is the equality operator, and it compares the equality of both sides of itself.

See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
int addInts(int num1, int num2)
{
    // add num1 and num2 before returning
    return num1 + num2;
}
// isDrivingAge returns true if the given age passed as a parameter is greater than 16,
// else it returns false.
bool isDrivingAge(int age)
{
    if (age >= 16)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    // test 1 for add_
    assert(addInts(5, 6) == 11);
    // test 2 for add_
    assert(addInts(10, 10) == 20);
    // test 3 for drivingAge
    assert(isDrivingAge(17) == true);
    // test 4 for drivingAge
    assert(isDrivingAge(14) == false);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>


#### 3. Non-Void Functions returning double <a name="non-void-double"></a>

For **non-void** functions that return a **double**, use an **assert statement**
    from the **cassert** header (`#include <cassert>`) with a conditional expression and include the following function in your program.
```c++
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
```
Because the `double` type holds so much precision, it will be hard to compare the equality of a function that returns a
double with another double value. To overcome this challenge, we can compare `double` values within a certain range
of precision or decimal places. The function above compares the equality of two values `a` and `b` up to two decimal places.
This function returns `true` if the values `a` and `b` are equal with each other up to two decimal places.

You will be expected to use this function in conjunction with `assert` statements to test functions that return
the type double.

Your test will look something like this:

`assert(doublesEqual(<function call>, <value to compare to>));`

 * `<function call>` is where you will call the function you want to test with its function parameters
 * `<value to compare to>` is the `double` value you expect the function to return.


See the sample code below:
```c++
#include <iostream>
#include <cassert>
using namespace std;
/**
 * doublesEqual will test if two doubles are equal to each other within two decimal places.
 */
bool doublesEqual(double a, double b, const double epsilon = 1e-2)
{
    double c = a - b;
    return c < epsilon && -c < epsilon;
}
/**
 * reciprocal returns the value of 1 divided by the number passed into the function.
 */
double reciprocal(int num)
{
    return 1.0 / num;
}
int main()
{
    // test 1 for reciprocal
    assert(doublesEqual(reciprocal(6), 0.16));
    // test 2 for reciprocal
    assert(doublesEqual(reciprocal(12), 0.083));
}
```
For test 1, `reciprocal(6)` is being called, and we expect the function to return the value `0.16`.
The return value of `reciprocal(6)` and `0.16` is passed in as parameters to the `doublesEquals` function,
which will then return `true` if these two values are equal or `false` if they are not.

_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._

<br>

#### 4. Functions manipulating arrays <a name="test-function-array"></a>

Functions which manipulate arrays passed as arguments can be tested by asserting on individual elements of the array after calling the function. This works even for `void` functions because arrays are passed by reference; even if the function doesn't return anything, the array in the function is the same array in memory as the one outside the scope of your function.

Note that if the array is an array of `double`, the `doublesEqual` function described [here](#non-void-double) should be used to assert on individual array elements.

See the sample code below:
```cpp
#include<iostream>
#include<cassert>
using namespace std;

/**
 * Add one to each element of the array.
 */
void addOneToArrayElements(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    // test 1 for addOneToArrayElements
    int test1_arr[3] = {1, 2, 3};
    addOneToArrayElements(test1Arr, 3);
    assert(test1_arr[0] == 2);
    assert(test1_arr[1] == 3);
    assert(test1_arr[2] == 4);

    // test 2 for addOneToArrayElements
    int test2_arr[3] = {8, 10};
    addOneToArrayElements(test2Arr, 2);
    assert(test2_arr[0] == 9);
    assert(test2_arr[1] == 11);
}
```
_* For the purpose of this test code snippet, algorithm comments were not included, but they are still expected in your C++ files._


<br>

# Questions <a name="questions"></a>

## Question 1 (3 points): Array Statistics <a name="question1"></a> <br>

Alice is trying to monitor how much time she spends studying per week. She is going through her logs, and wants to figure out which week she studied the least, her total time spent studying, and her average time spent studying per week. To help Alice work towards this goal, write three functions: **min()**, **total()**, and **average()**. All three functions take two parameters: **an array of doubles** and **the number of elements in the array**. Then, they make the following computations:
* min() - returns the minimum value in the array
* sum() - returns the sum of all the values in the array
* average() - returns the average of all the values in the array

You may assume that the array will be non-empty.

*Function specifications:*

Function 1: Finding the minimum hours studied

* **Name:** min()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's study hours per week
 	* arr_size `int`: The number of elements stored in the array
* **Return Value:** `double`: The minimum value in the array

Function 2: Computing the total hours studied

* **Name:** sum()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's study hours per week
 	* arr_size `int`: The number of elements stored in the array
* **Return Value:** `double`: The sum of all the values in the array

Function 3: Computing the median study hours

* **Name:** average()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* arr `double`: The input array containing Alice's study hours per week
 	* arr_size `int`: The number of elements stored in the array
* **Return Value:** `double`: The average of all the values in the array


**Sample run 1:**

Function Call
```cpp
double arr[] = {1.24, 5.68, 3.456}
int arr_size = 3;
cout << "Min: " << fixed << setprecision(3)<< min(arr, arr_size) << endl;
cout << "Sum: " << fixed << setprecision(3) << sum(arr, arr_size) << endl;
cout << "Avg: " << fixed << setprecision(3) << average(arr, arr_size) << endl;
```
Output
```
Min: 1.240
Sum: 10.376
Avg: 3.459
```
**Sample run 2:**

Function Call
```cpp
double arr[] = {0};
int arr_size = 1;
cout << "Min: " << fixed << setprecision(3)<< min(arr, arr_size) << endl;
cout << "Sum: " << fixed << setprecision(3) << sum(arr, arr_size) << endl;
cout << "Avg: " << fixed << setprecision(3) << average(arr, arr_size) << endl;
```
Output
```
Min: 0.000
Sum: 0.000
Avg: 0.000
```
Your file should be named arrayStats.cpp and should also include a main function that tests your new min(), sum() and average() functions. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **min(), sum() and average() functions** into the answer box for question 1.

## Question 2 (5 points): Splitting a String <a name="question2"></a>

When you're processing data, it’s useful to break up a text string into pieces using a delimiter. Write a function **split()** that takes a string, splits it at every occurrence of a delimiter, and then populates an array of strings with the split pieces, up to the provided maximum number of pieces.

*Function specifications:*

* **Name:** split()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* input_string `string`: The text string containing data separated by a delimiter
 	* separator `char`: The delimiter marking the location where the string should be split up
 	* arr `string array`: The array that will be used to store the input text string's individual string pieces
 	* arr_size `int`: The number of elements that can be stored in the array
* **Return Value:** `int`: The number of pieces the input text string was split into

**Note:**

* No input will have delimiters in the beginning or the end of the string. (Eg: ",apple, orange" OR "apple, orange,")
* No input will have multiple delimiters added consecutively. (Eg: "apple,,,orange,banana")
* If the delimiter character is not found, then the function returns 1 and the entire string is placed in the array as the first element.
* If the string is split into more pieces than the size of the array (the last parameter), then the function returns -1. The array should be filled with as many pieces of the split string as is possible.
* If an empty string is provided then return 0.

**Sample run 1:**

Function Call
```cpp
string testcase = "ABCDEFG";
char separator = ' ';
int arr_size = 3;
string arr[size];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, arr_size);
cout << "Function returned value: " << num_splits << endl;
cout << "arr[0]:"<< arr[0] << endl;
```
Output
```
Function returned value: 1
arr[0]: ABCDEFG
```

**Sample run 2:**

Function Call
```cpp
string testcase = "RST,UVW,XYZ";
char separator = ',';
int arr_size = 3;
string arr[size];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, arr_size);
cout << "Function returned value: " << num_splits << endl;
for (int i=0; i < size; i++){
  cout << "arr["<< i << "]:" << arr[i] << endl;
}
```
Output
```
Function returned value: 3
arr[0]:RST
arr[1]:UVW
arr[2]:XYZ
```

**Sample run 3:**

Function Call
```cpp
string testcase = "Bangkok,Berlin,Birmingham,Bogota,Busan,Baton Rouge,Beaumont,Boise,Budapest";
char separator = ',';
int arr_size = 5;
string arr[size];
// num_splits is the value returned by split
int num_splits = split(testcase, separator, arr, arr_size);
cout << "Function returned value: " << num_splits << endl;
for (int i=0; i < size; i++){
  cout << "arr["<< i << "]:" << arr[i] << endl;
}
```
Output
```
Function returned value: -1
arr[0]:Bangkok
arr[1]:Berlin
arr[2]:Birmingham
arr[3]:Bogota
arr[4]:Busan
```
Your file should be named splitString.cpp and should also include a main function that tests your split() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **split() function** into the answer box for question 2.


## Question 3a (2.5 points): Insert After <a name="question3a"></a>

Sam is making a list of his favorite Pokemon. However, he changes his mind a lot. Help Sam write a function **insertAfter()** that takes five parameters and inserts the name of a Pokemon **right after a specific index**.  

*Function specifications*

* **Name:** insertAfter()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* input_strings `string`: The array containing strings
 	* num_elements `int`: The number of elements that are *currently* stored in the array
 	* arr_size `int`: The number of elements that can be stored in the array
 	* index `int`: The location to insert a new string. Note that the new string should be inserted *after* this location.
 	* string_to_insert `string`: The new string to be inserted into the array
* **Return Value:** `bool`:
	* `true`: If the string is successfully inserted into the array
	* `false`:
		* If the array is full
		* If the index value exceeds the size of the array


**Sample run 1:**
Function Call
```cpp
int size = 5;
string input_strings[size] = {"pikachu", "meowth", "snorlax"};
int num_elements = 3;
int index = 2;
string string_to_insert = "clefairy";
// result contains the value returned by insertAfter
bool result = insertAfter(input_strings, num_elements, size, index, string_to_insert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i] << endl;
}
```
Output
```
Function returned value: 1
pikachu
meowth
snorlax
clefairy
```

**Sample run 2**
Function Call
```cpp
int size = 5;
string input_strings[size] = {"caterpie", "eevee"};
int num_elements = 2;
int index = 0;
string string_to_insert = "bulbasaur";
// result contains the value returned by insertAfter
bool result = insertAfter(input_strings, num_elements, size, index, string_to_insert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i] << endl;
}
```
Output
```
Function returned value: 1
caterpie
bulbasaur
eevee
```

**Sample run 3**
Function Call
```cpp
int size = 2;
string input_strings[size] = {"pichu", "ponyta"};
int num_elements = 2;
int index = 1;
string string_to_insert = "charizard";
// result contains the value returned by insertAfter
bool result = insertAfter(input_strings, num_elements, size, index, string_to_insert);
// print result
cout << "Function returned value: "<< result << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i] << endl;
}
```
Output
```
Function returned value: 0
pichu
ponyta
```

Your file should be named insertAfter.cpp and should also include a main function that tests your insertAfter() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **insertAfter() function** into the answer box for question 3a.


## Question 3b (3.5 points): Second Place <a name="question3b"></a>

Now, what if Sam wants to insert Eevee after Pikachu but he doesn't know where Pikachu is located in his list. Let's help him search for a Pokemon by its name and insert another Pokemon directly after it. Write a function **secondPlace()** that takes six parameters and inserts a new Pokemon into a list **right after another specified pokemon**. Once you find the specified Pokemon, use the **insertAfter()** function from the previous sub-question to add the new Pokemon. The function should return the new number of strings in the array.

**Note**
* The same Pokemon may appear in the list multiple times (Sam has a bad memory). Assume that Sam wants **every instance** of the Pokemon he is searching for to be followed by the Pokemon he is attempting to insert.
* If the array is already full or if the number of strings that are going to be added to the array plus the current number of strings exceeds the total size of the array, the array should remain unchanged.
* Assume all inputs are lowercase alphabets.


*Function specifications*

* **Name:** secondPlace()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
  * input_strings `string`: The array containing strings
  * string_to_insert `string`: the string to insert
  * string_to_find `string`: the string to find (target string)
  * num_elements `int`: The number of elements that are *currently* stored in the array
  * arr_size `int`: The number of elements that can be stored in the array
  * count `int`: The number of the target strings present in the array
* **Return Value:** `int`:
	* The number of elements in the array after the new strings are inserted into the array
	* The *original* number of elements in the array if the new pokemon cannot be inserted into the array


**Sample run 1:**
Function Call
```cpp
int size = 5;
string input_strings[size] = {"clefairy", "meowth", "snorlax"};
int num_elements = 3;
int count = 1;
string string_to_insert = "charizard";
string string_to_find = "meowth";
// updating num_elements with the updated value returned by secondPlace
num_elements = secondPlace(input_strings, string_to_insert, string_to_find, num_elements, size, count);
// print num_elements
cout << "Function returned value: " << num_elements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i] << endl;
}
```
Output
```
Function returned value: 4
clefairy
meowth
charizard
snorlax
```

**Sample run 2**
Function Call
```cpp
int size = 12;
string input_strings[size] = {"clefairy", "charizard", "pikachu", "clefairy" };
int num_elements = 4;
int count = 2;
string string_to_insert = "pichu"
string string_to_find = "clefairy"
// updating num_elements with the updated value returned by secondPlace
num_elements = secondPlace(input_strings, string_to_insert, string_to_find, num_elements, size, count);
// print num_elements
cout << "Function returned value: " << num_elements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i] << endl;
}
```
Output
```
Function returned value: 6
clefairy
pichu
charizard
pikachu
clefairy
pichu
```

**Sample run 3**
Function Call
```cpp
int size = 4;
string input_strings[size] = {"caterpie", "charizard", "pikachu", "ponyta"};
int num_elements = 4;
string string_to_insert = "pichu"
string string_to_find = "ponyta"
int count = 1;
// updating num_elements with the updated value returned by secondPlace
num_elements = secondPlace(input_strings, string_to_insert, string_to_find, num_elements, size, count);
// print num_elements
cout << "Function returned value: " << num_elements << endl;
// print array contents
for(int i = 0; i < size; i++)
{
    cout << input_strings[i];
}
```
Output
```
Function returned value: 4
caterpie
charizard
pikachu
ponyta
```

Your file should be named secondPlace.cpp and should also include a main function that tests your secondPlace() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **secondPlace() function** into the answer box for question 3b.


## Question 4 (3.5 points): Classroom Space <a name="question4"><a/>
The CU boulder registrar is trying to devise an algorithm to help visualize classroom seating. Right now, they are representing classrooms as two-dimensional arrays of zeros and ones. Each row represents a row of desks and each element represents a seat. A **1** indicates that the seat is filled and a **0** indicates that it is empty. You can assume there are only four seats per row. Help them assign seats to students on the waitlist by writing a function **fullClass()** that takes three parameters: the classroom array, number of rows, and number of students who wish to join the class. Assuming rows are filled from left to right and front to back, create a visualization of the classroom after all the new students have joined (see sample runs for expected output). Return the number of students remaining on the waitlist after the class has filled.

*Function specifications*

* **Name:** fullClass()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* classroom `bool`: The two-dimensional array of `4` columns classroom seating.
 	* rows `int`: The number of rows in the array
 	* waitlist `int`: The current number of students on the waitlist
* **Return Value:** remaining `int`: the number of students remaining on the waitlist after the class is filled
* The function should print a classroom visualization as described below
* The function should just print the remaining students if the number of rows is 0


**Sample run 1:**

Function call
```cpp
bool classroom[4][4] = {{0, 1, 1, 1},
			{0, 0, 0, 0},
			{1, 1, 0, 0},
			{0, 1, 0, 1}};
int waitlist = 6;
fullClass(classroom, 4, waitlist);
```
Output
```
1111
1111
1110
0101
Remaining Students: 0
```

**Sample run 2:**

Function call
```cpp
bool classroom[3][4] = {{0, 0, 0, 0},
			{1, 1, 1, 1},
			{0, 0, 0, 0}};
int waitlist = 9;
fullClass(classroom, 3, waitlist);
```
Output
```
1111
1111
1111
Remaining Students: 1
```

Your file should be named fullClass.cpp and should also include a main function that tests your fullClass() function. Once you have finished developing and testing your solution in VSCode you should head over to the CodeRunner on Canvas and paste only your **fullClass() function** into the answer box for question 4.

## Question 5 (2.5 points): Test Me!<a name="question5"><a/>
The function below, **zeroesToFives** takes an array of integers and changes any zeroes in the array to fives and returns the count of array elements that were updated. Write at least **ten** test cases using [assertions](#tests) for **zeroesToFives**. You should test at least three boundary/edge cases.
```cpp
int zeroesToFives(int arr[], int arr_size)
{
	int count = 0;
	//loops through input array
	for(int i = 0; i < arr_size; i++) 
	{ 
		if(arr[i] == 0) //if an element is zero, set it to five
		{ 
    			arr[i] = 5;
			count++;
		}
	}
	return count;
}
```
    
Your file should be named testMe.cpp and should include all of your tests. There is no CodeRunner for this question.

## Extra credit (2 points): Character Frequency <a name="ec1"></a>

Write a function called **charCount()** that takes a `string` as an argument.
Count the number of occurrences of each character in the string and print the characters and their counts in
alphabetical order (first uppercase and then lowercase) if they occur at least once in the string. Return the number of unique characters in the string (capital and lowercase are considered different).

*Function specifications*

* **Name:** charCount()
* **Parameters (Your function should accept these parameters IN THIS ORDER):**
 	* input_text `string`: The text string containing characters between `A` to `Z` and `a` to `z`
* **Return Value:** `int`: The number of unique letters in the input string
* The function should print the number of occurrences for every letter that appears at least once in the input string, beginning with capital letters.

**Hint**: Create an integer array (or multiple arrays) where each element represents the number of occurrences for every letter. Iterate over characters in the string, incrementing the appropriate count at each iteration.

**Sample run 1:**
Function call
```cpp
string text_input = "Colorado";
// num_chars will store the values returned by charCount
int num_chars = charCount(textInput);
cout << "Unique characters: " << num_chars << endl;
```

Output
```
C: 1
a: 1
d: 1
l: 1
o: 3
r: 1
Unique characters: 6
```

Your file should be named charCount.cpp and should also include a main function that tests your charCount() function. Once you have finished developing and testing your solution in VSCode you should head over to the Homework 5 - Extra-credit CodeRunner on Canvas and paste only your **charCount() function** into the answer box.



# Submission Instructions <a name="submissions"></a>

### Checklist <a name="checklist"></a>

Here is a checklist for submitting the assignment:

1.  **CodeRunner**. The correctness of your program will be graded by Coderunner. You can modify your code and re-submit (press “Check” again) as many times as you need to, until the assignment due date. Use the solutions you created in VSCode to complete the assignment **Homework 5 - CodeRunner** on Canvas (modules -> week 7)
    * Remember that submitting **Homework 5 - Coderunner(Start Early)** by Wednesday March 1st by 11:59pm will give extra credit! That assignment is the first 2 questions of **Homework 5 - Coderunner**.
    * Optionally, you may submit your answer to the extra credit question under the assignment **Homework 5 - CodeRunner (Extra Credit)**.
2.  **C++ files**. When you are finished with all the questions, zip all of your .cpp files together. Submit the single zip file under the assignment **"Homework 5"** on Canvas.
    * All files should be named as specified in each question, and they should compile and run on Coderunner (pass all test cases) and in VSCode to earn full points.
    * Our TAs will be grading the style of your code and comments. Please see the style guide on Canvas for more details.
    * At the top of each file, write your name in the format shown below.
    * Your C++ program for each question should also contain a main that tests the function you wrote, like below. **You should include at least 4 test cases for each function.** In general, we recommend you try to include as many test cases as you believe are necessary to ensure that your code works properly. Deciding on how many test cases to include is an important skill to learn, since the number of necessary test cases can change between programs. See [testing functions](#tests) for examples demonstrating testing arrays.
    * Please be sure to also include function headers that contain the algorithm implemented within the function, expressed in pseudocode. You can refer to the example below for more details.

    * **Style Example:**
![style example](images/style.jpg)


    * The zip file should be named, **hmwk5_lastname.zip**. It should have the following 6 files (7 if you do the extra-credit question):
		* arrayStats.cpp
		* splitString.cpp
		* insertAfter.cpp
		* secondPlace.cpp
		* fullClass.cpp
		* testMe.cpp
		* charCount.cpp (if you attempted the EC question)

### Grading Rubric <a name="rubric"></a>

| **Criteria**                                                | **Points** |
| ----------------------------------------------------------- | ------- |
| Question 1                                                  | 3       |
| Question 2                                                  | 5      	|
| Question 3a 						      | 2.5	|
| Question 3b                                                 | 3.5      |
| Question 4                                                  | 3.5      |
| Question 5                                                  | 2.5      |
| C++ file submission (compiles and runs, style and comments) | 5       |
| Recitation attendance (Week 7)*                             | -3      |
| Total                                                       | 20      |
| Extra credit: character frequency                           | +2 pt   |

**Note:** if your attendance is not recorded, you will lose points. Make sure your attendance is recorded on Canvas.
