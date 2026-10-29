#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToTitle(int columnNumber) {
    string ans;

    while (columnNumber) {
        columnNumber--;

        ans = ans + (char)(columnNumber % 26 + 'A');

        columnNumber = columnNumber / 26;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
  int columnNumber;
  cout << "Enter column number: ";
  cin >> columnNumber;
  string result = convertToTitle(columnNumber);

  cout << "Column title: " << result << endl;

  return 0;
}
