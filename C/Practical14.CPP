// Write a C++ program to show use of switch with char case.

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main()
{
    clrscr(); // Clear the console screen
    char grade;
    // Prompting user for input
    cout << "Enter your grade (O,A, B, C, D, F): ";
    cin >> grade;
    // Using switch statement to determine the message based on the grade
    switch (grade)
    {
		case 'O':
        case 'o':
            cout << "Outstanding! You have scored very well." << endl;
            break;
        case 'A':
        case 'a':
            cout << "Excellent! You have scored well." << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job! You have done above average." << endl;
            break;
        case 'C':
        case 'c':
            cout << "You have achieved an average score." << endl;
            break;
        case 'D':
        case 'd':
            cout << "You need improvement. Work harder." << endl;
            break;
        case 'F':
        case 'f':
            cout << "Unfortunately, you have failed. Better luck next time." << endl;
            break;
        default:
            cout << "Invalid grade entered. Please enter O,A, B, C, D, or F." << endl;
    }

    getch(); // Wait for a key press
}