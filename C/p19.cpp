// Write a program to using function overloading to find the volume of a cube, cylinder and rectangular box.

#include <iostream>
#include <conio.h>

using namespace std;
// Function prototypes
int volume(int);
double volume(double, int);
long volume(long, int, int);

int main()
{
    // Clear the screen

    // Output volumes for different shapes
    cout << "Volume of cube with side length 10: " << volume(10) << "\n";
    cout << "Volume of cylinder with radius 2.5 and height 8: " << volume(2.5, 8) << "\n";
    cout << "Volume of rectangular box with dimensions 100L x 75 x 15: " << volume(100L, 75, 15) << "\n";

    // Wait for a key press
    return 0;
}

// Function definitions

int volume(int s)
{
    return s * s * s;
}

double volume(double r, int h)
{
    return 3.14159 * r * r * h; // Corrected PI value and formula
}

long volume(long l, int b, int h)
{
    return l * b * h;
}