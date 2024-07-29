// WAP to get value from user and find out sum of those nos.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main() {
    clrscr(); // Clear the console screen

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    int num2;
    cin >> num2;

    // Calculate the sum of the two numbers
    int sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    // Prompt the user to press any key to exit
    cout << "Press any key to exit...";
    getch(); // Wait for a key press
}