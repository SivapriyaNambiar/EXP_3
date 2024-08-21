# EXPERIMENT 3 To study and implement operators in C++ : -

### DIFFERENT TYPES OF OPERATORS
There are different types of operations used in C++ to perform different actions.
An operator is a symbol that operates on a value to perform specific mathematical or logical computations. They form the foundation of any programming language. In C++, we have built-in operators to provide the required functionality.
An operator operates the operands.
For example, 
int c = a + b;
Here, ‘+’ is the addition operator. ‘a’ and ‘b’ are the operands that are being ‘added’.



#### Operators in C++ can be classified into 6 types:
1.	Arithmetic Operators
2.	Relational Operators
3.	Logical Operators
4.	Bitwise Operators
5.	Assignment Operators
6.	Ternary or Conditional Operators



#### 1.	Arithmetic Operations: -
Arithmetic Operators in C++ are used to perform arithmetic or mathematical operations on the operands. For example, ‘+’ is used for addition, ‘–‘ is used for subtraction,  ‘*’ is used for multiplication, etc. In simple terms, arithmetic operators are used to perform arithmetic operations on variables and data; they follow the same relationship between an operator and an operand.

#### 2.	Comparison Operations: -

There are mainly 6 Comparison Operators namely:

1.	Greater than (>)  :  this operator checks whether 1 variable is greater than other variable 
2.	Greater than or equal to (>=)  :  this operator checks whether operand1 is greater than or equal to operand2. If the result turns out to be true, it returns true, or else returns false. example 5>=5 ->returns true
3.	Less than (<)  :  this operator checks whether operand1 is lesser than operand2. If the result turns out to be true, it returns true, or else returns false. example 3<5 ->returns true
4.	Less than or equal to (< =)  :  this operator checks whether operand1 is lesser than or equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5<=5 ->returns true
5.	Equal to (==)  :  this operator checks whether operand1 is equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5==5 ->returns true
6.	Not Equal to (! =)  :  this operator checks whether operand1 is not equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5!=3 ->returns true

Comparison Operators have only two return values, either true (1) or False (0).


#### 3.	Assignment Operators 

Assignment operators are used to assign values to variables.
For Example: -
Int x = 10;

Here we have assigned the variable x to the integer value 10.

In C++, the assignment operator forms the backbone of many algorithms and computational processes by performing a simple operation like assigning a value to a variable. It is denoted by equal sign ( = ) and provides one of the most basic operations in any programming language that is used to assign some value to the variables in C++ or in other words, it is used to store some kind of information.


## Code

~~~
/* 
EXPERIMENT 3- TYPES OF OPERATORS(ARITHEMATIC, LOGICAL, COMPARSION)
*/


#include<iostream>
using namespace std;

int main()
{
    int a,b;
    printf("Enter 2 variables: ");
    scanf("%d %d",&a, &b);
    int c = a+b;
    cout << "The addition of 2 numbers "<<c<<endl;
    int d = a-b;
    cout << "The subtraction of 2 numbers "<<d<<endl;
    int e = a*b;
    cout << "The multiplication of 2 numbers "<<e<<endl;
    float f = a/b;
    cout << "The division of 2 numbers "<<f<<endl;
    if(a==b)
    {
        cout << "The numbers are equal" << endl;
    }
    else if(a>b)
    {
        cout <<"The first number is greater than the second one "<< endl;
    }
    else
    {
        cout <<"The second number is greater than the first one" << endl;
    }
    float g = a%b;
    cout<< "The reminder of the numbers is: " <<g<<endl;
    long int k = a*a;
    cout<<"The square of the first number is: "<<k<<endl;
    for(int i = 0;i<2;i++)
    {
        if(a<b && a!=b)
        {
            b =- 10;
            a =+ 1;
        }
        else if(a>b || a==b)
        {
            a =-10;
            b += 1;
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }

}

/* OUTPUT


Enter 2 variables: 15
19
The addition of 2 numbers 34
The subtraction of 2 numbers -4
The multiplication of 2 numbers 285
The division of 2 numbers 0
The second number is greater than the first one
The reminder of the numbers is: 15
The square of the first number is: 225
1
-10
-10
-9


*/

~~~


## Output of the code: - 
![image](https://github.com/user-attachments/assets/d10cd8b1-2731-4a60-b299-ed9845f49f9c)
