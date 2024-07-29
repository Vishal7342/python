// Create a class item having public data members like Itemno, name and prise WAP to print item data using class and object.

#include <iostream.h>
#include <conio.h>
#include <string.h>

class item {
public:
    int Itemno;
    char name[50];
    float price;
};

int main() {
    clrscr();  // Clear screen in Turbo C++

    // Create an object of class item
    item item1;

    // Assign values to the public data members
    item1.Itemno = 1;
    strcpy(item1.name, "Keyboard");
    item1.price = 499.99;

    // Print item data
    cout << "Item Number: " << item1.Itemno << endl;
    cout << "Item Name: " << item1.name << endl;
    cout << "Item Price: " << item1.price << endl;

    getch();  // Wait for a key press before exiting
    return 0;
}