
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }

    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}

int main() {
    int n = 28;

    if (isPerfect(n)) {
        cout << n << " is a Perfect Number" << endl;
    } else {
        cout << n << " is not a Perfect Number" << endl;
    }

    return 0;
}
