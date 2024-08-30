/* Class Student has data members Rno, Name. Class Result has data member year,sem,DSA,OOP,ADBMS,PTPD,PD,IEE, Total, 
per and is derived from Class Student and it has a member function cal_result() which finds the total and percentage of the student. 
Write a Program to perform this mechanism. */

#include <iostream.h>
#include <conio.h> // For getch()
#include <string.h> // For strcpy()

class Student {
protected:
    int Rno;
    char Name[50];
public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> Rno;
        cout << "Enter Name: ";
        cin.ignore(); // To clear the newline character from the buffer
        cin.getline(Name, 50);
    }

    void displayStudentData() const {
        cout << "Roll Number: " << Rno << endl;
        cout << "Name: " << Name << endl;
    }
};

class Result : public Student {
private:
    int year, sem;
    float DSA, OOP, ADBMS, PTPD, PD, IEE;
    float Total, per;

public:
    void getResultData() {
        getStudentData();
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Semester: ";
        cin >> sem;
        cout << "Enter marks for DSA: ";
        cin >> DSA;
        cout << "Enter marks for OOP: ";
        cin >> OOP;
        cout << "Enter marks for ADBMS: ";
        cin >> ADBMS;
        cout << "Enter marks for PTPD: ";
        cin >> PTPD;
        cout << "Enter marks for PD: ";
        cin >> PD;
        cout << "Enter marks for IEE: ";
        cin >> IEE;
    }

    void cal_result() {
        Total = DSA + OOP + ADBMS + PTPD + PD + IEE;
        per = (Total / 600) * 100; // Assuming each subject is out of 100 marks
    }

    void displayResultData() const {
        displayStudentData();
        cout << "Year: " << year << endl;
        cout << "Semester: " << sem << endl;
        cout << "Marks in DSA: " << DSA << endl;
        cout << "Marks in OOP: " << OOP << endl;
        cout << "Marks in ADBMS: " << ADBMS << endl;
        cout << "Marks in PTPD: " << PTPD << endl;
        cout << "Marks in PD: " << PD << endl;
        cout << "Marks in IEE: " << IEE << endl;
        cout << "Total Marks: " << Total << endl;
        cout << "Percentage: " << per << "%" << endl;
    }
};

void main() {
    clrscr();
    Result studentResult;
    studentResult.getResultData();
    studentResult.cal_result();
    studentResult.displayResultData();
    getch(); // Wait for user input before closing the program
}