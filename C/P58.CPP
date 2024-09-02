/* WAP to demonstrate divide by zero exception handaling using try catch. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

int isValidEmail(const char *email) {
    char *at_pos = strchr(email, '@');
    if (at_pos == NULL || at_pos == email || *(at_pos + 1) == '\0') {
        return 0; // No '@' found or it is at the start or there is no domain part
    }
    char *dot_pos = strchr(at_pos + 1, '.');
    if (dot_pos == NULL || *(dot_pos + 1) == '\0') {
        return 0; // No '.' found after '@' or it is the last character
    }
    return 1; // Return 1 for true
}
void main() {
    clrscr();
    char email[100]; // Array to hold the email input
    cout << "Enter email address: ";
    cin.getline(email, 100); // Read email address from user
    if (isValidEmail(email)) {
        cout << "Email address is valid!" << '\n';
    } else {
        cout << "Invalid email address. It must contain '@' and 'gmail.com' after it." << '\n';
    }
	cout << "\n\n\n Press any key to exit..."; // Prompt user
    getch(); // Wait for a key press before exiting
}