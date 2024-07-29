// WAP to find out addition using UDF.

#include <iostream.h>
#include <conio.h>  // for getch()

// User-Defined Function (UDF) to perform addition of two numbers
int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

void main()
{
    clrscr();  // Clear the screen

    int a, b;
    int sum;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Call the user-defined function to add the numbers
    sum = addNumbers(a, b);

    // Output the result
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}