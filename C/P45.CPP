/* Write a Program to overload unary minus operator. */

#include <iostream.h>
#include <conio.h>

// Class definition
class Vector {
private:
    float x, y, z;
public:
    // Parameterized constructor
    Vector(float x, float y, float z) : x(x), y(y), z(z) {}

    // Overload unary minus operator
    Vector operator-() const {
        return Vector(-x, -y, -z);
    }

    // Method to display vector components
    void display() const {
        cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

// Main function
int main() {
	clrscr(); // Clear the screen
    // Create a Vector object
    Vector v1(1.0, -2.0, 3.0);

    // Display original vector
    cout << "Original vector: ";
    v1.display();

    // Apply unary minus operator and display result
    Vector v2 = -v1;
    cout << "Negated vector: ";
    v2.display();
	cout << "\nPress any key to exit..."; // Wait for user to press a key before exiting
    getch(); // Wait for a key press before exiting
    return 0;
}