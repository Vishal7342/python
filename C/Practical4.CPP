// Write a C++ program using assignment operator.
#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main() {
    clrscr(); // Clear the console screen

    // Declare variables
    int num1, num2, result;

    // Prompt the user to enter two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform calculations using assignment operators
    result = num1 + num2; // Addition using +=
    cout << "Sum using +=: " << result << endl;

    result = num1 - num2; // Subtraction using -=
    cout << "Difference using -=: " << result << endl;

    result = num1 * num2; // Multiplication using *=
    cout << "Product using *=: " << result << endl;

    result = num1 / num2; // Division using /=
    cout << "Quotient using /=: " << result << endl;

    result = num1 % num2; // Modulus using %=
    cout << "Remainder using %=: " << result << endl;

    // Prompt the user to press any key to exit
    cout << "Press any key to exit...";
    getch(); // Wait for a key press
}