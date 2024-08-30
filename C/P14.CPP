// WAP to check given year is leap year or not using UDF.

#include <iostream.h>
#include <conio.h>  // for getch()

// Function to check if a year is a leap year
int isLeapYear(int year)
{
    // Leap year is divisible by 4,
    // but not divisible by 100 unless also divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;  // true
    else
        return 0;  // false
}

void main()
{
    clrscr();  // Clear the screen

    int year;
    int leap;

    // Input a year from the user
    cout << "Enter a year: ";
    cin >> year;

    // Call the function to check if it's a leap year
    leap = isLeapYear(year);

    // Output the result
    if (leap == 1)
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}
