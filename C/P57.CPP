/* Class Rect has data members L, B, A and a pure virtual function Find_Area(). 
Class Box is derived from class locker. Write a Program to Find the area of a Rectangle by using this mechanism. */

#include <iostream.h>
#include <conio.h>

// Abstract base class
class Rect {
protected:
    float L;  // Length
    float B;  // Breadth
    float A;  // Area
public:
    virtual void Find_Area() = 0;  // Pure virtual function to find the area
};
// Derived class
class Box : public Rect {
public:
    void Find_Area() {
        clrscr(); // Clear screen (Turbo C++ specific)
        cout << "Enter Length: ";
        cin >> L;
        cout << "Enter Breadth: ";
        cin >> B;
        A = L * B; // Calculate the area
    }

    void Display() {
        cout << "\nLength: " << L;
        cout << "\nBreadth: " << B;
        cout << "\nArea: " << A << endl;
    }
};
void main() {
    clrscr(); // Clear screen (Turbo C++ specific)
    Box rectangle;
    rectangle.Find_Area(); // Input dimensions and calculate area
    rectangle.Display();   // Display the results
	cout << "\nPress any key to exit..."; // Prompt user
    getch();              // Wait for user to press a key before exiting
}