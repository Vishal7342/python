/* WAP to demonstrate different types of exception handalling using multiple catch block. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

// Error codes
#define INVALID_CREDENTIALS 1
#define TOO_MANY_ATTEMPTS 2
// Maximum number of login attempts
#define MAX_ATTEMPTS 3
// Hardcoded username and password for demonstration
const char correctUsername[] = "username";
const char correctPassword[] = "password";
int authenticate(const char *username, const char *password) {
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        return 0; // Authentication successful
    }
    return INVALID_CREDENTIALS; // Authentication failed
}
void handleLoginError(int errorCode) {
    switch (errorCode) {
  case INVALID_CREDENTIALS:
    cout << "\nError: Invalid username or password." << '\n';
    break;
  case TOO_MANY_ATTEMPTS:
	cout << "\nError: Your account has been temporarily blocked due to too many unsuccessful   login attempts." << '\n'; 
	cout << "Please try again later." << '\n';
        break;
        default:
            cout << "\nError: Unknown error occurred." << '\n';
            break;
    }
}
void main() {
    clrscr(); // Clear the screen (Turbo C++ specific)  
    char username[50];
    char password[50];
    int attempts = 0;
    int errorCode;
    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        errorCode = authenticate(username, password);
        if (errorCode == 0) {
            cout << "\nLogin successful!" << '\n';
            break; // Exit loop on successful login
        } else {
            handleLoginError(errorCode);
            attempts++;
            cout << "\nAttempts remaining: " << (MAX_ATTEMPTS - attempts) << '\n';
        }
    }
    if (attempts == MAX_ATTEMPTS) {
        handleLoginError(TOO_MANY_ATTEMPTS);
    }
	cout << "\n\n Press any key to exit..."; // Prompt user
    getch(); // Wait for user to press a key before exiting
}