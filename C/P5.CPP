// WAP to find out Simple interest.

#include <iostream.h>
#include <conio.h>  // for getch()

void main()
{
    float principal, rate, time, simple_interest;

    clrscr();  // Clear the screen

    // Input principal amount
    cout << "Enter principal amount: ";
    cin >> principal;

    // Input rate of interest
    cout << "Enter rate of interest (per annum): ";
    cin >> rate;

    // Input time duration in years
    cout << "Enter time duration (in years): ";
    cin >> time;

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Output the calculated simple interest
    cout << "Simple Interest = " << simple_interest << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}