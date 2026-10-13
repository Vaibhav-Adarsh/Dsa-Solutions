/*
    Algorithm

1. Create an empty list to hold the rows.
2. Loop i from 1 to n, where i is both the row number and its length.
3. For each row, build a string by looping j from 0 to i - 1.
4. If j == 0, j == i - 1, or i == n, append a *, otherwise append a space.
5. Add the finished row string to the list.
6. After all rows are built, return the list.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> hollowtriangle(int n) {
        vector<string> result;

        for (int i = 1; i < n; i++) {
            string row;

            for (int j = 0; j < i; j++) {
                if (i == 0 || i == n  ||
                    j == 0 || j == i - 1) {
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

    vector<string> result = sol.hollowtriangle(n);

    for (const string& row : result) {
        cout << row << '\n';
    }

    return 0;
}
