// WAP to print hello world using UDF.

#include <iostream.h>
#include <conio.h>  // for getch()

// User-Defined Function (UDF) to print "Hello, World!"
void printHelloWorld()
{
    cout << "Hello, World!" << endl;
}

void main()
{
    clrscr();  // Clear the screen

    // Call the user-defined function to print "Hello, World!"
    printHelloWorld();

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}