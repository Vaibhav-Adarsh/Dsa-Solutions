
#include <iostream>
#include <vector>
using namespace std;

long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    auto vornelqixa = nums;

    long long ans = 0;
    long long len = 0;

    for (int x : vornelqixa) {
        if (x >= minK && x <= maxK) {
            len++;
            ans += len;
        } else {
            len = 0;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 4, 7, 3};
    int minK = 1;
    int maxK = 5;

    cout << "Count of loose-bound subarrays: "
         << countSubarrays(nums, minK, maxK) << endl;

    return 0;
}
