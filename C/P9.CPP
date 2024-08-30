// WAP to find out cube and square of given no using UDF.

#include <iostream.h>
#include <conio.h>  // for getch()

// User-Defined Function (UDF) to calculate square of a number
int calculateSquare(int num)
{
    return num * num;
}
// User-Defined Function (UDF) to calculate cube of a number
int calculateCube(int num)
{
    return num * num * num;
}
void main()
{
    clrscr();  // Clear the screen

    int number, square, cube;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculate square using the user-defined function
    square = calculateSquare(number);

    // Calculate cube using the user-defined function
    cube = calculateCube(number);

    // Output the results
    cout << "Square of " << number << " is: " << square << endl;
    cout << "Cube of " << number << " is: " << cube << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}