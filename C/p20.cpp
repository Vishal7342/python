// WAP to overload print() function to display value of integer, flaot and string.

<<<<<<< HEAD
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
=======
#include <iostream.h>
#include <conio.h>
#include <string.h>

>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
// Function prototypes
void print(int num);
void print(float num);
void print(char* str);

// Function to print integer
void print(int num) {
    cout << "Integer value: " << num << endl;
}

// Function to print float
void print(float num) {
    cout << "Float value: " << num << endl;
}

// Function to print string
void print(char* str) {
    cout << "String value: " << str << endl;
}

int main() {
<<<<<<< HEAD
    // Clear the screen
=======
    clrscr(); // Clear the screen
>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2

    int intValue = 10;
    float floatValue = 3.14;
    char stringValue[] = "Hello, World!"; // Using C-style string

    // Calling overloaded print functions
    print(intValue);
    print(floatValue);
    print(stringValue);

<<<<<<< HEAD
    // Wait for a key press
=======
    getch(); // Wait for a key press
>>>>>>> 4dc2ce174b6c1867fbb790ba1b3b01d8c0772ed2
    return 0;
}