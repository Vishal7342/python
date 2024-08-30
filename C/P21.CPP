// Write a program to demonstrate the concept of function overloading using different passing values in addition function.

#include <iostream.h>
#include <conio.h>

// Function prototypes for addition with different parameter types
int addition(int a, int b);
float addition(float a, float b);
double addition(double a, double b);

int main() {
    clrscr(); // Clear the screen
    // Variables to store user input
    int intA, intB;
    float floatA, floatB;
    double doubleA, doubleB;
    // Input values from user
    cout << "Enter two integers: ";
    cin >> intA >> intB;

    cout << "Enter two floats: ";
    cin >> floatA >> floatB;

    cout << "Enter two doubles: ";
    cin >> doubleA >> doubleB;

    // Calling addition functions with user input
    int intResult = addition(intA, intB);
    float floatResult = addition(floatA, floatB);
    double doubleResult = addition(doubleA, doubleB);

    // Output results
    cout << "\nInteger addition result: " << intResult << endl;
    cout << "Float addition result: " << floatResult << endl;
    cout << "Double addition result: " << doubleResult << endl;

    getch(); // Wait for a key press
    return 0;
}
// Function definitions
int addition(int a, int b) {
    return a + b;
}
float addition(float a, float b) {
    return a + b;
}
double addition(double a, double b) {
    return a + b;
}