```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> cellsInRange(string s) {
    vector<string> ans;

    for (char ch = s[0]; ch <= s[3]; ch++) {
        for (char r = s[1]; r <= s[4]; r++) {
            string cell = "";
            cell += ch;
            cell += r;

            ans.push_back(cell);
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    vector<string> result = cellsInRange(s);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";

        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
```
