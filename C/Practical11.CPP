// Write a C++ program of example of the if/else statements. 

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
	clrscr(); // Clear the console screen
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "It is even number" << endl;
    } else {
        cout << "It is odd number" << endl;
    }
    cout << "Press any key to exit..."; // Prompt the user to press any key to exit
    getch(); // Wait for a key press
    return 0;
}