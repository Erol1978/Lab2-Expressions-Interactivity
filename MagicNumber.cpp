#include <iostream>
using namespace std;

int main() {
    int fav;

    cout << "Please enter your favorite number: ";
    cin >> fav;

    int result = fav;
    result = result * 2;
    result = result + 10;
    result = result / 2;
    result = result - fav;

    cout << "Your magic number is... " << result << "!" << endl;

    return 0;
}
