// Write a C++ program that use of while statement.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
	clrscr();  // Clear the screen
    int i = 1;

    while (i <= 10) {
        cout << i << "\n";
        i++;
    }
	cout << "\nPress any key to exit..."; // Prompt the user to press any key to exit
    getch(); // Wait for a key press
    return 0;
}