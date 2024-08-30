// WAP to implement swap function using reference variable concept and swap two no. demonstrate the use of this function.

#include <iostream.h>
#include <conio.h>  // for getch()

// Function to swap two numbers using reference variables
void swapNumbers(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void main()
{
    clrscr();  // Clear the screen

    int a, b;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Output the original numbers
    cout << "\nOriginal numbers before swap:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    // Call the swap function to swap the numbers
    swapNumbers(a, b);

    // Output the swapped numbers
    cout << "\nNumbers after swap:" << endl;
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}