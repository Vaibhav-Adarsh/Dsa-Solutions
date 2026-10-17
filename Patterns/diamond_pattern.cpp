/* In this pattern we combine pyramid of stars and inverted pyramid of stars*/

#include <iostream>
using namespace std;

class Solution {
public:
    void diamondPattern(int n) {
        if (n <= 0) {
            return;
        }

        // Upper pyramid
        for (int row = 1; row <= n; row++) {
            for (int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            for (int star = 1; star <= 2 * row - 1; star++) {
                cout << "*";
            }

            cout << "\n";
        }

        // Lower inverted pyramid
        for (int row = n - 1; row >= 1; row--) {
            for (int space = 1; space <= n - row; space++) {
                cout << " ";
            }

            for (int star = 1; star <= 2 * row - 1; star++) {
                cout << "*";
            }

            cout << "\n";
        }
    }
};

int main() {
    Solution sol;
    int n = 5;

    sol.diamondPattern(n);

    return 0;
}
