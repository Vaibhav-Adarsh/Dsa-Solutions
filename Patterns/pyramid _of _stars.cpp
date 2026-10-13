
/*
    Problem: Pyramid of Stars

    Approach:
    Think of each row as three parts:
    SPACE + STARS

    As we move to the next row:
    - The number of spaces decreases by 1.
    - The number of stars increases by 2.

    Algorithm:
    1. Create a vector to store the pyramid rows.
    2. Iterate through rows from 1 to n.
    3. Add n - i spaces to center the pyramid.
    4. Add 2 * i - 1 stars to the current row.
    5. Store the completed row in the result vector.
    6. Return the vector containing all rows.

    Time Complexity: O(n^2)
    Space Complexity: O(n^2) for the returned pattern.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> pyramidOfStars(int n) {
        vector<string> result;

        // Build the pyramid row by row
        for (int i = 1; i <= n; i++) {
            string row;

            // Add spaces before the stars
            for (int j = 0; j < n - i; j++) {
                row += ' ';
            }

            // Add stars: 1, 3, 5, 7, ...
            for (int j = 0; j < 2 * i - 1; j++) {
                row += '*';
            }

            // Store the completed row
            result.push_back(row);
        }

        return result;
    }
};


int main(){
    solution sol;
    int n = 5;

    vector<string> result = sol.pyramidOfStars(n);

    for (const string& row : result) {
        cout << row << '\n';
    }

    return 0;
}
