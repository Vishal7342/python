/* WAP to Demonstrate the different type of inheritance */

#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Person {
protected:
    char name[50];
    int age;
public:
    // Parameterized constructor for Person
    Person(const char* n, int a) {
        strcpy(name, n);
        age = a;
    }
    // Method to display person details
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    // Method to set person details from user input
    void setPersonDetails() {
        cout << "Enter Name: ";
        cin.getline(name, 50); // Read name from user input
        cout << "Enter Age: ";
        cin >> age;
    }
};
// Derived class inheriting from Person
class Student : public Person {
private:
    int studentId;
public:
    // Parameterized constructor for Student
    Student(const char* n, int a, int id) : Person(n, a) {
        studentId = id;
    }
    // Method to display student details
    void displayStudent() {
        displayPerson(); // Accessing base class member function
        cout << "Student ID: " << studentId << endl;
    }
    // Method to set student details from user input
    void setStudentDetails() {
        setPersonDetails(); // Accessing base class method to set name and age
        cout << "Enter Student ID: ";
        cin >> studentId;
    }
};
int main() {
    clrscr(); // Clear the screen
    // Create an object of derived class Student
    Student s("Default Name", 0, 0); // Initialize with default values
    // Set student details from user input
    s.setStudentDetails();
    // Display student details
    cout << "\nStudent Details:" << endl;
    s.displayStudent();
    cout << "\nPress any key to exit..."; // Wait for user to press a key before exiting
    getch(); // Wait for a key press before exiting
    return 0;
}