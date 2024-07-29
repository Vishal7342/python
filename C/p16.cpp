// Write a program to enter any two numbers and get addition using Inline function.

#include <iostream.h>
#include <conio.h>  // for getch()

// Inline function to perform addition
inline int addNumbers(int a, int b)
{
    return a + b;
}

void main()
{
    clrscr();  // Clear the screen

    int num1, num2, result;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Call the inline function to add the numbers
    result = addNumbers(num1, num2);

    // Output the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}