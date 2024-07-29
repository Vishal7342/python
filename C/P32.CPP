// Write a Program to demonstrate multiple constructors in class.

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int empid;
    char name[50];
    float salary;

public:
    // Default constructor
    Employee() {
        empid = 0;
        strcpy(name, "Unknown");
        salary = 0.0;
    }

    // Parameterized constructor to initialize with empid and name
    Employee(int id, const char* empName) {
        empid = id;
        strcpy(name, empName);
        salary = 0.0;
    }

    // Parameterized constructor to initialize with empid, name, and salary
    Employee(int id, const char* empName, float sal) {
        empid = id;
        strcpy(name, empName);
        salary = sal;
    }

    // Member function to set data
    void setData(int id, const char* empName, float sal) {
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

    // Using default constructor
    Employee emp1;
    cout << "Using Default Constructor:\n";
    emp1.displayData();

    // Using parameterized constructor with empid and name
    Employee emp2(101, "Sanghavi Meet",40000);
    cout << "\nUsing Parameterized Constructor with empid and name:\n";
    emp2.displayData();

    // Using parameterized constructor with empid, name, and salary
    Employee emp3(102, "Deshpande Parth", 35000);
    cout << "\nUsing Parameterized Constructor with empid, name, and salary:\n";
    emp3.displayData();

    // Using member function setData()
    Employee emp4;
    emp4.setData(103, "Chaudhry Sharviluck", 30000);
    cout << "\nUsing Member Function setData():\n";
    emp4.displayData();
    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}