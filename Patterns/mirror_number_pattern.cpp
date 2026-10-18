
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> mirrorNumberPattern(int n) {
        vector<string> ans;

        for (int i = 1; i <= n; i++) {
            string row ;

            // Print increasing numbers
            for (int j = 1; j <= i; j++) {
                row += to_string(j);
            }

            // Print decreasing numbers
            for (int j = i - 1; j >= 1; j--) {
                row += to_string(j);
            }

            // Store the completed row
            ans.push_back(row);
        }

        return ans;
    }
};

int main() {
    Solution s;

    // Generate the pattern for n = 3
    vector<string> result = s.mirrorNumberPattern(3);

    // Print the pattern
    for (const string& row : result) {
        cout << row << endl;
    }

    return 0;
}
