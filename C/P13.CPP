// WAP to find reverse of given number.

#include <iostream.h>
#include <conio.h>  // for getch()

// Function to find reverse of a number
int reverseNumber(int num)
{
    int reversedNum = 0;
	
    // Iterate through each digit of the number
    while (num != 0)
    {
        int digit = num % 10;  // Extract the last digit
        reversedNum = reversedNum * 10 + digit;  // Append digit to reversed number
        num = num / 10;  // Remove the last digit
    }
    return reversedNum;
}
void main()
{
    clrscr();  // Clear the screen

    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to find the reverse of the number
    int reversedNumber = reverseNumber(number);

    // Output the reversed number
    cout << "Reverse of " << number << " is: " << reversedNumber << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}