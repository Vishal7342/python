// Write a C++ program to display Hello and your name.

#include <iostream.h>  // Include the standard I/O library for input and output
#include <conio.h> // Include the header file for console input/output functions

void main() // The main function is where execution begins
{ 
    clrscr(); // Clear the console screen
    cout << "Enter your name: "; // Prompt the user to enter their name
    char name[100]; // Declare a character array to store the name
    cin >> name; // Read the user's input and store it in the 'name' array
    cout << "Hello, Good Morning, " << name << "!" << endl; // Display a greeting message with the user's name
    cout << "Press any key to exit...";  // Prompt the user to press any key to exit
    getch(); // Wait for a key press
}