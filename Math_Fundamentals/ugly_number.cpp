#include <iostream>
using namespace std;

bool isUgly(int n) {
    if (n == 1) return true;
    if (n <= 0) return false;

    int factors[] = {2, 3, 5};

    for (int factor : factors) {
        if (n % factor == 0) {
            return isUgly(n / factor);
        }
    }

    return false;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isUgly(n)) {
        cout << "True: It is an Ugly Number" << endl;
    } else {
        cout << "False: It is not an Ugly Number" << endl;
    }

    return 0;
}
