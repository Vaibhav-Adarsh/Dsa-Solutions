#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> floydsTriangle(int n) {
        vector<vector<int>> ans;
        int num = 1;

        for (int i = 1; i <= n; i++) {
            vector<int> row;

            for (int j = 0; j < i; j++) {
                row.push_back(num);
                num++;
            }

            ans.push_back(row);
        }

        return ans;
    }
};

int main() {
    Solution s;                          // Object creation

    vector<vector<int>> result =
        s.floydsTriangle(5);              // Function call

    for (auto row : result) {             // Traverse rows
        for (auto num : row) {            // Traverse numbers
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
