#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long factorial(int n) {
        // Base case
        if (n == 0) {
            return 1;
        }

        // Recursive case
        return (long long)n * factorial(n - 1);
    }
};

int main(){
    Solution obj;

    int n;
    cout << "Enter a number:";
    cin >> n;

        if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is "
             << obj.factorial(n) << endl;
    }

    return 0;
}