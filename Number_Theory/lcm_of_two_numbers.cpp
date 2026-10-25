#include <iostream>
#include <numeric>
using namespace std;

long long lcm(int a, int b) {
    return 1LL * (a / gcd(a, b)) * b;
}

int main() {
    int a = 12, b = 18;
    cout << lcm(a, b);
}
