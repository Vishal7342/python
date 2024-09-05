/* Class Book has data members Bno, Title, Author, price, Qty. 
Class Bill is derived from class book and it has member function Cal_Bill() which counts the total bill of the user. 
Write a Program to perform this mechanism. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

// Base class
class Book {
protected:
    int Bno;
    char Title[50];
    char Author[50];
    float price;
    int Qty;

public:
    // Default constructor
    Book() {}
    // Parameterized constructor for Book
    Book(int bno, const char* title, const char* author, float p, int qty) {
        Bno = bno;
        strcpy(Title, title);
        strcpy(Author, author);
        price = p;
        Qty = qty;
    }
    // Method to display book details
    void displayBook() {
        cout << "Book Number: " << Bno << endl;
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << Qty << endl;
    }
    // Method to set book details from user input
    void setBookDetails() {
        cout << "Enter Book Number: ";
        cin >> Bno;
        cin.ignore(); // Ignore newline character left in buffer
        cout << "Enter Title: ";
        cin.getline(Title, 50);
        cout << "Enter Author: ";
        cin.getline(Author, 50);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> Qty;
    }
};

// Derived class inheriting from Book
class Bill : public Book {
private:
    float totalBill;
public:
    // Default constructor
    Bill() {}
    // Parameterized constructor for Bill, using base class constructor
    Bill(int bno, const char* title, const char* author, float p, int qty)
        : Book(bno, title, author, p, qty) {
        totalBill = 0.0; // Initialize totalBill
    }
    // Method to calculate total bill based on quantity and price
    void Cal_Bill() {
        totalBill = price * Qty;
    }
    // Method to display book details and calculated total bill
    void displayBill() {
        displayBook(); // Accessing base class member function to display book details
        cout << "Total Bill: " << totalBill << endl;
    }
    // Method to set book details and calculate total bill
    void setBillDetails() {
        setBookDetails(); // Accessing base class method to set book details
        Cal_Bill(); // Calculate total bill
    }
};

int main() {
    clrscr(); // Clear the screen
    // Create an object of derived class Bill
    Bill book1;
    // Set book details from user input
    cout << "Enter details for the book:" << endl;
    book1.setBillDetails();
    // Display book details and calculated total bill
    cout << "\nBook Details and Total Bill:" << endl;
    book1.displayBill();
	cout << "\nPress any key to exit..."; // Wait for user to press a key before exiting
    getch(); // Wait for a key press before exiting
    return 0;
}

/* Output :- 

Book Details and Total Bill:
Book Number: 101
Title: Strenjer Sring
Author: Steem barlin
Price: 199.9
Quantity: 2
Total Bill: 399.8

Press any key to exit...
*/
