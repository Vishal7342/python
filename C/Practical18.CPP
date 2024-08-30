// Write a C++ program for array initialization.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
	clrscr(); // Clear the console screen
    int numbers[5];
    cout << "Enter 5 numbers: " << endl;
    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    cout << "The numbers are: ";
    //  print array elements
    for (int n = 0; n < 5; ++n) {
        cout << numbers[n] << "  ";
    }
	cout << "\nPress any key to exit..."; // Prompt the user to press any key to exit
    getch();  // Wait for a key press
    return 0;
}