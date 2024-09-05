/* Class Emp has data members Eno, Ename, DA, HRA, Bsal, IT which gives details of the employee. 
Class Salary is derived from class Emp and it has a member function cal_salary() which calculates the salary of the employee. 
Write a Program which performs this mechanism. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Emp {
protected:
    int Eno;
    char Ename[50];
    float DA;
    float HRA;
    float Bsal;
    float IT;
public:
    // Parameterized constructor for Emp
    Emp(int eno, const char* ename, float da, float hra, float bsal, float it) {
        Eno = eno;
        strcpy(Ename, ename);
        DA = da;
        HRA = hra;
        Bsal = bsal;
        IT = it;
    }
    // Method to display employee details
    void displayEmp() {
        cout << "Employee Number: " << Eno << endl;
        cout << "Employee Name: " << Ename << endl;
        cout << "Dearness Allowance: " << DA << endl;
        cout << "House Rent Allowance: " << HRA << endl;
        cout << "Basic Salary: " << Bsal << endl;
        cout << "Income Tax: " << IT << endl;
    }
};
// Derived class inheriting from Emp
class Salary : public Emp {
private:
    float totalSalary;
public:
    // Parameterized constructor for Salary, using base class constructor
    Salary(int eno, const char* ename, float da, float hra, float bsal, float it)
        : Emp(eno, ename, da, hra, bsal, it) {
        totalSalary = 0.0; // Initialize totalSalary
    }
    // Method to calculate salary based on components
    void cal_salary() {
        totalSalary = Bsal + (Bsal * (DA / 100)) + (Bsal * (HRA / 100)) - (Bsal * (IT / 100));
    }
    // Method to display employee details and calculated salary
    void displaySalary() {
        displayEmp(); // Accessing base class member function to display employee details
        cout << "Total Salary: " << totalSalary << endl;
    }
};
int main() {
    clrscr(); // Clear the screen
    // Example usage:
    // Create an object of derived class Salary
    Salary emp1(101, "Sanghavi Meet", 10.0%, 15.0%, 40000.0, 5.0%); // Example values
    // Calculate salary
    emp1.cal_salary();
    // Display employee details and calculated salary
    cout << "Employee Details and Salary:" << endl;
    emp1.displaySalary();
    cout << "\nPress any key to exit..."; // Wait for user to press a key before exiting
    getch(); // Wait for a key press before exiting
    return 0;
}

/* Output :-

Employee Details and Salary:
Employee Number : 101
Employee Name : kuriya Vishal
Dearness Allowance : 10
House Rent Allowance :15
Basic Salary : 40000
Income Tex :5
Total Salary : 48000

Press any key to exit...
*/

