
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Calculate GCD using Euclidean Algorithm
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }

    long long maxPairStrength(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();

        // Check every possible pair
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long val = 1LL * nums[i] * nums[j];

                int g = gcd(nums[i], nums[j]);
                val = val / (1LL * g * g);

                ans = max(ans, val);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 0;
    }

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Maximum pair strength: "
         << obj.maxPairStrength(nums) << endl;

    return 0;
}
