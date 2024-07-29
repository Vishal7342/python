// Write a Program to demonstrate default constructor.

#include <iostream.h>
#include <conio.h>

class MyClass {
private:
    int data;

public:
    // Default constructor
    MyClass() {
        data = 0; // Initialize data member to 0
    }

    // Member function to set data
    void setData(int value) {
        data = value;
    }

    // Member function to display data
    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    // Create an object of MyClass using default constructor
    MyClass obj;

    // Display initial data
    cout << "Initial data using default constructor:\n";
    obj.displayData();

    // Set new data
    obj.setData(42);

    // Display updated data
    cout << "\nUpdated data:\n";
    obj.displayData();

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}