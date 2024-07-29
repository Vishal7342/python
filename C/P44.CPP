/* Class Student has data member sno, name of student. 
Class Marks is derived form Student has data members Marks of 6 subjects. 
Class Result is derived from class Marks which calculate result of student and print related details. 
write a program to perform this mechanism.*/


#include <iostream.h>
#include <conio.h> // For getch()
#include <string.h> // For strcpy()

class Student {
protected:
    int sno;
    char name[50];
public:
    void getStudentData() {
        cout << "Enter Student Number: ";
        cin >> sno;
        cout << "Enter Name: ";
        cin.ignore(); // To clear the newline character from the buffer
        cin.getline(name, 50);
    }

    void displayStudentData() const {
        cout << "Student Number: " << sno << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student {
protected:
    float subject[6]; // Marks of 6 subjects
public:
    void getMarksData() {
        getStudentData();
        for (int i = 0; i < 6; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> subject[i];
        }
    }
    void displayMarksData() const {
        for (int i = 0; i < 6; ++i) {
            cout << "Marks in subject " << i + 1 << ": " << subject[i] << endl;
        }
    }
};

class Result : public Marks {
private:
    float Total, per;
public:
    void cal_result() {
        Total = 0;
        for (int i = 0; i < 6; ++i) {
            Total += subject[i];
        }
        per = (Total / 600) * 100; // Assuming each subject is out of 100 marks
    }
    void displayResultData() const {
        displayStudentData();
        displayMarksData();
        cout << "Total Marks: " << Total << endl;
        cout << "Percentage: " << per << "%" << endl;
    }
};
void main() {
    clrscr();
    Result studentResult;
    studentResult.getMarksData();
    studentResult.cal_result();
    studentResult.displayResultData();
    getch(); // Wait for user input before closing the program
}