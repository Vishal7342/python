/* Write a Program to overload unary increment operator. */

#include <iostream.h>
#include <conio.h>

class Counter {
private:
    int value;
public:
    // Parameterized constructor
    Counter(int v = 0) : value(v) {}

    // Prefix increment operator (++obj)
    Counter& operator++() {
        ++value; // Increment the value
        return *this; // Return the current object
    }

    // Postfix increment operator (obj++)
    Counter operator++(int) {
        Counter temp = *this; // Save the current state
        ++value; // Increment the value
        return temp; // Return the saved state
    }

    // Method to display the value
    void display() const {
        cout << "Counter value: " << value << endl;
    }
};

// Main function
int main() {
    clrscr(); // Clear the screen
    // Create a Counter object
    Counter c1(10);
    // Display original counter value
    cout << "Original ";
    c1.display();
    // Apply prefix increment operator and display result
    ++c1; // Increment using prefix operator
    cout << "After prefix increment ";
    c1.display();
    // Apply postfix increment operator and display result
    Counter c2 = c1++; // Increment using postfix operator and save result
    cout << "After postfix increment ";
    c1.display();
    cout << "Returned value from postfix increment ";
    c2.display();
    cout << "\nPress any key to exit..."; // Prompt user
    getch(); // Wait for a key press before exiting
    return 0;
}
