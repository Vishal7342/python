/* WAP to create employee class with data members empid, name, salary
and public member function getemployee and printemployee. Demonstrate
the use of this class by creating array of five employee object. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int empid;
    char name[50];
    float salary;

public:
    void getEmployee() {
	cout << "Enter Employee ID: ";
	cin >> empid;
	cout << "Enter Name: ";
	cin.ignore(); // Ignore any remaining newline characters from previous input
	cin.getline(name, 50);
	cout << "Enter Salary: ";
	cin >> salary;
    }

    void printEmployee() {
	cout << "\nEmployee Details:";
	cout << "\nEmployee ID: " << empid;
	cout << "\nName: " << name;
	cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Employee emp_array[5]; // Array of 5 Employee objects

    // Input details for each Employee object
    for (int i = 0; i < 5; ++i) {
	cout << "\nEnter details for Employee " << (i + 1) << ":\n";
	emp_array[i].getEmployee();
    }

    // Print details for each Employee object
    for (int j = 0; j < 5; ++j) {
	cout << "\nDetails of Employee " << (j + 1) << ":\n";
	emp_array[j].printEmployee();
    }

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}