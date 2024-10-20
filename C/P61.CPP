/* Write a main program that calls a deeply nested function containing an exception. Incorporate necessary exception handling mechanism */

#include <iostream.h>
#include <conio.h>
#include <fstream.h>

void processFileContent(ifstream &file) {
    if (!file) {
        cout << "File is not open" << endl;
        return;
    }
    char line[256];
    while (file.getline(line, 256)) {
        // Check if the file has errors
        if (file.fail()) {
            cout << "Error occurred while reading the file" << endl;
            return;
        }
        // Check for empty lines
        if (line[0] == '\0') {
            cout << "Empty line encountered" << endl;
            continue;  // Skip empty lines and continue processing
        }
        cout << "Processing line: " << line << endl;
    }

    // Check for stream errors after reading
    if (file.bad()) {
        cout << "Error occurred while reading the file" << endl;
    }
}

void openAndProcessFile(const char *fileName) {
    ifstream file(fileName);
    if (!file) {
        cout << "Failed to open file: " << fileName << endl;
        return;
    }
    processFileContent(file);
}
void main() {
	clrscr(); // Clear the screen
    const char *fileName = "P61.txt";
    openAndProcessFile(fileName);
	cout << "\n\n Press any key to exit..."; // Prompt user
    getch(); // Wait for user input to close
}