**Calculator Program in C**

TASK 1: Basic – Calculator Program
Write a C program to perform basic arithmetic operations (Addition, Subtraction, Multiplication, and Division) using a switch-case statement.

Description
This project is a simple calculator program developed in C. It allows users to perform basic arithmetic operations on two numbers. The user selects the desired operation from a menu, and the program calculates and displays the result.

Features
* Addition of two numbers
* Subtraction of two numbers
* Multiplication of two numbers
* Division of two numbers
* Menu-driven interface using switch-case
* Division-by-zero error handling

Technologies Used
* C Programming Language
* GCC Compiler
* Visual Studio Code

Program Workflow
1. Enter the first number.
2. Enter the second number.
3. Select an arithmetic operation:

    1 = Addition
    2 = Subtraction
    3 = Multiplication
    4 = Division
4. The program performs the selected operation using a switch-case statement.
5. The result is displayed on the screen.

Code Explanation

Switch-Case Operations
* Case 1: Performs Addition
* Case 2: Performs Subtraction
* Case 3: Performs Multiplication
* Case 4: Performs Division
* Default: Displays an error message for invalid choices

Error Handling
Before performing division, the program checks whether the second number is zero. If it is zero, an error message is displayed to prevent division by zero.

Sample Output
Enter the first number:
10
Enter the second number:
5

Select operation
1. Addition
2. Subtraction
3. Multiplication
4. Division

Enter your choice (1-4):
3
Result = 50.000000

How to Compile and Run
Compile
gcc calculator.c -o calculator

Run
./calculator

Learning Outcomes

* Understanding switch-case statements
* Working with user input and output
* Performing arithmetic operations in C
* Basic error handling techniques
* Improving problem-solving skills

 Author

**Shreya Mangalaram**

CodeAlpha Internship - C Programming
