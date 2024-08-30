/* Class Date has 3 members day, month, year inside it. WAP which demonstrate
constructor overloading and print today date. */

#include <iostream.h>
#include <conio.h>
#include <dos.h> // For struct date and getdate()

class Date {
private:
    int day, month, year;

public:
    // Default constructor
    Date() {
        struct date dt;
        getdate(&dt);
        day = dt.da_day;
        month = dt.da_mon;
        year = dt.da_year;
    }

    // Constructor with parameters (day, month, year)
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void printDate() {
        cout << "Today's date is: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    clrscr(); // Clear the screen

    Date today; // Create Date object initialized with today's date

    today.printDate(); // Print today's date

    getch(); // Wait for a key press before exiting
    return 0;
}