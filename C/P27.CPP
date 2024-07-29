/* Write a program to create Class employee which contain data members like
EmpId, Name, Basic, DA, HRA and one member function Cal_salary()
which calculate the gross salary of the employee.*/

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Employee {
private:
    int EmpId;
    char Name[50];
    float Basic;
    float DA;
    float HRA;

public:
void setData(int id, const char* name, float basic, float da, float hra) {
	EmpId = id;
	strcpy(Name, name);
	Basic = basic;
	DA = da;
	HRA = hra;
    }

    void setDataFromInput() {
	cout << "Enter Employee ID: ";
	cin >> EmpId;
	cout << "Enter Name: ";
	cin.ignore();
	// Ignore any remaining newline characters from previous input
	cin.getline(Name, 50);
	cout << "Enter Basic Salary: ";
	cin >> Basic;
	cout << "Enter Dearness Allowance (DA): ";
	cin >> DA;
	cout << "Enter House Rent Allowance (HRA): ";
	cin >> HRA;
    }

    void Cal_salary() {
	float grossSalary = Basic + DA + HRA;
	cout << "\nEmployee Details:";
	cout << "\nEmpId: " << EmpId;
	cout << "\nName: " << Name;
	cout << "\nBasic Salary: " << Basic;
	cout << "\nDearness Allowance (DA): " << DA;
	cout << "\nHouse Rent Allowance (HRA): " << HRA;
	cout << "\nGross Salary: " << grossSalary << endl;
	// Prompt the user to press any key to exit
		cout << "Press any key to exit...";
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Employee emp; // Create an object of class Employee
    emp.setDataFromInput(); // Set employee data from user input
    emp.Cal_salary(); // Calculate and print employee salary details

    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}