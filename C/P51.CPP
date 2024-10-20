/* Write a program which demonstrates Binary = = (equals to) operator overloading. */

#include <iostream.h>
#include <conio.h>

// Creating class Point
class Point {
public:
    // Constructor to initialize coordinates
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    // Overloading the equality operator ==
    int operator==(const Point& other) const
    {
        return (x == other.x) && (y == other.y);
    }
    // Method to display point coordinates
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
private:
    int x, y;
};
int main() 
{
    clrscr(); // Clear the screen
    // Create two Point objects
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(5, 6);
    // Compare points using the overloaded == operator
    if (p1 == p2) {
        cout << "p1 is equal to p2." << endl;
    } else {
        cout << "p1 is not equal to p2." << endl;
    }
    if (p1 == p3) {
        cout << "p1 is equal to p3." << endl;
    } else {
        cout << "p1 is not equal to p3." << endl;
    }
    cout << "Point p1: ";
    p1.display();
    cout << "Point p2: ";
    p2.display();
    cout << "Point p3: ";
    p3.display();
    cout << "\nPress any key to exit...";
    getch(); // Wait for user to press a key before exiting
    return 0;
}