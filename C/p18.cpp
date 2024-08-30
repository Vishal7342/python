// Write a program to enter any number and find cube of it using Inline function.

<<<<<<< HEAD
#include <iostream>
#include <conio.h>  // for getch()

using namespace std;
=======
#include <iostream.h>
#include <conio.h>  // for getch()

>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
// Inline function to calculate cube of a number
inline int calculateCube(int num)
{
    return num * num * num;
}

<<<<<<< HEAD
int main()
{
    // Clear the screen
=======
void main()
{
    clrscr();  // Clear the screen
>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2

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
<<<<<<< HEAD
    return 0;  // Wait for a key press
=======
    getch();  // Wait for a key press
>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
}