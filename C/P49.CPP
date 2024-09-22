/* Write a program which demonstrates Binary < (less than) operator overloading. */

#include <iostream.h>
#include <conio.h>

// Creating class Coordinates
class Coordinates {
public:
    // Constructor
    Coordinates(int x, int y) : x(x), y(y) {}

    // Overloading the less-than operator for the Coordinates objects
    int operator<(const Coordinates& other) const
    {
        // Use && instead of || for correct comparison
        return (x < other.x) || ((x == other.x) && (y < other.y));
    }

private:
    int x, y;
};

int main() 
{
    clrscr(); // Clear the screen
    int x1, y1, x2, y2;
    // Prompt user to enter coordinates for p1
    cout << "Enter coordinates for p1 (x y): ";
    cin >> x1 >> y1;
    Coordinates p1(x1, y1);
    // Prompt user to enter coordinates for p2
    cout << "Enter coordinates for p2 (x y): ";
    cin >> x2 >> y2;
    Coordinates p2(x2, y2);
    // Checking if p1 is less than p2
    if (p1 < p2) {
        cout << "p1 is less than p2." << endl;
    } else {
        cout << "p1 is not less than p2." << endl;
    }
    cout << "\nPress any key to exit...";
    getch(); // Wait for user to press a key before exiting
    return 0;
}
/*
Enter coordinates for p1 (x y): 5
6
Enter coordinates for p2 (x y): 2
4
p1 is not less than p2.

Press any key to exit...
*/
