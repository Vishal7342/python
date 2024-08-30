/* WAP to create student class with data member like eno,name and public
member function like getstudent function to read student detail and
printstudent function to write student detail. Define member function
outside class.Demonstrate the use of this class.*/

#include <iostream.h>
#include <conio.h>
#include <string.h> // for strcpy function

class Student {
private:
    char eno[50];
    char name[50];

public:
    void getStudent(); // Function to read student details
    void printStudent(); // Function to print student details
};

// Definition of getStudent function
void Student::getStudent() {
    cout << "Enter Enrollment Number: ";
    cin >> eno;
    cout << "Enter Name: ";
    cin.ignore();
    // Ignore any remaining newline characters from previous input
    cin.getline(name, 50);
    // Use cin.getline() to read name
}

// Definition of printStudent function
void Student::printStudent() {
    cout << "\nStudent Details:";
    cout << "\nEnrollment Number: " << eno;
    cout << "\nName: " << name << endl;
}

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Student student; // Create an object of class Student
    student.getStudent(); // Get input for student details
    student.printStudent(); // Print student details

    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}