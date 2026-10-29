// # LeetCode 171 — Excel Sheet Column Number

// **Difficulty:** Easy  
// **Topic:** Math, String  
// **Language:** C++

#include <iostream>
#include <string>
using namespace std;

int titleToNumber(string columnTitle) {
    long long ans = 0;

    for (char ch : columnTitle) {
        ans = ans * 26 + (ch - 'A' + 1);
    }

    return (int)ans;
}

int main() {
    string columnTitle;

    cout << "Enter Excel column title: ";
    cin >> columnTitle;

    cout << "Column number: "
         << titleToNumber(columnTitle) << endl;

    return 0;
}



// **Input:**
// ```text
// AB
// ```

// **Output:**
// ```text
// Column number: 28
// ```

// ## Approach
// 1. Traverse each character of the string.
// 2. Multiply the current answer by 26.
// 3. Add the current character's value using `ch - 'A' + 1`.
// 4. Return the final number.

// ## Complexity Analysis
// - **Time Complexity:** O(n)
// - **Space Complexity:** O(1) auxiliary space.
