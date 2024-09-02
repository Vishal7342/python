/* Write a Program which demonstrates Run time polymorphism. */

#include <iostream.h>
#include <conio.h>

// Base class
class Employee {
public:
    // Virtual function to be overridden in derived classes
    virtual void performTask() const {
        cout << "Employee performs tasks." << endl;
    }
    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Employee() {}
};
// Derived class Manager
class Manager : public Employee {
public:
    // Override the performTask function
    void performTask() const {
        cout << "Manager manages the team." << endl;
    }
};
// Derived class Developer
class Developer : public Employee {
public:
    // Override the performTask function
    void performTask() const {
        cout << "Developer writes code." << endl;
    }
};
int main() {
    clrscr(); // Clear the screen
    // Create objects of derived classes
    Manager m;
    Developer d;
    // Create base class pointers
    Employee *empPtr;
    // Point to Manager object and call performTask
    empPtr = &m;
    empPtr->performTask(); // Should call Manager's performTask()
    // Point to Developer object and call performTask
    empPtr = &d;
    empPtr->performTask(); // Should call Developer's performTask()
    cout << "\nPress any key to exit...";
    getch(); // Wait for user to press a key before exiting
    return 0;
}