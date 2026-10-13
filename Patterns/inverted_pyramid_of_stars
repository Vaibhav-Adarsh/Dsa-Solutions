/* For this we can do two things first Print pyramid of stars and then reverse it 
   Second one is to print star space star approach 
 
  Algorithm

1. Create an empty list to hold the rows.
2. Loop i from 1 to n, where i is the current row number.
3. Append i - 1 spaces to a fresh string.
4. Append 2(n - i) + 1 stars to the same string.
5. Add the finished string to the list.
6. After the loop, return the list.

*/ 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class solution{
public:
    vector<string> invertedPyramid(int n){
        vector<string> result;
        for(int i = 0; i<=n; i++){
            string row;
            row += ' ';
            for(int j = 1; j < n-i; j++ ){
                row += '*';
            }
            for(int j = 1; j< 2* n - 1 - 2 * i; j++){
                row += ' ';
            }
            
            result.push_back(row);
        }
        return result;
    }
};

int main(){
    solution sol;
    int n = 5;

    vector<string> result = sol.invertedPyramid(n);

    for (const string& row : result) {
        cout << row << '\n';
    }

    return 0;
}
