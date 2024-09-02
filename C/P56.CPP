/* Class Library has data members Bno, Title, Author and a pure virtual function Book_Detail(). 
Class Book_detail is derived from class Library. Write a program to enter your detail and print it by using this mechanism. */

#include <iostream.h>
#include <conio.h>

class Library {
protected:
    int Bno;            // Book Number
    char Title[50];     // Book Title
    char Author[50];    // Book Author
public:
    virtual void Book_Detail() = 0;  // Pure virtual function
};

class Book_detail : public Library {
public:
    void Book_Detail() {
        clrscr(); // Clear screen (Turbo C++ specific)
        cout << "Enter Book Number: ";
        cin >> Bno;
        cin.ignore();  // To ignore any leftover newline character in the input buffer
        cout << "Enter Book Title: ";
        cin.getline(Title, 50);
        cout << "Enter Book Author: ";
        cin.getline(Author, 50);
    }

    void Display() {
        cout << "\nBook Number: " << Bno;
        cout << "\nBook Title: " << Title;
        cout << "\nBook Author: " << Author << endl;
    }
};

void main() {
    clrscr(); // Clear screen (Turbo C++ specific)
    Book_detail book;
    book.Book_Detail(); // Enter book details
    book.Display();     // Display book details
	cout << "\nPress any key to exit..."; // Prompt user
    getch();            // Wait for user to press a key before exiting
}