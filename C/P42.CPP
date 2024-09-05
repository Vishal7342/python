/* Class User has a data member age. Class License is derived from class User. 
It has a member function Check() which checks whether person can get the driving license or not. 
Write a Program which performs this mechanism. */

#include <iostream.h>
#include <conio.h> // for getch()

// Base class User
class User {
protected:
    int age;
public:
    // Constructor
    User(int _age) {
        age = _age;
    }

    // Getter for age
    int getAge() {
        return age;
    }
};
// Derived class License
class License : public User {
public:
    // Constructor
    License(int _age) : User(_age) {}
    // Function to check eligibility for driving license
    void Check() {
        if (age >= 18) {
            cout << "You are eligible to get a driving license." << endl;
        } else {
            cout << "You are not eligible to get a driving license." << endl;
        }
    }
};

// Main function
void main() {
	clrscr(); // Clear the screen
    int userAge;
    // Get age from user
    cout << "Enter your age: ";
    cin >> userAge;
    // Create an instance of License
    License user(userAge);
    // Call the Check method
    user.Check();
    // Pause before exiting
    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press
}
/*
Output:-

Enter your age: 18
You are eligible to get a driving license.

Press any key to exit...
