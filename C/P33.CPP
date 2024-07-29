// Write a Program to demonstrate constructor with default argument.

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int empid;
    char name[50];
    float salary;

public:
    // Constructor with default arguments
    Employee(int id = 0, const char* empName = "Unknown", float sal = 0.0) {
        empid = id;
        strcpy(name, empName);
        salary = sal;
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

    // Create objects using default arguments
    Employee emp1;
    Employee emp2(101, "Sanghavi Meet",40000);
    Employee emp3(102, "Deshpande Parth", 35000);

    // Display employee details
    emp1.displayData();
    emp2.displayData();
    emp3.displayData();

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}