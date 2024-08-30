// Write a C++ program to check whether the candidate’s age is greater than 17 or not. If yes, display message “Eligible for Voting” otherwise “Not Eligible for Voting”

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

int main() 
{
	clrscr(); // Clear the console screen
    int age;

    clrscr(); // Clear the console screen

    // Prompting user for input
    cout << "Enter candidate's age: ";
    cin >> age;

    // Checking eligibility for voting
    if (age > 17) {
        cout << "Eligible for Voting" << endl;
    } else {
        cout << "Not Eligible for Voting" << endl;
    }
    cout << "Press any key to exit..."; // Prompt the user to press any key to exit
    getch(); // Wait for a key press
    return 0;
}