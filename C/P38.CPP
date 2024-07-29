/* Class item has 3 member item code, item name, and item price inside it. 
WAP which demonstrate destructor with atleast one block in main function. */

#include <iostream.h>
#include <conio.h>
#include <string.h>

class Item {
private:
    int itemCode;
    char itemName[50];
    float itemPrice;

public:
    // Default constructor
    Item() {
        itemCode = 0;
        strcpy(itemName, "");
        itemPrice = 0.0;
    }
    // Parameterized constructor
    Item(int code, const char* name, float price) {
        itemCode = code;
        strcpy(itemName, name);
        itemPrice = price;
    }
    // Destructor
    ~Item() {
        cout << "Destructor called for item: " << itemName << endl;
    }
    // Function to display item details
    void displayItem() {
        cout << "Item Code: " << itemCode << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Item Price: " << itemPrice << endl;
    }
    // Function to set item details from user input
    void setItemDetails() {
        cout << "Enter Item Code: ";
        cin >> itemCode;

        cout << "Enter Item Name: ";
        cin.ignore(); // Ignore newline left in buffer
        cin.getline(itemName, 50);

        cout << "Enter Item Price: ";
        cin >> itemPrice;
    }
};
int main() {
    clrscr(); // Clear the screen
    // Create an Item object using default constructor
    Item item;
    // Set item details from user input
    item.setItemDetails();
    // Display item details
    cout << "\nItem Details:" << endl;
    item.displayItem();
    getch(); // Wait for a key press before exiting
    return 0;
}