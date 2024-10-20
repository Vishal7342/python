/* Class A has data members Rno, Name, Branch and a pure virtual function Stud_Detail(). 
Class B is derived from class A. Write a Program to enter your detail and print it by using this mechanism. */

#include <iostream.h>
#include <conio.h>

class A {
protected:
    int Rno;
    char Name[50];
    char Branch[50];
public:
    virtual void Stud_Detail() = 0;  // Pure virtual function
};
class B : public A {
public:
    void Stud_Detail() {
        clrscr(); // Clear screen
        cout << "Enter Roll Number: ";
        cin >> Rno;
        cin.ignore();  // To ignore any leftover newline character in the input buffer
        cout << "Enter Name: ";
        cin.getline(Name, 50);
        cout << "Enter Branch: ";
        cin.getline(Branch, 50);
    }
    void Display() {
        cout << "\nRoll Number: " << Rno;
        cout << "\nName: " << Name;
        cout << "\nBranch: " << Branch << endl;
    }
};
void main() {
    clrscr(); // Clear screen
    B student;
    student.Stud_Detail();
    student.Display();
	cout << "\nPress any key to exit..."; // Prompt user
    getch(); // Wait for user to press a key before exiting
}