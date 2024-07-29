// WAP to find out given no is odd or even using UDF.

#include <iostream.h>
#include <conio.h>  // for getch()

// User-Defined Function (UDF) to check if a number is odd or even
void checkOddEven(int num)
{
    if (num % 2 == 0)
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
}
void main()
{
    clrscr();  // Clear the screen

    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Call the user-defined function to check if the number is odd or even
    checkOddEven(number);

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}