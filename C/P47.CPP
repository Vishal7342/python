#include <iostream>
#include <string>
#include <conio.h>
#include <cstring> // Add this line
using namespace std;

class MyString {
private:
    char* str;
    bool ownString; // Flag to track ownership of the string
public:
    // Constructor
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        ownString = true; // Set ownership to true
    }
    // Copy constructor
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
        ownString = true; // Set ownership to true
    }
    // Destructor
    ~MyString() {
        if (ownString) {
            delete[] str;
        }
    }
    // Overload binary + operator for string concatenation
    MyString operator+(const MyString& other) const {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString temp(newStr);
        temp.ownString = true; // Set ownership to true
        return temp;
    }
    // Method to display the string
    void display() const {
        cout << str << endl;
    }
    // Constructor to initialize with a dynamically allocated string
    MyString(char* s) {
        str = s;
        ownString = false; // Set ownership to false
    }
};

// Main function
int main() {
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
/*
Output :-

String 1: Hello.. 
String 2: World!!
Concatenated string: Hello.. World!!

Press any key to exit...
*/
