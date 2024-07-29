// Write a C++ program to find the area and circumference of the circle. (Area=PI*r*r and circumference=2*PI*r)

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main() {
    clrscr(); // Clear the console screen

    // Declare variables
    float radius, area, circumference;

    // Prompt the user to enter the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area of the circle
    area = 3.14 * radius * radius;

    // Calculate the circumference of the circle
    circumference = 2 * 3.14 * radius;

    // Display the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    // Prompt the user to press any key to exit
    cout << "Press any key to exit...";
    getch(); // Wait for a key press
}