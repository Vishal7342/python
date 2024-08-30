// Write a program to enter any two numbers and get addition using Inline function.

<<<<<<< HEAD
#include <iostream>
#include <conio.h>  // for getch()

using namespace std;
=======
#include <iostream.h>
#include <conio.h>  // for getch()

>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
// Inline function to perform addition
inline int addNumbers(int a, int b)
{
    return a + b;
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

    int num1, num2, result;

    // Input two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Call the inline function to add the numbers
    result = addNumbers(num1, num2);

    // Output the result
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
<<<<<<< HEAD
    // Wait for a key press

    return 0;
=======
    getch();  // Wait for a key press
>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
}