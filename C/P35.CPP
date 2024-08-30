/*Class Demo has 2 data members a and b inside it. Write a Program which
Demonstrates the constructor overloading for class Exam.*/

#include <iostream.h>
#include <conio.h>

class Exam {
private:
    int a, b;

public:
    // Default constructor
    Exam() {
        a = 0;
        b = 0;
    }

    // Parameterized constructor with one parameter
    Exam(int x) {
        a = x;
        b = 0;
    }

    // Parameterized constructor with two parameters
    Exam(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    Exam obj1;       // Calls default constructor
    Exam obj2(5);    // Calls parameterized constructor with one parameter
    Exam obj3(10, 20); // Calls parameterized constructor with two parameters

    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();

    getch(); // Wait for a key press before exiting
    return 0;
}