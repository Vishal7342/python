// WAP to convert decimal number to binary number 

#include <iostream.h>
#include <conio.h>  // for getch()

// Function to convert decimal to binary
void decimalToBinary(int decimal)
{
    int binary[32];  // Array to store binary digits
    int index = 0;

    // Handle case when decimal number is 0
    if (decimal == 0)
    {
        cout << "Binary equivalent: 0" << endl;
        return;
    }
    // Convert decimal to binary
    while (decimal > 0)
    {
        binary[index++] = decimal % 2;
        decimal = decimal / 2;
    }

    // Output the binary equivalent
    cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; --i)
    {
        cout << binary[i];
    }
    cout << endl;
}
void main()
{
    clrscr();  // Clear the screen

    int decimal;

    // Input a decimal number from the user
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Call the function to convert decimal to binary
    decimalToBinary(decimal);

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}
