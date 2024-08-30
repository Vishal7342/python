/* W AP to create student class with data member like eno,name and public
member function like getstudent function to read student detail and
printstudent function to write student detail. Define member function
inside class.Demonstrate the use of this class.*/

#include <iostream.h>
#include <conio.h>

class Student {
private:
    char eno[50];
    char name[50];

public:
    void getStudent() {
	cout << "Enter Enrollment Number: ";
	cin.getline(eno, 50);
	// Read enrollment number with getline to handle spaces
	cout << "Enter Name: ";
	cin.getline(name, 50);
	// Read name with getline to handle spaces
    }

    void printStudent() {
	cout << "\nStudent Details:";
	cout << "\nEnrollment Number: " << eno;
	cout << "\nName: " << name << endl;
	// Prompt the user to press any key to exit
    cout << "Press any key to exit...";
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Student student; // Create an object of class Student
    student.getStudent(); // Get input for student details
    student.printStudent(); // Print student details

    getch();
    // Wait for a key press before exiting (from conio.h)
    return 0;
}