#include <iostream>
using namespace std;

int main() {
    int people;
    int slicesPerPizza;
    int slicesEach;

    cout << "How many people are attending the party? ";
    cin >> people;

    cout << "How many slices are in a pizza? ";
    cin >> slicesPerPizza;

    cout << "How many slices will each person eat? ";
    cin >> slicesEach;

    int totalSlicesNeeded = people * slicesEach;

    int pizzas = totalSlicesNeeded / slicesPerPizza;
    if (totalSlicesNeeded % slicesPerPizza != 0) {
        pizzas = pizzas + 1;
    }

    int leftoverSlices = pizzas * slicesPerPizza - totalSlicesNeeded;

    cout << "You will need to order " << pizzas << " pizzas." << endl;
    cout << "There will be " << leftoverSlices << " leftover slices." << endl;

    return 0;
}
