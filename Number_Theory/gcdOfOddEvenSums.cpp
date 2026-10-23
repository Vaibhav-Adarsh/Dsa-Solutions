//leetcode no - 3658

#include <iostream>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;

        // Sum of first n odd numbers
        for (int i = 1; i <= n; i++) {
            sumOdd += 2 * i - 1;
        }

        // Sum of first n even numbers
        for (int i = 1; i <= n; i++) {
            sumEven += 2 * i;
        }

        // Calculate GCD using Euclidean Algorithm
        while (sumEven != 0) {
            int rem = sumOdd % sumEven;
            sumOdd = sumEven;
            sumEven = rem;
        }

        return sumOdd;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    cout << "GCD of odd and even sums: "
         << obj.gcdOfOddEvenSums(n) << endl;

    return 0;
}
