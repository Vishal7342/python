// Write a program to enter the value of height, width and find out area of rectangle using Inline function.

#include <iostream>
#include <conio.h>  // for getch()

using namespace std;
// Inline function to calculate area of a rectangle
inline int calculateArea(int height, int width)
{
    return height * width;
}

int main()
{
    // Clear the screen

    int height, width, area;

    // Input height and width from the user
    cout << "Enter height of the rectangle: ";
    cin >> height;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Call the inline function to calculate area
    area = calculateArea(height, width);

    // Output the calculated area
    cout << "Area of the rectangle with height " << height << " and width " << width << " is: " << area << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    // Wait for a key press

    return 0;
}