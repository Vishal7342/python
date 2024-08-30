// Write a Program which demonstrates the copy and parameterized constructor.

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int empid;
    char name[50];
    float salary;

public:
    // Parameterized constructor
    Employee(int id, const char* empName, float sal) {
        empid = id;
        strcpy(name, empName);
        salary = sal;
    }

    // Copy constructor
    Employee(const Employee& other) {
        empid = other.empid;
        strcpy(name, other.name);
        salary = other.salary;
    }

    // Member function to display data
    void displayData() {
        cout << "\nEmployee Details:";
        cout << "\nEmployee ID: " << empid;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    // Create an object using parameterized constructor
      Employee emp1(101, "Sanghavi Meet",40000);

    // Display employee details using parameterized constructor
    cout << "Using Parameterized Constructor:\n";
    emp1.displayData();

    // Create another object using copy constructor
    Employee emp2 = emp1;

    // Display employee details using copy constructor
    cout << "\nUsing Copy Constructor:\n";
    emp2.displayData();

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}