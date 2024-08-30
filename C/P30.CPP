/* WAP to create class large which contain data members like m and n and two member function largest and display. 
Demonstrate the use of nesting of member function. */

#include <iostream.h>
#include <conio.h>

class Large {
private:
    int m, n;

public:
    void getNumbers() {
        cout << "Enter two numbers: ";
        cin >> m >> n;
    }

    void display() {
        cout << "The numbers entered are: " << m << " and " << n << endl;
    }

    void largest() {
        if (m > n) {
            cout << "The largest number is: " << m << endl;
        } else {
            cout << "The largest number is: " << n << endl;
        }
    }

    // Nesting member functions for demonstration
    void findAndDisplayLargest() {
        largest(); // Calling nested function largest()
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Large obj;
    obj.getNumbers(); // Input numbers
    obj.display();    // Display numbers

    // Demonstrate nested member function call
    obj.findAndDisplayLargest();

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}