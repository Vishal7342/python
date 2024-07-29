// Write a C++ program using the scope resolution operator. 

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>  // Include the header file for console input/output functions

class A {
public:
    // Only declaration
    void fun();
};

// Definition outside class using ::
void A::fun() { cout << "function() called"; }

int main()
{
	clrscr(); // Clear the console screen
    A a;
    a.fun();
	// Prompt the user to press any key to exit
    cout << "\nPress any key to exit...";
	getch(); // Wait for a key press
    return 0;
}