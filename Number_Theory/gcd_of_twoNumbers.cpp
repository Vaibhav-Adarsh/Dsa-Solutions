//Remember the Eucledian Formula in the questions of GCD

#include <iostream>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return a;
    }
};

int main() {
    Solution obj;

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b
         << " is " << obj.gcd(a, b) << endl;

    return 0;
}
