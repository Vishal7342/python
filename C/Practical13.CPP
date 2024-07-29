/* Write a C++ program to find the average of six subjects and display the results as follows
If per> =80 then Display Outstanding 
If per> =70 then Display Distinction
If per>=60 then Display First class
If per>=50 then Display Second class
If per>=40 then Display Pass
Otherwise Display Fail.*/

#include <iostream.h> // Include the standard I/O library for input and output
#include <conio.h>    // Include the header file for console input/output functions

void main()
{
    int C, DBMS, SE, CONSM, FCEL, ES, PW_II, tmarks;
    float percentage;
    clrscr(); // Clear the console screen
    // Prompting user for input
    cout << "\nEnter your Programming in 'C' marks : ";
    cin >> C;
    cout << "Enter your Database Management System marks : ";
    cin >> DBMS;
    cout << "Enter your Software Engineering marks : ";
    cin >> SE;
    cout << "Enter your Computer Oriented Numerical and Statistical Methods marks : ";
    cin >> CONSM;
    cout << "Enter your Foundation Course in English Language marks : ";
    cin >> FCEL;
    cout << "Enter your Environmental Studies marks : ";
    cin >> ES;
    cout << "Enter your Project Work-II marks : ";
    cin >> PW_II;
    tmarks = C + DBMS + SE + CONSM + FCEL + ES + PW_II;
    cout << "\n\nYour total marks are : " << tmarks;
    percentage = ((float)tmarks / 550) * 100;
    cout << "\nYour Percentage is : " << percentage;
    // Determining grade based on percentage
    if (percentage >= 80)
        cout << "\nGrade : O-Outstanding";
	else if (percentage >= 70)
        cout << "\nGrade : A-Distinction";
    else if (percentage >= 60)
        cout << "\nGrade : B-First Class";
    else if (percentage >= 50)
        cout << "\nGrade : C-Second Class";
    else if (percentage >= 40)
        cout << "\nGrade : D-Pass";
    else
        cout << "\nGrade : F-Fail";
    cout << "\nPress any key to exit..."; // Prompt the user to press any key to exit
    getch(); // Wait for a key press
}