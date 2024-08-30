/* Write a function power to raise a number m to power n. 
The function takes two parameter double m and int n. Use default value 2 for n to make the function to calculate squares when this argument is omitted.*/

#include <iostream.h>
#include <conio.h>

// Function prototype with default parameter
double power(double m, int n = 2);

int main() {
    clrscr(); // Clear the screen

    double base;
    int exponent;

    // Input base and exponent from user
    cout << "Enter base (m): ";
    cin >> base;
    cout << "Enter exponent (n, default is 2 for square): ";
    cin >> exponent;

    // Calculate power using function
    double result = power(base, exponent);

    // Output the result
    cout << base << " raised to the power " << exponent << " is: " << result << endl;
	// Prompt the user to press any key to exit
    cout << "Press any key to exit...";

    getch(); // Wait for a key press
    return 0;
}

// Function definition for power
double power(double m, int n) {
    double result = 1.0;

    for (int i = 0; i < n; ++i) {
        result *= m;
    }
    return result;
}