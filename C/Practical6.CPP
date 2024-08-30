// Write a C++ program to finding the size of a data type.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main() {
    clrscr(); // Clear the console screen

    // Find the size of a data type
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Press any key to exit..."; // Prompt the user to press any key to exit
    getch(); // Wait for a key press
}