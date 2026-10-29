
#include <iostream>
#include <string>
using namespace std;

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }

    int a = str1.size();
    int b = str2.size();

    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    return str1.substr(0, a);
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    string result = gcdOfStrings(str1, str2);

    if (result.empty()) {
        cout << "GCD of strings: \"\"" << endl;
    } else {
        cout << "GCD of strings: " << result << endl;
    }

    return 0;
}
// ```

// ### Example 1

// **Input:**
// ```text
// ABCABC
// ABC
// ```

// **Output:**
// ```text
// GCD of strings: ABC
// ```

// ### Example 2

// **Input:**
// ```text
// ABABAB
// ABAB
// ```

// **Output:**
// ```text
// GCD of strings: AB
// ```

// ### Example 3

// **Input:**
// ```text
// LEET
// CODE
// ```

// **Output:**
// ```text
// GCD of strings: ""
// ```

// ### Complexity Analysis
// - **Time:** \(O(n+m)\), where `n` and `m` are the lengths of the strings.
// - **Space:** \(O(n+m)\) auxiliary space in the worst case for concatenation.

