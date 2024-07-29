// Write a C++ program to define and use of global variables. 

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int a, b, c; // Global variable declaration

int main() {
	
	clrscr(); // Clear the console screen
   // Input values of a and b from the user
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    // Calculate the sum of a and b
    c = a + b;
    // Output the sum of a and b
    cout << "Sum of a and b is: " << c;
	// Prompt the user to press any key to exit
    cout << "\nPress any key to exit...";
	getch(); // Wait for a key press
	return 0;
}