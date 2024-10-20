/* Write a Program which demonstrates the use of pure virtual function. */

#include <iostream.h>
#include <conio.h>

// Abstract base class
class PaymentMethod {
public:
    // Pure virtual function to process payment
    virtual void processPayment(double amount) const = 0;
    // Virtual destructor
    virtual ~PaymentMethod() {}
};
// Derived class DebitCard
class DebitCard : public PaymentMethod {
public:
    // Override the pure virtual function
    void processPayment(double amount) const {
        cout << "Processing Debit Card payment of rupees : " << amount << endl;
    }
};

// Derived class Paytm
class Paytm : public PaymentMethod {
public:
    // Override the pure virtual function
    void processPayment(double amount) const {
        cout << "Processing Paytm payment of rupees : " << amount << endl;
    }
};

int main() {
    clrscr(); // Clear the screen
    // Create objects of derived classes
    DebitCard dc;
    Paytm pt;
    // Create pointers to the base class
    PaymentMethod *paymentPtr;
    // Point to DebitCard object and process payment
    paymentPtr = &dc;
    paymentPtr->processPayment(100.0); // Should call DebitCard's processPayment()
    // Point to Paytm object and process payment
    paymentPtr = &pt;
    paymentPtr->processPayment(200.0); // Should call Paytm's processPayment()
    cout << "\nPress any key to exit...";
    getch(); // Wait for user to press a key before exiting
    return 0;
}