// Create a class item having private data members like Itemno, name, prise and public member function print. WAP to print item data using class and object.

#include <iostream.h>
#include <conio.h>

class Item {
private:
    int Itemno;
    char name[30];
    float prise;

public:
    void getItemData() {
        cout << "Enter Item Number: ";
        cin >> Itemno;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Item Price: ";
        cin >> prise;
    }

    void print() {
        cout << "\nItem Number: " << Itemno;
        cout << "\nItem Name: " << name;
        cout << "\nItem Price: " << prise << endl;
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Item item; // Create an object of class Item
    item.getItemData(); // Get input for item data
    item.print(); // Print item data

    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}