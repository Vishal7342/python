// WAP to find count of poisitive, negative and zero numbers count from given array.

#include <iostream.h>
#include <conio.h>  // for getch()

const int MAX_SIZE = 100;  // Maximum size of the array

// Function to find count of positive, negative, and zero numbers
void countPositiveNegativeZero(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount)
{
    positiveCount = 0;
    negativeCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
            positiveCount++;
        else if (arr[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }
}

void main()
{
    clrscr();  // Clear the screen

    int arr[MAX_SIZE];
    int size;
    int positiveCount, negativeCount, zeroCount;

    // Input size of the array
    cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    cin >> size;

    // Input elements of the array
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Call function to count positive, negative, and zero numbers
    countPositiveNegativeZero(arr, size, positiveCount, negativeCount, zeroCount);

    // Output the counts
    cout << "\nCount of positive numbers: " << positiveCount << endl;
    cout << "Count of negative numbers: " << negativeCount << endl;
    cout << "Count of zero numbers: " << zeroCount << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}