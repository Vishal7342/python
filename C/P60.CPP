/* WAP to demonstrate the use of throw. */

#include <iostream.h>
#include <fstream.h>
#include <conio.h>

void readFile(const char* filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file!!" << endl;
        return; // Handle the error without throwing exceptions
    }
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    file.close();
}
int main() {
    clrscr(); // Clear the screen
    const char* filename = "P60.txt";
    readFile(filename);
	cout << "\n\n Press any key to exit..."; // Prompt user
    getch(); // Wait for user input to close
    return 0;
}