/* Write a Program which demonstrates Binary minus operator overloading. that demonstrates binary minus operator overloading 
with user input for a Point class. 
The program will prompt the user to enter coordinates for two points, perform the subtraction, and display the result:*/

#include <iostream.h>
#include <conio.h>

class Point {
   float x, y;
public:
    // Constructor with default values
    Point(float x = 0, float y = 0) : x(x), y(y) {}
    // Overloading the binary minus operator
    Point operator-(const Point& p) const {
        return Point(x - p.x, y - p.y);
    }
    // Function to display the point
    void show() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    // Function to input the point coordinates
    void input() {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }
};

int main() {
	clrscr(); // Clear the screen
    Point p1, p2, p3;
    cout << "Enter coordinates for Latitude:" << endl;
    p1.input();
    cout << "Enter coordinates for Longitude:" << endl;
    p2.input();
    p3 = p1 - p2;  // Perform subtraction using the overloaded - operator
    cout << "Latitude: ";
    p1.show();
    cout << "Longitude: ";
    p2.show();
    cout << "Point 1 - Point 2: ";
    p3.show();
    cout << "\nPress any key to exit..."; // Prompt user
    getch(); // Wait for a key press before exiting
    return 0;
}
/*
Enter coordinates for Latitude:
Enter x and y: 2
3
Enter coordinates for Longitude:
Enter x and y: 34
45
Latitude: (2, 3)
Longitude: (34, 45)
Point 1 - Point 2: (-32, -42)

Press any key to exit...
*/
