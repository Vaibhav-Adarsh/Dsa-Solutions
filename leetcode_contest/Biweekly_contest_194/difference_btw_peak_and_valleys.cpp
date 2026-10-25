
#include <iostream>
#include <vector>
using namespace std;

int peakValleyDifference(vector<int>& nums) {
    int n = nums.size();
    int peakSum = 0, valleySum = 0;

    for (int i = 1; i < n - 1; i++) {
        if (nums[i] > nums[i - 1] &&
            nums[i] > nums[i + 1]) {
            peakSum += nums[i];
        }
        else if (nums[i] < nums[i - 1] &&
                 nums[i] < nums[i + 1]) {
            valleySum += nums[i];
        }
    }

    return peakSum - valleySum;
}

int main() {
    vector<int> nums = {2, 5, 1, 4, 7, 3};

    cout << "Peak-Valley Difference: "
         << peakValleyDifference(nums) << endl;

    return 0;
}
