// Write a C++ program for reference variable.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
    clrscr(); // Clear the console screen
    int num = 10;   // Declare and initialize a variable num
    int &ref = num; // Declare and initialize a reference variable ref

    cout << "Value of num: " << num << endl;  // Output the value of num
    cout << "Value of ref: " << ref << endl;  // Output the value of ref

    // Change the value of num using the reference variable ref
    ref = 20;
    cout << "Value of num after changing using ref: " << num << endl; // Output the updated value of num
    getch(); // Wait for a key press
    return 0;
}