
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half of the hourglass
    for (int i = n; i >= 1; i--) {

        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the hourglass
    for (int i = 2; i <= n; i++) {

        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
