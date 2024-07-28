// Write a program to enter any number and find cube of it using Inline function.

#include <iostream>
#include <conio.h>  // for getch()

using namespace std;
// Inline function to calculate cube of a number
inline int calculateCube(int num)
{
    return num * num * num;
}

int main()
{
    // Clear the screen

    int number, cube;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the inline function to calculate cube
    cube = calculateCube(number);

    // Output the calculated cube
    cout << "Cube of " << number << " is: " << cube << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    return 0;  // Wait for a key press
}