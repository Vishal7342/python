/* WAP to create Quatation class with data member
item_code, item_name, price and member function like getdetails,
printdetail, gettotalprice.Demonstrate the use of this class by
creating array of five Quatation object. */

#include <iostream.h>
#include <conio.h>

class Quatation {
private:
    int item_code;
    char item_name[50];
    float price;

public:
    void getdetails() {
	cout << "Enter Item Code: ";
	cin >> item_code;
	cout << "Enter Item Name: ";
	cin.ignore(); // Ignore any remaining newline characters from previous input
	cin.getline(item_name, 50);
	cout << "Enter Price: ";
	cin >> price;
    }

    void printdetail() {
	cout << "\nItem Details:";
	cout << "\nItem Code: " << item_code;
	cout << "\nItem Name: " << item_name;
	cout << "\nPrice: " << price << endl;
    }

    float gettotalprice() {
	return price;
    }
};

int main() {
    clrscr(); // Clear the screen (from conio.h)

    Quatation quot_array[5]; // Array of 5 Quatation objects

    // Input details for each Quatation object
    for (int i = 0; i < 5; ++i) {
	cout << "\nEnter details for Quatation " << (i + 1) << ":\n";
	quot_array[i].getdetails();
    }

    // Print details for each Quatation object
    for (int j = 0; j < 5; ++j) {
	cout << "\nDetails of Quatation " << (j + 1) << ":\n";
	quot_array[j].printdetail();
    }

    // Calculate and print total price
    float total_price = 0.0;
    for (int k = 0; k < 5; ++k) {
	total_price += quot_array[k].gettotalprice();
    }
    cout << "\nTotal Price of all Quatations: " << total_price << endl;

    cout << "\nPress any key to exit...";
    getch(); // Wait for a key press before exiting (from conio.h)
    return 0;
}