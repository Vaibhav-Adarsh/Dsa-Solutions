#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> primesUpTo(int n) {
        vector<int> result;

        for (int m = 2; m <= n; m++) {
            bool prime = true;

            for (int d = 2; d < m; d++) {
                if (m % d == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                result.push_back(m);
            }
        }

        return result;
    }
};

int main(){
    Solution obj;

    int n;
    cout << "Enter n: " ;
    cin>> n;

     vector<int> primes = obj.primesUpTo(n);

    cout << "Prime numbers up to " << n << ": ";

    for (int p : primes) {
        cout << p << " ";
    }

    cout << endl;

    return 0;
}