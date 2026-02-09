#include <iostream>
using namespace std;

int main() {
    const double taxRate = 0.075;
    double price;

    cout << "Enter the price of the item: ";
    cin >> price;

    double tax = price * taxRate;
    double total = price + tax;

    cout << "Original Price: $" << price << endl;
    cout << "Sales Tax: $" << tax << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
