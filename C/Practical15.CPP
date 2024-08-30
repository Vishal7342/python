// Write a C++ program that calculates and displays the factorial of a number entered by the user. use of for statement.

#include <iostream.h>
#include <conio.h>

int main() {
    clrscr();  // Clear the screen

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Validate input
    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers.";
    } else {
        int factorial = 1;

        // Calculate factorial using a for loop
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        cout << "Factorial of " << n << " is: " << factorial;
    }
	cout << "\nPress any key to exit..."; // Prompt the user to press any key to exit
    getch();  // Wait for a key press
    return 0;
}