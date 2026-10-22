#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n, 0));

    int num = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // 1. Row: Left to Right
        for (int j = left; j <= right; j++) {
            a[top][j] = num++;
        }
        top++;

        // 2. Column: Top to Bottom
        for (int i = top; i <= bottom; i++) {
            a[i][right] = num++;
        }
        right--;

        // 3. Row: Right to Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                a[bottom][j] = num++;
            }
            bottom--;
        }

        // 4. Column: Bottom to Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = num++;
            }
            left++;
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
