
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> fibonacci(int n) {
        vector<int> result;
        int prev = 0, curr = 1;

        for (int i = 0; i < n; i++) {
            result.push_back(prev);

            int next = prev + curr;
            prev = curr;
            curr = next;
        }

        return result;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    vector<int> result = obj.fibonacci(n);

    cout << "Fibonacci series: ";
    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
