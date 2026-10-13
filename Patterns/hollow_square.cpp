
/*
    Problem: Hollow Square

    Approach:
    Only the boundary of the square contains stars.
    The inner part contains spaces.

    Algorithm:
    1. Create a vector to store the rows.
    2. Loop through each row from 0 to n - 1.
    3. Loop through each column from 0 to n - 1.
    4. If the cell is on the boundary, add a star.
       Otherwise, add a space.
    5. Store each completed row in the vector.
    6. Return the vector.

    Time Complexity: O(n^2)
    Space Complexity: O(n^2)
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> hollowSquare(int n) {
        vector<string> result;

        for (int i = 0; i < n; i++) {
            string row;

            for (int j = 0; j < n; j++) {
                // Print stars only on the boundary
                if (i == 0 || i == n - 1 ||
                    j == 0 || j == n - 1) {
                    row += '*';
                } else {
                    row += ' ';
                }
            }

            result.push_back(row);
        }

        return result;
    }
};

int main() {
    Solution sol;
    int n = 5;

    vector<string> result = sol.hollowSquare(n);

    for (const string& row : result) {
        cout << row << '\n';
    }

    return 0;
}
