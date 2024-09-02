/* Write a Program which demonstrates Binary + operator overloading. */

#include <iostream.h>
#include <string.h>
#include <conio.h>

class MyString {
private:
    char* str;
public:
    // Constructor
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    // Destructor
    ~MyString() {
        delete[] str;
    }
    // Overload binary + operator for string concatenation
    MyString operator+(const MyString& other) const {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString temp(newStr);
        delete[] newStr;
        return temp;
    }
    // Method to display the string
    void display() const {
        cout << str << endl;
    }
};
// Main function
int main() {
    clrscr(); // Clear the screen
    // Create two MyString objects
    MyString s1("Hello.. ");
    MyString s2("World!!");
    // Display original strings
    cout << "String 1: ";
    s1.display();
    cout << "String 2: ";
    s2.display();
    // Apply binary + operator and display result
    MyString s3 = s1 + s2; // Concatenate strings using the overloaded + operator
    cout << "Concatenated string: ";
    s3.display();
    cout << "\nPress any key to exit..."; // Prompt user
    getch(); // Wait for a key press before exiting
    return 0;
}