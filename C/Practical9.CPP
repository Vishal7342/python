// Write a C++ program to state working of endl.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
    clrscr(); // Clear the console screen	
    cout << "Hello ";
    cout << "World!" << endl;  // This will output "world!" on a new line
    cout << "This is a demonstration of endl." << endl;
	// Prompt the user to press any key to exit
    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press
    return 0;
}