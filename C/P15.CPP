// WAP to find average using UDF, pass array as a parameter in the average function.

#include <iostream.h>
#include <conio.h>  // for getch()

const int MAX_SIZE = 100;  // Maximum size of the array

// Function to calculate average of elements in an array
double calculateAverage(int arr[], int size)
{
    double sum = 0.0;
    double average;

    // Calculate sum of array elements
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    // Calculate average
    if (size > 0)
    {
        average = sum / size;
    }
    else
    {
        average = 0.0;  // Handle division by zero or empty array case
    }

    return average;
}

void main()
{
    clrscr();  // Clear the screen

    int arr[MAX_SIZE];
    int size;

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

    // Call the function to calculate the average
    double avg = calculateAverage(arr, size);

    // Output the average
    cout << "\nAverage of the numbers: " << avg << endl;

    // Wait for user to press a key before exiting
    cout << "\nPress any key to exit...";
    getch();  // Wait for a key press
}