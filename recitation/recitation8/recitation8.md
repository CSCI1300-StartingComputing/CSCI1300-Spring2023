#### **CSCI 1300 CSC1: Starting Computing**
#### **Godley/Hoefer - Spring 2023**
#### **Recitation 8 - Week of March 13th, 2023**

# Table of contents
1. [Classes](#classes)
2. [Exercises](#exercises)
   1. [Question 1 - A 2D Point Class](#point)
   2. [Question 2 - Spot the Errors](#spot)
   3. [Question 3 - A 2D Circle Class](#circle)
3. [Deliverables](#deliverables)

# Classes <a name="classes"></a>
This week in lecture we’re learning about classes and objects. Classes are a powerful tool because they allow us to aggregate and reuse collections of various data types and methods.

# Exercises <a name="exercises"></a>

### 1. **The `Point2D` Class**. <a name="point"></a>

Let’s design a class to represent a point in the 2D plane. Organize the class contents into `Point2D.h` and `Point2D.cpp` files.

The `Point2D` class will have the following attributes and methods:

**Data Members (Private)**:
|Name | Data Type | Description |
| ------- | ---------- |------------------------ |
| `x` | `double` | The x coordinate of the 2D point |
| `y` | `double` | The y coordinate of the 2D point |
| `label` | `string` | A label given to the point |

**Member Functions (Public)**:
|Name | Description |
| ------- |------------------------ |
| `Default Constructor` | Set `x` and `y` to 0.0 and `label` to empty string. |
| `Parameterized Constructor` | Set the values of `x`, `y`, and `label` as provided to the constructor. `label` should have a default value of an empty string. |
|  |  |
| `double getX()` | Returns the value of `x` data member as a double |
| `double getY()` | Returns the value of `y` data member as a double |
| `string getLabel()` | Returns the value of `label` data member as a string |
| `void setX(double)` | Updates the value of `x` data member to function parameter |
| `void setY(double)` | Updates the value of `y` data member to function parameter |
| `void setLabel(string)` | Updates the value of `label` data member to function parameter |
| `void print()` | Formats and prints the contents of the Point2D object in the following format: `label: (x,y)` <br/> If the label string is empty, then simply print the coordinates in the following format: `(x,y)` <br/> For example, an object with `x = 2`, `y = 3.5` and `label = "A"` will print the following string: `A: (2,3.5)` |
| `double distance(Point2D)` | Computes the Euclidean distance between the current object and the `Point2D` object passed as an argument, then returns the result as a double. <br/> The Euclidean distance between two 2D coordinates (x1, y1) and (x2, y2) is computed as follows: <br/> `sqrt((x1 - x2)^2 + (y1 - y2)^2)` <br> *For an extra challenge,* set the default parameter value to be the point at the origin, `(0,0)`|

-----------------------------------

**Sample `main()`:** <a name="sample main"></a>
```cpp
Point2D p; //calls the default constructor
p.print(); 

Point2D q(3, 4, "Q");
q.print();

Point2D r(-10, 4); //uses the parameterized constructor
r.print();
r.setLabel("R"); //can also use setters to update data members
r.print();

cout << "q.distance(): " << q.distance() << endl;
cout << "r.distance(q): " << r.distance(q) << endl;
``` 

**Expected Output:**
```
(0.0,0.0)
Q: (3.0,4.0)
(-10.0,4.0)
R: (-10.0,4.0)
q.distance(): 5
r.distance(q): 13
```

-----------------------------

**1a**. Imagine what a sample run of your program would look like. Think about at least two examples

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

**1b**. Develop your solution in C++ by implementing header and .cpp files. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values mentioned in the example output, and also test your code on sample test cases inclusive of boundary conditions.

-----------------------------

### 2. **Spot the Errors**. <a name="spot"></a>
Let's try to spot some common errors and work through these exercises interactively via the Recitation 8 Coderunner on [Canvas](https://canvas.colorado.edu/courses/89853/assignments/1609384).

**a)**
```cpp
class Rectangle
{
    private:
        int height;
        int width;

    public:
        rectangle(int h=0, int w)
        {
            height = h;
            width = w;
        }

        int getArea()
        {
            return height * width;
        }
};

```

**b)**
```cpp
#include <iostream>
#include <string>
using namespace std;

// This object can add two integers
class Adder
{
    private:
        int add(int first, int second)
        {
            return first + second;
        } 
}

int main()
{
    // ask user for 2 integers
    int first, second;
    cout << "Enter integers to add:" << endl;
    cin >> first >> second;

    // create the adder object
    Adder Adder;

    // add the integers
    cout << "The sum is " << adder.add(first, second) << endl;
    return 0;
}
```

**c)**
```cpp
class Square {
    private:
        int side;

    public:
        void Square(double x) {
            side = x;
        }

        int area() {
            return x * x;
        }
};
```


### 3. A `Circle2D` Class <a name="circle"></a>
Let’s design a class to represent a 2D circle as described below. Organize the class contents into `Circle2D.h` and `Circle2D.cpp` files.

The `Circle2D` class will have the following attributes and methods:

**Data Members (Private)**:
|Name | Data Type | Description |
| ------- | ---------- |------------------------ |
| `center` | `Point2D` | A `Point2D` object representing the center of the circle. |
| `radius` | `double` | The radius of the circle |

**Member Functions (Public)**:
|Name | Description |
| ------- |------------------------ |
| `Default Constructor` | Set `center` to the point at the orgin and `radius` to `1.0`. |
| `Parameterized Constructor` | Set the values of `center` and `radius` as provided to the constructor. |
|  |  |
| `Point2D getCenter()` | Returns the `Point2D` object at the center of the circle |
| `double getRadius()` | Returns the value of `radius` data member as a double |
| `void setCenter(Point2D)` | Updates the value of `center` data member to function parameter |
| `void setRadius(double)` | Updates the value of `radius` data member to function parameter **only if the parameter value is greater than or equal to 0**. Otherwise, `setRadius` should not change the value of the `radius` data member. |
| `void display()` | Prints the `center` and `radius` data members formatted as follows: <br/> `Center: (x,y)`<br/>`Radius: r`|
| `double area()` | Returns the area of the circle. For simplicity, assume `pi = 3.14`. <br/> `area = 3.14 * r^2`|
| `bool isPointOnCircle(Point2D)` | Returns `true` if the given point is on the edge of the circle and `false` otherwise. <br/> The equation of a circle is given by: <br/> `radius^2 = (x - center.x)^2 + (y - center.y)^2` |

-----------------------------------

**Sample `main()`:** <a name="Sample main()"></a>
```cpp
Circle2D c1; //calling the default constructor
c1.display();

//create a Point2D object that is passed to parameterized Circle2D constructor 
Circle2D c2(Point2D(1,1), 3); 
c2.display();

c2.setRadius(5);
c2.display();

c2.setCenter(Point2D(-1,3));
c2.display();

//calling some member functions below
Point2D p2 = c2.getCenter();
cout << p2.getX() << endl;
cout << p2.getY() << endl;

cout << c2.getRadius() << endl;
cout << c2.area() << endl;

Point2D p1(0,1,"R");

cout << c1.isPointOnCircle(p1) << endl; //passing an object to a member function

return 0;
``` 

**Expected Output:**
```
Center: (0,0)
Radius: 1
Center: (1,1)
Radius: 3
Center: (1,1)
Radius: 5
Center: (-1,3)
Radius: 5
-1
3
5
78.5
1
```

-----------------------------

**3a**. Imagine what a sample run of your program would look like. Think about at least two examples

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

**3b**. Develop your solution in C++ by implementing header and .cpp files. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values mentioned in the example output, and also test your code on sample test cases inclusive of boundary conditions.

-----------------------------

# Deliverables <a name="deliverables"></a>
Complete the Recitation 8 assignment on [Canvas](https://canvas.colorado.edu/courses/89853/quizzes/308715)
