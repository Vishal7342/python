/* Class Deposit has 3 members amount, year, rate inside it find out the interest. 
WAP which demonstrate constructor overloading and default argument. */

#include <iostream.h>
#include <conio.h>

class Deposit {
private:
    float amount;
    int year;
    float rate;
public:
    // Default constructor with default arguments
    Deposit(float amt = 0.0, int yr = 1, float rt = 0.0) {
        amount = amt;
        year = yr;
        rate = rt;
    }
    // Function to calculate and display interest
    void calculateInterest() {
        float interest = (amount * year * rate) / 100;
        cout << "Interest calculated for deposit: " << interest << endl;
    }
    // Function to set values from user input
    void setValuesFromUser() {
        cout << "Enter amount: ";
        cin >> amount;
        cout << "Enter years: ";
        cin >> year;
        cout << "Enter interest rate (%): ";
        cin >> rate;
    }
};
int main() {
    clrscr(); // Clear the screen
    Deposit deposit; // Create Deposit object
    // Set values from user input
    deposit.setValuesFromUser();
    // Calculate and display interest
    deposit.calculateInterest();
    getch(); // Wait for a key press before exiting
    return 0;
}