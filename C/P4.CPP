// WAP to find out cube of given no.

#include <iostream.h>
#include <conio.h>

void main() {
    clrscr(); // Clear the screen

    int number;
    cout << "Enter a number to find its cube: ";
    cin >> number;

    // Calculate cube
    int cube = number * number * number;

    // Display the cube
    cout << "The cube of " << number << " is: " << cube << endl;

    getch(); // Wait for a key press before closing the console
}