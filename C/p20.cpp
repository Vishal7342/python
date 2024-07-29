// WAP to overload print() function to display value of integer, flaot and string.

#include <iostream.h>
#include <conio.h>
#include <string.h>

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
    clrscr(); // Clear the screen

    int intValue = 10;
    float floatValue = 3.14;
    char stringValue[] = "Hello, World!"; // Using C-style string

    // Calling overloaded print functions
    print(intValue);
    print(floatValue);
    print(stringValue);

    getch(); // Wait for a key press
    return 0;
}